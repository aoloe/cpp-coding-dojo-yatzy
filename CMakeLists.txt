cmake_minimum_required(VERSION 3.6)

project(yatzy)

add_executable(yatzy
    src/main.cpp
    src/yatzy.cpp
)

target_compile_features(yatzy
  PRIVATE
    cxx_std_17
  )

target_compile_options(yatzy
  PRIVATE
    "-Wall"
    "-Werror"
)
