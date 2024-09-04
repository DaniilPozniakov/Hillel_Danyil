#include <iostream>
#include "math_funcs.h"

int main() 
{
    //tests ---->
    std::cout << "----DIVIDE TESTING----" << std::endl;
    std::cout << MathFuncs::divide(1,1) << std::endl;
    std::cout << MathFuncs::divide(0,1) << std::endl;
    std::cout << MathFuncs::divide(1,0) << std::endl;
    std::cout << MathFuncs::divide(0,0) << std::endl;
    std::cout << MathFuncs::divide(0.5f,0.5f) << std::endl;
    std::cout << MathFuncs::divide(0.5,0.25f) << std::endl;
    std::cout << "\n";
    std::cout << MathFuncs::divide(1.0f, 1.0f) << std::endl; 
    std::cout << MathFuncs::divide(0.0f, 1.0f) << std::endl; 
    std::cout << MathFuncs::divide(1.0f, 0.0f) << std::endl; 
    std::cout << MathFuncs::divide(0.0f, 0.0f) << std::endl;


    std::cout << "----MULTIPLY TESTING----" << std::endl;
    std::cout << MathFuncs::multiply(2,2) << std::endl;
    std::cout << MathFuncs::multiply(2,0) << std::endl;
    std::cout << MathFuncs::multiply(0,2) << std::endl;
    std::cout << MathFuncs::multiply(0,0) << std::endl;
    std::cout << MathFuncs::multiply(2.0f,0.1f) << std::endl;
    std::cout << MathFuncs::multiply(0.5f,5.0f) << std::endl;

    std::cout << "----SQUARE TESTING----" << std::endl;
    std::cout << MathFuncs::square(2.0f) << std::endl;
    std::cout << MathFuncs::square(2) << std::endl;
    std::cout << MathFuncs::square(1) << std::endl;
    std::cout << MathFuncs::square(0) << std::endl;
    std::cout << MathFuncs::square(-1.0f) << std::endl;
    std::cout << MathFuncs::square(-2.0f) << std::endl;
    std::cout << MathFuncs::square(-1.0f) << std::endl;

    std::cout << "----ABS TESTING----" << std::endl;
    std::cout << MathFuncs::abs(-5.0f) << std::endl;
    std::cout << MathFuncs::abs(-5) << std::endl;
    std::cout << MathFuncs::abs(5) << std::endl;
    std::cout << MathFuncs::abs(0.50) << std::endl;

    std::cout << "----POW TESTING----" << std::endl;
    std::cout << MathFuncs::pow(5,2) << std::endl;
    std::cout << MathFuncs::pow(5,-2) << std::endl;
    std::cout << MathFuncs::pow(5,0) << std::endl;
    std::cout << MathFuncs::pow(-5,10) << std::endl;
    std::cout << MathFuncs::pow(-5,-5) << std::endl;

    std::cout << "----FACTORIAL TESTING----" << std::endl;
    std::cout << MathFuncs::factorial(5) << std::endl;
    std::cout << MathFuncs::factorial(3) << std::endl;
    std::cout << MathFuncs::factorial(1) << std::endl;
    std::cout << MathFuncs::factorial(-1) << std::endl;
    std::cout << MathFuncs::factorial(0) << std::endl;
    std::cout << MathFuncs::factorial(-5) << std::endl;


    return 0;
}