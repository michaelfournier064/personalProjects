#ifndef newString_h
#define newString_h

#include <iostream>

class newString {
        // Overloading stream insertion and extraction operators.
    friend std::ostream& operator<< (std::ostream&, const newString&);
    friend std::istream& operator>> (std::istream&, newString&);

public:
    const newString& operator=(const newString&);
    newString(const char*);
    newString();
    newString(const newString&);
    ~newString();
    
    char &operator[] (int);
    const char &operator [] (int) const;
    bool operator==(const newString&) const;
    bool operator!=(const newString&) const;
    bool operator<=(const newString&) const;
    bool operator<(const newString&) const;
    bool operator>=(const newString&) const;
    bool operator>(const newString&) const;



private:
    char* strcopy(const char *str2);
    char* strcopy(char *str1, const char *str2);
    char *strPtr; // Pointer to the char array that holds the string
    size_t strLength; // Variable to store the length of the string
};
#endif