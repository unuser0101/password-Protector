//
// Created by anonymous on 11/5/21.
//
#include "function_header.h"

char encryption(char *password_plaintext)
{
    while (*password_plaintext)
    {
        *password_plaintext = *password_plaintext ^ 31;
        password_plaintext++;
    }
    return password_plaintext;
}

