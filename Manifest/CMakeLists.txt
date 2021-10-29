set(SOURCE_FILES ManifestApp.cpp)

set(HEADER_FILES Manifest.h ManifestApp.h ManifestUtils.h)

add_library(manifest_lib SHARED ${SOURCE_FILES} ${HEADER_FILES})

target_precompile_headers(manifest_lib PRIVATE pch.h)