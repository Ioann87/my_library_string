#include "mylib.h"
#include <iostream>

using namespace std;

const int MAXLEN = 2048;

int main()
{
    char* str1 = nullptr;
    str1 = new char[MAXLEN];
    puts("LENGTH");
    puts("ENTER STR 1: ");
    fgets(str1, MAXLEN, stdin);

    int len = 0;
    len = mystrlen(str1);

    cout << "Length of str1: " << len << endl;
    delete[] str1;

    char* str2 = nullptr;
    str2 = new char[MAXLEN];

    char* str3 = nullptr;
    str3 = new char[MAXLEN];
    puts("COPY");
    puts("STR 3 for copy to STR 2: ");
    fgets(str3, MAXLEN, stdin);

    str2 = mystrcpy(str2, str3);
    puts("STR 2: ");
    puts(str2);
    delete[] str2;
    delete[] str3;

    char* str4 = nullptr;
    str4 = new char[MAXLEN];
    puts("CANCATENATION");
    puts("ENTER STR 4 :");
    fgets(str4, MAXLEN, stdin);

    char* str5 = nullptr;
    str5 = new char[MAXLEN];
    puts("ENTER STR 5:");
    fgets(str5, MAXLEN, stdin);

    str4 = mystrcat(str4, str5);
    puts("STR 4: ");
    puts(str4);

    delete[] str4;
    delete[] str5;

    char* str6 = nullptr;
    str6 = new char[MAXLEN];
    puts("CHARACTER SEARCH");
    puts("ENTER STR 6:");
    fgets(str6, MAXLEN, stdin);
    char symbol = '\0';
    puts("Enter desired symbol: ");
    cin >> symbol;
    char* res = nullptr;
    res = mystrchr(str6, symbol);
    puts("first occurrence of a character: ");
    puts(res);

    delete[] str6;

    char* str7 = nullptr;
    str7 = new char[MAXLEN];
    puts("SUBSTRING");
    puts("ENTER STR 7 :");
    fgets(str7, MAXLEN, stdin);

    char* str8 = nullptr;
    str8 = new char[MAXLEN];
    puts("ENTER SUBSTR 8:");
    fgets(str8, MAXLEN, stdin);

    char* substr = mystrstr(str7, str8);
    puts("first occurrence of a substring: ");
    puts(substr);

    delete[] str7;
    delete[] str8;

    char* str9 = nullptr;
    str9 = new char[MAXLEN];
    puts("COMPARISON");
    puts("ENTER STR 9 :");
    fgets(str9, MAXLEN, stdin);

    char* str10 = nullptr;
    str10 = new char[MAXLEN];
    puts("ENTER STR 10:");
    fgets(str10, MAXLEN, stdin);

    int comparison = 0;
    comparison = mystrcmp(str9, str10);
    cout << "Comparison: " << comparison << endl;

    delete[] str9;
    delete[] str10;

    int digit = 0;
    char* str11 = nullptr;
    str11 = new char[MAXLEN];
    puts("STRING TO DIGIT");
    puts("ENTER STR 11(DIGIT): ");
    fgets(str11, MAXLEN, stdin);

    digit = strdig(str11);
    cout << "Digit: " << digit << endl;

    delete[] str11;

    char* str12 = nullptr;
    puts("DIGIT TO STRING");
    puts("Enter a digit: ");
    cin >> digit;

    str12 = digstr(digit);
    puts("Digit string: ");
    puts(str12);

    delete[] str12;

    char* str13 = nullptr;
    str13 = new char[MAXLEN];
    puts("UPPERCASE, lowercase");
    puts("ENTER STR 13:");
    fgets(str13, MAXLEN, stdin);

    str13 = uppercase(str13);
    puts("Uppercase string: ");
    puts(str13);

    str13 = lowercase(str13);
    puts("Lowercase string: ");
    puts(str13);

    delete[] str13;

    char* str14 = nullptr;
    str14 = new char[MAXLEN];
    puts("UP TO low, low to UP");
    puts("ENTER STR 14 FOR REVERES UP TO LOW, LOW TO UP:");
    fgets(str14, MAXLEN, stdin);

    mystrrev(str14);
    puts("Reversed string: ");
    puts(str14);

    delete[] str14;

    system("pause");
    return 0;
}
