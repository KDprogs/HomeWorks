cmake_minimum_required(VERSION 3.31.0)

project(my_first_cmake_project)

add_executable(my_first_cmake_program source.cpp 
                                      figure.cpp               figure.h

                                      triangle.cpp             triangle.h
                                      right_triangle.cpp       right_triangle.h
                                      isosceles_triangle.cpp   isosceles_triangle.h
                                      equilateral_triangle.cpp equilateral_triangle.h

                                      square.cpp               square.h
                                      quadrangle.cpp           quadrangle.h
                                      rectangle.cpp            rectangle.h
                                      parallelogram.cpp        parallelogram.h
                                      rhombus.cpp              rhombus.h
)
