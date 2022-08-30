# Variables and declarations

Variables in C, are a way to store data, this is done by telling the compiler the variable type, or what data does it contain, then naming the variable and finally, assigning the variable to a value. There are 3 basic variable types: **int**, **char** and **float**. There are many character types, but not all have a use case. There are

*The integer variables:*

1. **char** A single byte, representing one ASCII character

2. **short** A short integer, 16 bits long. Its almost never used.

3. **int**     A standard integer, its 32 bits long

4. **long** A long integer, its the same as int

5. **long long** A long long integer, 64 bits long.

The only difference between the types is their size. The short is really used as it can lead to performance issues.

*The float variables:*

1. **float** 32 bits

2. **double** 64 bits

3. **long double**  64 bits

To declare a variable we use teh following syntax:

```c
/* how a variable is declared, this can also be done for declaring multiple variables at once*/

type_name variable_name_1,..;

/* how a variable looks like */

int guests, woman, man;
long double earth_mass, mars_mass;
unsigned int num_pets;

float temp;

temp = 98,6;

...
```

When covering numbers we use the so called cast operator. Like so: 

```c
/***************************************************/
/* */
/* Demo of Cast operator */
/* */
/***************************************************/

#include <stdio.h>

int main() /* Use int float and int */
{
float my_float;
int my_int;
int my_ch;

my_float = 75.345;
my_int = (int) my_float;
my_ch = (int) my_float;
printf ("Convert from float my_float=%f to my_int=%d and my_ch=%c\n", my_float, my_int, my_ch);

my_int = 69;
my_float = (float) my_int;
my_ch = my_int;
printf ("Convert from int my_int=%d to my_float=%f and my_ch=%c\n",my_int, my_float, my_ch);

my_ch = ’*’;
my_int = my_ch;
my_float = (float) my_ch;
printf ("Convert from int my_ch=%c to my_int=%d and my_float=%f\n", my_ch, my_int, my_float);

exit(0);
}
```

*Here is the sort of output you should expect (floating point values may differ slightly):*

*Convert from float my_float=75.345001 to my_int=75 and my_ch=K*
*Convert from int my_int=69 to my_float=69.000000 and my_ch=E*
*Convert from int my_ch=* to my_int=42 and my_float=42.000000*
