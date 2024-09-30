#include <iostream>
#include <iomanip>
#include <cstring>
#include <cassert>
#include "newString.h"

    //Constructor: conversion from the char sring to newString
newString::newString(const char *str) {
    size_t localStrLength = strlen(str); // No more shadowing
    strLength = localStrLength;          // Assign to the member variable
    strPtr = new char[strLength + 1];

    strcopy(str);
}
    //Defult constructor
newString::newString() {
    strLength = 0;
    strPtr = new char[1];
    strPtr[0] = '\0';
}
    //copy constructor
newString::newString(const newString& rightStr) {
    strLength = rightStr.strLength;
    strPtr = new char[strLength + 1];
    strcopy(rightStr.strPtr);
}
newString::~newString() {
    delete [] strPtr;
}
const newString& newString:: operator=(const newString& rightStr) {
    if (this != &rightStr)
    {
        delete [] strPtr;
        strLength = rightStr.strLength;
        strPtr = new char[strLength + 1];
        strcopy(rightStr.strPtr);
    }
    
    return *this;
}
char& newString::operator[] (int index)
{
    assert(0 <= index && index < strLength);
    return strPtr[index];
}
const char& newString::operator[] (int index) const {
    assert(0 <= index && index < strLength);
    return strPtr[index];
}
    //Overloading the relational operators
bool newString::operator==(const newString& rightStr) const {
    return (strcmp(strPtr, rightStr.strPtr) == 0);
}
bool newString::operator<(const newString& rightStr) const {
    return (strcmp(strPtr, rightStr.strPtr) < 0);
}
bool newString::operator<=(const newString& rightStr) const {
    return (strcmp(strPtr, rightStr.strPtr) <= 0);
}
bool newString::operator>(const newString& rightStr) const {
    return (strcmp(strPtr, rightStr.strPtr) > 0);
}
bool newString::operator>=(const newString& rightStr) const {
    return (strcmp(strPtr, rightStr.strPtr) >= 0);
}
bool newString::operator!=(const newString& rightStr) const {
    return (strcmp(strPtr, rightStr.strPtr) != 0);
}
    //Overload stream insertion operator
std::ostream& operator<<(std::ostream& osObject, const newString& str) {
    osObject << str.strPtr;

    return osObject;
}
std::istream& operator>>(std::istream& isObject, newString& str) {
    char temp[81];
    isObject >> std::setw(81) >> temp;
    str = temp;
    return isObject;
}
char* newString::strcopy(const char *str) {
    for (size_t i = 0; i < strlen(str); i++)
        strPtr[i] = str[i];
    strPtr[strLength] = '\0';

    return strPtr;
}
char* newString::strcopy(char *str1, const char *str2) {
    for (size_t i = 0; i < strlen(str1); i++)
        str1[i] = str2[i];
    str1[strlen(str2)] = '\0';

    return str1;
}
