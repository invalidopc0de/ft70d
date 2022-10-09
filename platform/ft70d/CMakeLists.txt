set(CMAKE_C_STANDARD 11)

add_library(platform_70d
        startup_h8sx.c
        iodefine.h
        typedefine.h
        )

target_include_directories(platform_70d PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

target_link_libraries(platform_70d
        c
        )

set_target_properties(platform_70d PROPERTIES LINK_DEPENDS ${LINKER_SCRIPT})