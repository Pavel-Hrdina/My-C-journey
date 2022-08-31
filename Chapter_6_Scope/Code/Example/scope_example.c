/***************************************************************/
/* */
/* SCOPE */
/* */
/***************************************************************/
#include <stdio.h>

int main()
{
    int my_var = 3;

    {
        int my_var = 5;
        printf("my_var=%d\n", my_var);
    }

    printf("my_var=%d\n", my_var);

    return 0;
}