cmake_minimum_required(VERSION 3.24)
project(Projeto_Ordenacao C)

set(CMAKE_C_STANDARD 11)

add_executable(Projeto_Ordenacao main.c ordenacao.h ordenacao.c numOps.c numOps.h copyArray.c copyArray.h printArray.c printArray.h)
