#!/usr/bin/env bash
set -euo pipefail

# Root to start searching; default current directory if not provided
ROOT_DIR="${1:-.}"
# Build output directory
BUILD_DIR="${2:-./build}"

# Create build dir
mkdir -p "$BUILD_DIR"

# Find all .cpp files under ROOT_DIR (exclude third_party and build dirs if exist)
mapfile -t FILES < <(find "$ROOT_DIR" -type f -name "*.cpp" \
  -not -path "*/build/*" -not -path "*/third_party/*" | sort)

if [[ ${#FILES[@]} -eq 0 ]]; then
  echo "::warning::No .cpp files found under $ROOT_DIR"
  exit 0
fi

echo "Found ${#FILES[@]} .cpp files."
fail=0

for f in "${FILES[@]}"; do
  # Compute relative path and output file name (replace slashes with underscores)
  rel="${f#$ROOT_DIR/}"
  out="$BUILD_DIR/${rel//\//_}"
  # On Windows runners with MSYS/MinGW bash, .exe is useful
  [[ "$RUNNER_OS" == "Windows" ]] && out="${out}.exe" || true

  echo "Compiling: $f -> $out"
  # Prefer g++ if available, else clang++; use C++17 for broad compatibility
  CXX_BIN="${CXX:-g++}"
  $CXX_BIN -std=c++17 -O2 -Wall -Wextra -pedantic "$f" -o "$out" || { echo "::error::Failed: $f"; fail=1; }
done

exit $fail
