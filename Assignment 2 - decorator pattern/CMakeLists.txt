cmake_minimum_required(VERSION 3.20)
project(Assignment_2___decorator_pattern)

set(CMAKE_CXX_STANDARD 23)

add_executable(Assignment_2___decorator_pattern main.cpp NPC.cpp NPC.h Orc.cpp Orc.h Elf.cpp Elf.h FarmerDecorator.cpp FarmerDecorator.h SoldierDecorator.cpp SoldierDecorator.h ShamanDecorator.cpp ShamanDecorator.h Decorator.cpp Decorator.h)
