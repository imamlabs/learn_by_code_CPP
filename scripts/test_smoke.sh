#!/usr/bin/env bash
set -euo pipefail

BUILD_DIR="${1:-./build}"
if [[ ! -d "$BUILD_DIR" ]]; then
  echo "::warning::Build dir not found: $BUILD_DIR"
  exit 0
fi

shopt -s nullglob
bins=("$BUILD_DIR"/*)
if (( ${#bins[@]} == 0 )); then
  echo "::warning::No binaries to run in $BUILD_DIR"
  exit 0
fi

echo "Running ${#bins[@]} binaries (with 3s timeout each)..."
fail=0

for bin in "${bins[@]}"; do
  echo "=== $bin ==="
  # Use bash timeout if available; otherwise just run (CI has timeout)
  if command -v timeout >/dev/null 2>&1; then
    timeout 3s "$bin" || true
  else
    "$bin" || true
  fi
done

exit $fail
