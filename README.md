# cpp_starter_template
C++ Starter Template. With some examples.

## Build
1. Configure
    ```bash
    cmake --preset <name>
    ```
2. Build
    ```bash
    cmake --build --preset <name>
    ```
3. Install
    ```bash 
    cmake --install --preset <name> # CMake 3.15+ only
    
    ```
4. Test (Optional)
    ```bash
    ctest --preset <name>
    ```

To list the available presets that can be used, run `--list-presets`.
Some available options include `dev`, `debug`, `release`, `relwithdebinfo` etc.

**Notes:**
If you use `cmake --build` instead of directly calling the underlying build system you can use:
- `--parallel N` or `-j N` for parallel builds on *N* amount of cores (CMake 3.12+)
- `--target` (Any CMake version) or `-t` (CMake 3.15+) to pick a target. E.g. `--target clean`
- `-v` for verbose builds (CMake 3.14+)

If you use make directly instead,  you can use:
- `VERBOSE=1 make` for verbose builds

To use a compiler different to the system default:
- In the configure step, append the following:
   `-D CMAKE_C_COMPILER=gcc-10.2 -D CMAKE_CXX_COMPILER=g++-10.2`

## Thanks to the following projects
Listed in no particular order

- [cpp_starter_project](https://github.com/lefticus/cpp_starter_project) for which this template is heavily based off/started from.
- [fmtlib/fmt](https://github.com/fmtlib/fmt) A modern formatting library

## License
This program is available to anybody free of charge, under `The Unlicense` (see [LICENSE](LICENSE)).
