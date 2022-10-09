# the name of the target operating system
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_CROSSCOMPILING 1)

# which compilers to use for C and C++
set(CMAKE_C_COMPILER /usr/bin/h8300-elf-gcc)
set(CMAKE_CXX_COMPILER /usr/bin/h8300-elf-g++)

# where is the target environment located
set(CMAKE_FIND_ROOT_PATH /usr/h8300-elf;/usr/lib/gcc/h8300-elf/12)

# adjust the default behavior of the FIND_XXX() commands:
# search programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

# search headers and libraries in the target environment
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(LINKER_SCRIPT "${CMAKE_CURRENT_LIST_DIR}/h8300sx.ld")
add_compile_options(
        -msx
        -Wl,-T${LINKER_SCRIPT}
)

add_link_options(
        -nostartfiles
        -nodefaultlibs
        -L/usr/h8300-elf/lib/h8sx
        -T${LINKER_SCRIPT}
)