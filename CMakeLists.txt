cmake_minimum_required(VERSION 3.15)
project(Fuzzy)

set(CMAKE_CXX_STANDARD 11)

add_executable(Fuzzy main.cpp Core/UnaryExpression.h Core/BinaryExpression.h Core/ValueModel.cpp Core/ValueModel.h Core/BinaryExpressionModel.cpp Core/BinaryExpressionModel.h Core/UnaryExpressionModel.cpp Core/UnaryExpressionModel.h)