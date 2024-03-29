#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "str.h"

int str_index(char str[], char sub_str[])
{
    int i,j,k;
    for(i=0; str[i] != '\0'; i++)
    {
        for(j=i, k=0; sub_str[k]!='\0' && str[j] == sub_str[k]; j++, k++)
        ;
        if(k>0 && sub_str[k] == '\0')
            return i;
    }
    return -1;
}

double string_to_float(char str[])
{
    double val, power;
    int i, sign;
    for(i=0; isspace(str[i]); i++);     // skipping white space
    sign = (str[i] == '-') ? -1 : 1;    // sign
    if(str[i] == '+' || str[i] == '-')  
        i++;
    for(val = 0.0; isdigit(str[i]); i++)    // digits before decimal point
        val = 10.0 * val + (str[i] - '0');
    if(str[i] == '.')                       // decimal point
        i++;
    for(power = 1.0; isdigit(str[i]); i++)  // after decimal point
    {
        val = 10.0 * val + (str[i] - '0');
        power *= 10.0;
    }
    return sign * val / power; 
}

int str_len(char * str)
{
    int len;
    for(len = 0; *str != '\0' && *str != '\n'; str++)
        len++;
    return len;
}

void str_copy(char * source, char * destination)
{
    int i = 0;
    while ((source[i] = destination[i]) != '\0')
    i++;
}

int str_cmp(char * str1, char * str2)
{
    int i;
    for(i = 0; str1[i] == str2[i]; i++)
        if(str1[i] == '\0')
            return 0;
    return str1[i] - str2[i];
}

void str_rev(char * str)
{
    char temp;
    for(int i=0; i < (str_len(str) / 2 ); i++)
    {
        temp = str[i];
        str[i] = str[str_len(str) - 1 - i];
        str[str_len(str) - 1 - i] = temp;
    }
}


void str_rev2(char *begin, char *end)
{
    char temp;
    while(begin < end)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

void str_revword(char *s)
{
    char *word_begin = s;
    char *temp = s;
    while(*temp)
    {
        temp++;
        if(*temp == '\0')
        {
            str_rev2(word_begin,temp-1);
        }
        else if(*temp == ' ')
        {
            str_rev2(word_begin,temp-1);
            word_begin = temp + 1;
        }
    }
    str_rev2(s,temp-1);
}