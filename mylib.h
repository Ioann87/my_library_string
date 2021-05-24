#ifndef MYLIB_H
#define MYLIB_H
//function return length of string + char \0
int mystrlen(const char* str);

//function copy second string to first string, return pointer first string
char* mystrcpy(char* str1, const char* str2);

//function for cancatination string
char* mystrcat(char* str1, const char* str2);

//look for symbol in string and return first entry
char* mystrchr(char* str, char s);

//look for substring in string and return first entry
char* mystrstr(char* str1, char* str2);

//comparison of string
int mystrcmp(const char* str1, const char* str2);

//string to digits
int strdig(char* str);

//digits to string
char* digstr(int digit);

//all letters to uppercase
char* uppercase(char* str);

//all letters to lowercase
char* lowercase(char* str);

//reverse string up to low, low to up
char* mystrrev(char* str);

#endif // MYLIB_H
