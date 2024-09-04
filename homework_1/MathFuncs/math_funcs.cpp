
#include "math_funcs.h"



int MathFuncs::divide(int a, int b) 
{
    if (b == 0) return 0;
    return a / b;
}

float MathFuncs::divide(float a, float b) 
{
    if (b == 0.0f) return .0f;
    return a / b;
}

int MathFuncs::multiply(int a, int b) 
{
    return a * b;
}

float MathFuncs::multiply(float a, float b) 
{
    return a * b;
}

int MathFuncs::square(int value)
{
    return value * value;
}

float MathFuncs::square(float value)
{
    return value * value;
}






int MathFuncs::factorial(int value)
{
    if(value < 0) return 0;
    if(value == 0 || value == 1) return 1;
    int result = 1;
    while(value > 1)
    {
        result *= value;
        --value;
    }
    return result;
}

float MathFuncs::abs(float value)
{
    return value < 0 ? -value : value;
}

float MathFuncs::pow(float value,int pow)
{
    if(value == 0.0f) return 0.0f;
    if(pow == 0) return 1.0f;

    float result = 1;
    int absPow = MathFuncs::abs(pow);

    while(absPow != 0)
    {
        if(absPow % 2 == 1)
        {
            result *= value;
        }
        value *= value;
        absPow /= 2;
    }
    
    if(pow < 0) 
        return 1.0f / result;

    return result;
}


 
