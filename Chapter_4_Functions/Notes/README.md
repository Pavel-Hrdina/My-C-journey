# Functions

Function is a section of code that preforms a given task. Functions allow you to make the code more readable. _**Functions should be written in the following form:**_

```c
type function_name (type parameter1_name, type parameter2_name, ...)

{
    variable declarations

    statement
    ...
    ...
    ...
}
```

This format is not the old fashioned way. Instead, it follows the ANSI standard C.

Every function needs a name, these names should say what the function does and should be clear and short.

This is how C functions should look like... Examples of functions:

```c
void add_two_number (int a, int b)
{
    int c;

    c = a + b;

    printf ("%d\n", c)
}
```

Notice that the c variable is modified, after it is assigned, I recommended against this, as it can lead to unexpected or unsafe behavior. Every function should have the save output given the same input.

Here is how a main function in the example program could look like:

```c
int main()
{
    int var1, var2;

    var1 = 1;
    var2 = 53;

    add_two_number (var1, var2);
    add_two_number (1, 2);

    exit(0);
}
```

functions also can contain the `return` statement like so:

```c
void whatever()
{
    int something = blalalalalalalalalalalalalal;

    return something;
}
```
