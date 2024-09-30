#include <iostream>
#include "newString.h"
#include "newString.cpp"

int main () {
    newString str1 = "Sunny";
    const newString str2("Warm");
    newString str3;
    newString str4;

    std::cout << "Line 10: " << str1 << "    " << str2 << "  ***" << str3 << "###." << std::endl;
    if (str1 <= str2)
        std::cout << "Line 12: " << str1 << " is less " << "than or equal to " << str2 << std::endl;
    else
        std::cout << "Line 14: " << str2 << " is less " << "than " << str1 << std::endl;

    std::cout << "Line 15: Enter a string with a length " << "of at least 7: ";
    std::cin >> str1;
    std::cout << std::endl;
    
    std::cout << "Line 18: The new value of " << "str1 = " << str1 << std::endl;

    str4 = str3 = "Birth Day";
    
    std::cout << "Line 20: str3 = " << str3 << ", str4 = " << str4 << std::endl;

    str3 = str1;
    std::cout << "Line 22: The new value of str3 = " << str3 << std::endl;

    str1 = "Bright Sky";

    str3[1] = str1[5];
    std::cout << "Line 25: After replacing the second " << "character of str3 = " << str3 << std::endl;

    str3[2] = str2[0];
    std::cout << "Line 27: After replacing the third " << "character of str3 = " << str3 << std::endl;
    
    str3[5] = 'g';
    std::cout << "Line 29: After replacing the sixth " << "character of str3 = " << str3 << std::endl;

    return 0;
}

