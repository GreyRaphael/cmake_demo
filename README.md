# CMake Demo

This is a simple CMake project that demonstrates how to use CMake to build a simple C++ program.

tips:
1. `compile_commands.json` must be in `build` directory for `clangd`, [see in details](https://clangd.llvm.org/installation#compile_commandsjson)
2. If `compile_commands.josn` is not generated, you must add `-DCMAKE_EXPORT_COMPILE_COMMANDS=1`
3. If you want to use old dependencies, you must add `builtin-baseline` in `vcpkg.json`
4. In VSCode, Just use *CMakeTools* extension, `F1` to `CMake: Delete Cache and Reconfigure` to generate `build/vcpkg_installed/...`