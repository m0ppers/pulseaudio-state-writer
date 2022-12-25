
project(
    'pulseaudio-state-writer', 'cpp', 'c',
    version: '0.0.1',
    license: 'MIT',
    meson_version: '>= 0.49.0',
    default_options : [
        'cpp_std=c++17',
        'buildtype=release',
        'default_library=static'
    ],
)

src_files = files(
    'src/main.cpp',
    'src/emit.cpp',
    'src/alabel.cpp',
    'src/pulseaudio.cpp',
)

fmt = dependency('fmt', version : ['>=8.1.1'], fallback : ['fmt', 'fmt_dep'])
jsoncpp = dependency('jsoncpp', version : ['>=1.9.2'], fallback : ['jsoncpp', 'jsoncpp_dep'])
libpulse = dependency('libpulse', required: true)

executable(
    'pulseaudio-state-writer',
    src_files,
    dependencies: [
        fmt,
        jsoncpp,
        libpulse,
    ],
    include_directories: [include_directories()],
    install: true,
)
