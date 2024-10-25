cmake_minimum_required(VERSION 3.29)
project(Starting C)

set(CMAKE_C_STANDARD 11)

add_executable(Starting main.c
        testing/testing.c
        datatypes/datatypes.c
        datatypes/enum.c
        datatypes/enumchallenge.c
        datatypes/formats.c
        datatypes/cliargs.c
        operators/operators.c
        looping/looping.c
)
