/**
 * @file exercises_1.c
 * @author Pavel Hrdina
 * @brief Contains a function that takes a value and multiplies it with another value (a * b)
 * @version 0.1
 * @date 2022-08-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief A function that multiplies two values
 *
 * @param value_a
 * @param value_b
 * @return int
 */

int multiply(int value_a, int value_b)
{
    int number = value_a * value_b;
    return printf("Number %d\n", number);
}

void main()
{
    multiply(2, 3);
    exit(0);
}