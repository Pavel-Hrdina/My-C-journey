/**
 * @file example1.c
 * @author Pavel Hrdina
 * @date 2022-08-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h> /*  This is the header file. */

/**
 * @brief Construct a new main function
 *
 */

main()
{
    do_nothing();
    printf("Function 'main' completing.\n");
    return 0;
}

/**
 * @brief Construct a new do nothing function
 *
 */

do_nothing()
{
    /* This line does nothing, has no effect. */
    return 0;
}

/* This code is old-fashioned and should not be written like this */
