#include "text_funcs.h"
#include <string>

std::size_t TextFuncs::charlen(const char* str)
{
    if(str == nullptr) return 0;

    std::size_t length = 0;
    while(str[length] != '\0')
    {
        ++length;
    }
    return length;
}

std::size_t TextFuncs::countch(char* str,char ch)
{
    std::size_t count = 0;
    while (*str != '\0') {
        if (*str == ch) {
            ++count;
        }
        ++str;
    }
    return count;
}