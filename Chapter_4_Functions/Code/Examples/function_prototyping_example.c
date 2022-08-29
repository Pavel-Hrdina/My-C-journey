/**
 * @file function_prototyping_exapmle.c
 * @author Pavel Hrdina
 * @brief Functions in the begging of the program are called prototype functions
 * @version 0.1
 * @date 2022-08-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief A function that prints stuff
 *
 * @param foo
 * @param bar
 */
void printf_stuff(int foo, int bar);

/**
 * @brief a function that calc_value and then returns it
 *
 * @param bas
 * @param quux
 * @return int
 */
int calc_value(int bas, int quux);

void print_stuff(int foo, int bar)
{
    int var_to_print = calc_value(foo, bar);

    printf("var_to_print = %d\n", var_to_print);
}

int calc_value(int bas, int quux)
{
    return bas * quux;
}

int main()
{
    print_stuff(23, 5);
    exit(0);
}

/* prints 155 */