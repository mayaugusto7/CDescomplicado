cmake_minimum_required(VERSION 3.20)
project(CDescomplicado C)

set(CMAKE_C_STANDARD 99)

add_executable(CDescomplicado main.c)
add_executable(Variaveis variaveis.c)
add_executable(Output output.c)
add_executable(Input input.c)
add_executable(Atribuicao atribuicao.c)
add_executable(Constantes constantes.c)
add_executable(OperadoresAritmeticos operadores_aritmeticos.c)