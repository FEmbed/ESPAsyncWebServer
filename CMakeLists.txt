idf_build_get_property(components_to_build BUILD_COMPONENTS)

set(src)
set(include)
set(priv_requires)

set(srcs    
        "src/AsyncEventSource.cpp"
        "src/AsyncWebSocket.cpp"
        "src/SPIFFSEditor.cpp"
        "src/WebAuthentication.cpp"
        "src/WebHandlers.cpp"
        "src/WebRequest.cpp"
        "src/WebResponses.cpp"
        "src/WebServer.cpp"
)

set(include "src" 
            )

idf_component_register(SRCS "${srcs}"
    INCLUDE_DIRS ${include}
    REQUIRES "FEmbed-Arduino FEmbed-OS FEmbed-FS FEmbed-WiFi AsyncTCP"
    PRIV_REQUIRES ${priv_requires})

target_compile_options(${COMPONENT_LIB} PRIVATE -fno-rtti)
target_compile_definitions(${COMPONENT_TARGET} PUBLIC -DESP32)