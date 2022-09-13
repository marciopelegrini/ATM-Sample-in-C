cmake_minimum_required(VERSION 3.23)
project(ATM_Sample_in_C C)

set(CMAKE_C_STANDARD 11)

include_directories(inc)

add_executable(ATM_Sample_in_C
        inc/atm.h
        src/balance.c
        src/deposit.c
        src/error.c
        src/exit.c
        src/Menu.c
        src/withdraw.c
        main.c)
