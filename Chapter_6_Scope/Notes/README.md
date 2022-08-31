# Scope

The scope is the visibility of a variable. That means that a variable that is initialized in one function will not be seen to another one. That means that a variable that is initialized globally will not be seen to all functions in the script.

Code from [here](https://www.it.uc3m.es/pbasanta/asng/course_notes/ctut.pdf). This is how variables in a global scope, and local scope would look like:

```c
/* Global scope */

#include <stdio.h>

int global_integer;
float global_floating_point;

int main ()
{
    exit (0);
}
```

```c
/* Local scope */

#include <stdio.h>

int main()
{
    int foo;
    float bar, bas, bla;

    exit (0);
}
```

If I need to make a variable variable to another function, I can do so  utilizing parameters of the function