cmake_minimum_required(VERSION 3.20)
project(F_E_USAL C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

# Busca todos los archivos .c en la carpeta
file(GLOB SOURCES "*.c")

# Crea un ejecutable independiente por cada archivo
foreach(SOURCE_FILE ${SOURCES})
    # Extrae el nombre del archivo sin la extensión .c (ej: ej100)
    get_filename_component(TARGET_NAME ${SOURCE_FILE} NAME_WE)

    # Define el ejecutable individual
    add_executable(${TARGET_NAME} ${SOURCE_FILE}
            practica1.c)
endforeach()