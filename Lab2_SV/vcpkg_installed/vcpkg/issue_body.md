Package: catch2:x64-linux@3.4.0

**Host Environment**

- Host: x64-linux
- Compiler: GNU 11.4.0
-    vcpkg-tool version: 2024-03-14-7d353e869753e5609a1f1a057df3db8fd356e49d
    vcpkg-scripts version: 501cb01e5 2024-04-16 (2 days ago)

**To Reproduce**

`vcpkg install `
**Failure logs**

```
-- Downloading https://github.com/catchorg/Catch2/archive/v3.4.0.tar.gz -> catchorg-Catch2-v3.4.0.tar.gz...
-- Extracting source /root/Processor Design/Lab2_SV/_deps/vcpkg-src/downloads/catchorg-Catch2-v3.4.0.tar.gz
-- Applying patch fix-install-path.patch
-- Using source at /root/Processor Design/Lab2_SV/_deps/vcpkg-src/buildtrees/catch2/src/v3.4.0-a183b6a984.clean
-- Configuring x64-linux
-- Building x64-linux-dbg
-- Building x64-linux-rel
-- Fixing pkgconfig file: /root/Processor Design/Lab2_SV/_deps/vcpkg-src/packages/catch2_x64-linux/lib/pkgconfig/catch2-with-main.pc
-- Fixing pkgconfig file: /root/Processor Design/Lab2_SV/_deps/vcpkg-src/packages/catch2_x64-linux/lib/pkgconfig/catch2.pc
CMake Error at scripts/cmake/vcpkg_find_acquire_program.cmake:166 (message):
  Could not find pkg-config.  Please install it via your package manager:

      sudo apt-get install pkg-config
Call Stack (most recent call first):
  scripts/cmake/vcpkg_fixup_pkgconfig.cmake:193 (vcpkg_find_acquire_program)
  /root/.cache/vcpkg/registries/git-trees/5796c1c0513a7b49f135e8acdd1976f53e9944ea/portfile.cmake:25 (vcpkg_fixup_pkgconfig)
  scripts/ports.cmake:175 (include)



```
**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "week-two-lab",
  "version": "1.0.0",
  "description": "Template for week two lab",
  "homepage": "https://github.com/NYU-Processor-Design/nyu-cmake",
  "maintainers": [
    "Vito Gamberini <vito@gamberini.email>"
  ],
  "license": "CC0-1.0",
  "dependencies": [
    "nyu-cmake",
    "catch2"
  ],
  "vcpkg-configuration": {
    "default-registry": {
      "kind": "git",
      "baseline": "5a38b5ec0eee3d1a1a6faab5e944617fee2697cf",
      "repository": "https://github.com/microsoft/vcpkg.git"
    },
    "registries": [
      {
        "kind": "git",
        "baseline": "78f50d1f7f6f21a9fb28b9a7a3cab021e600830c",
        "repository": "https://github.com/NYU-Processor-Design/nyu-registry.git",
        "packages": [
          "nyu-cmake"
        ]
      }
    ]
  }
}

```
</details>
