# Setup (Fedora 36)

1. Enable the h8300-toolchains COPR repo:

`sudo dnf copr enable invalidopcode/h8300-toolchains`

2. Install toolchain components

`sudo dnf install gcc-c++-h8300-elf h8300-elf-newlib`

# Building

```
mkdir build && cd build 
cmake .. -DCMAKE_TOOLCHAIN_FILE=../toolchains/gcc-h8300-hms.cmake
make
```