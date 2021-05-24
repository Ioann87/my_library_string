int mystrlen(const char* str)
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length += 1;
    }

    return length;
}

char* mystrcpy(char* str1, const char* str2)
{
    int j = 0;
    for (int i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
        j++;
    }
    str1[j] = '\0';

    return str1;
}

char* mystrcat(char* str1, const char* str2)
{
    char* temp = nullptr;
    temp = new char[mystrlen(str1) + mystrlen(str2)];

    int i = 0;
    while (str1[i] != '\0') {
        temp[i] = str1[i];
        i++;
    }
    temp[i - 1] = ' ';

    int j = 0;
    while (str2[j] != '\0') {
        temp[i] = str2[j];
        i++;
        j++;
    }
    temp[i] = '\0';

    return temp;
}

char* mystrchr(char* str, char s)
{
    char* result = nullptr;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == s) {
            result = &str[i];
            break;
        } else {
            result = nullptr;
        }
        i++;
    }
    return result;
}

char* mystrstr(char* str1, char* str2)
{
    char* result = nullptr;
    int i = 0;
    int j = 0;
    while (str1[i] != '\0') {
        if (str1[i] == str2[j]) {
            result = &str1[i];
            break;
        }
        i++;
    }
    bool res = false;
    int k = 0;
    int length = mystrlen(str2);
    while (k < length - 1) {
        if (str2[j] == str1[i]) {
            res = true;
        } else {
            res = false;
            break;
        }
        i++;
        j++;
        k++;
    }
    if (res) {
        return result;
    } else {
        result = nullptr;
        return result;
    }
}

int mystrcmp(const char* str1, const char* str2)
{
    int comparison = 0;
    int len1 = 0;
    len1 = mystrlen(str1);
    int len2 = 0;
    len2 = mystrlen(str2);
    if (len1 == len2) {
        for (int i = 0; str1[i] != '\0'; i++) {
            if (str1[i] > str2[i]) {
                comparison = 1;
                break;
            } else if (str1[i] < str2[i]) {
                comparison = -1;
                break;
            } else if (str1[i] == str2[i]) {
                comparison = 0;
            }
        }
    } else if (len1 > len2) {
        comparison = 1;
    } else if (len1 < len2) {
        comparison = -1;
    }

    return comparison;
}

int strdig(char* str)
{
    int digit = 0;
    int len = 0;
    len = mystrlen(str);
    int i = 0;

    if (len > 1) {
        while (i < len - 1) {
            digit += (str[i] - 48);
            digit *= 10;
            i++;
        }
        digit /= 10;
    } else if (len == 1) {
        digit += (str[i] - 48);
    }
    return digit;
}

char* digstr(int digit)
{
    char* str = nullptr;
    int len = 1;
    int rev_dig = 0;
    while (digit != 0) {
        rev_dig += digit % 10;
        rev_dig *= 10;
        digit /= 10;
        len += 1;
    }
    rev_dig /= 10;

    str = new char[len + 1];

    int i = 0;
    while (rev_dig != 0) {
        str[i] = rev_dig % 10 + 48;
        rev_dig /= 10;
        i++;
    }

    str[len + 1] = '\0';

    return str;
}

char* uppercase(char* str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            str[i] -= 32;
        } else {
            continue;
        }
    }
    return str;
}

char* lowercase(char* str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += 32;
        } else {
            continue;
        }
    }
    return str;
}

char* mystrrev(char* str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] += 32;
        } else if ('a' <= str[i] && str[i] <= 'z') {
            str[i] -= 32;
        } else {
            continue;
        }
    }
    return str;
}
