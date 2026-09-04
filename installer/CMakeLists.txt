find_package(wxWidgets REQUIRED COMPONENTS core base)

include(${wxWidgets_USE_FILE})

add_executable(gyrfalcon-installer
    main.cpp
    installer.cpp
)

target_include_directories(gyrfalcon-installer
    PRIVATE
        .
)

target_link_libraries(gyrfalcon-installer
    PRIVATE
        ${wxWidgets_LIBRARIES}
)
