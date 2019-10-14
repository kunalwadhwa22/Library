#include "bitman.h"
#include "stdio.h"

static inline void p_binary(int num)
{
    if(num)
    {
        p_binary(num >> 1);
        if(num & 1)
            printf("1");
        else
            printf("0");
    }
}

bool print_binary(int num)
{
    if(num < 0)
    {
        // Valuse less that zero not supported yet
        return 0;
    }
    p_binary(num);
    printf("\n");
    return 1;
}

int count_1s(int num)
{
    int count = 0;
    while(num)
    {
        if(num & 1)
            count++;
        num = num >> 1;
    }
    return count;
}

int count_0s(int num)
{
    return (32 - count_1s(num));
}

bool is_power_of_two(unsigned int num)
{
    // count the number of 1's in num
    // powers of 2 only have one 1 in their binary expressions
    if(count_1s(num) == 1)
        return 1;
    return 0;
}
