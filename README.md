# GitHub Actions — C++ Build & Smoke Test

Letakkan folder ini di **root repository** yang berisi latihan C++ (misalnya: `w3schools-cpp-latihan*`).
Workflow akan:
1) Mencari **semua file `.cpp`** secara rekursif,
2) Mengompilasi menjadi binary di `./build` (C++17, `-O2 -Wall -Wextra -pedantic`),
3) Menjalankan **smoke test** (timeout 3 detik per binary),
4) Mengunggah hasil build sebagai **artifact**.

## Struktur
```
.github/workflows/cpp-ci.yml
scripts/build_all.sh
scripts/test_smoke.sh
```

## Cara Pakai
- Commit tiga file di atas ke repo Anda.
- Push/PR akan memicu workflow otomatis.
- Atau jalankan manual via **Actions → Run workflow**.

## Catatan
- Workflow menguji pada runner **Ubuntu & Windows** dengan **g++** dan **clang++**.
- Jika ada file yang perlu input user, test tetap dijalankan dengan timeout sehingga tidak menggantung.
