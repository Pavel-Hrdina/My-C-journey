# The form of C program

The basic building block of C is the function. Every C program is a collection of functions.
Functions are made by variable declarations and curly brackets {}. Like so:

```c
main()
{
...
}
```

The main function does not have to be on top of the C program. But the C program always starts by the main function. it cannot be called by any other function, only by the operating system.

I am writing the examples In a old fashioned style the so called pre [ANSI standard C](https://en.wikipedia.org/wiki/ANSI_C), more about ANSI-C [here](https://www.hellocodies.com/c-standards/) as the program is way easier to understand and read for now. Here is an example of How a very simple C program can look like.

```c
/**
 * @file example1.c
 */

main() /* The main function, that can be called only by the operating system*/
{
    do_nothing();
}

/* This line does nothing */

do_nothing()
{
}
```

Note that the functions do not exit properly with the `return` keyword, nor are they declared correctly.
