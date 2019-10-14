#ifndef __BITMAN_H
#define __BITMAN_H

#include <stdbool.h>

// Function to print binary given an integer
// Note : Not suppoted for negative numbers yet
// RETURNS : 0 if an invalid entry
//           1 on successful printing on the console
bool print_binary(int num);

int count_1s(int num);

int count_0s(int num);

bool is_power_of_two(unsigned int num);

#endif  //not __BITMAN_H