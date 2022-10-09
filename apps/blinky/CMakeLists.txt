set(CMAKE_C_STANDARD 11)

add_compile_options(
        -msx
        -nostdinc
        -Wl,-T${LINKER_SCRIPT}
)

add_executable(blinky.mot
        blinky.c
        )

target_link_libraries(blinky.mot PUBLIC
        platform_70d
        )

set_target_properties(blinky.mot PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})