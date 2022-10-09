set(CMAKE_C_STANDARD 11)

add_compile_options(
        -msx
        -nostdinc
        -Wl,-T${LINKER_SCRIPT}
)

set(APP_SOURCES
        blinky.c
        )

add_executable(blinky_ft70d.mot ${APP_SOURCES})
target_link_libraries(blinky_ft70d.mot PUBLIC
        platform_70d
        )
set_target_properties(blinky_ft70d.mot PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})