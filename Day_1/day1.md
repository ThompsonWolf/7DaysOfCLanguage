# Day 1 of Learning C

Learning about the basic characteristics and element of the C programming language. C is a general purpose, procedural programming language. It's purpose is to implement the Unix Operating system and utilities with the greatest possible degree of independence from specific hardware platforms.

The key characteristics of the C language are the qualities that made it suitable for that purpose of

- Source Code Portability
- The ability to operate "Close to the machine"
- Efficiency

The procedural building blocks of a C program are functions, which can invoke one another. The functions contain statement for the program to execute sequentially, and statements can also be grouped to form block statements, or blocks.

As a programmer, you can use the ready-made functions in the standard library, or write your own whenever no standard function fufils your intended purpose. There are many specialized libraries available, such as libraries of graphics functions. However by using such non-standard libraries, you limit the portability of your program to those systems to which the libraries themselves have been ported.

Every C program must define at least one funcion of its own, with the special name **main():**. This is the first function invoked when the program starts. The main() function is the prgram's top level of control, and can call other functions as subroutines.

The task at hand is to concentrate on the basics:

- Variables and Constants
- Arithmentics
- Control Flow
- Function
- Rudiments of Input and Output

While the bigger part of learning is studying:

- Pointers
- Structures
- Most of C's rich set of Operators
- Several control flow statements
- Standard Libraries

> ## [!]  Getting Started !!!!!!!!!!!!! [!]

The only way to learn a new programming language is by writing programs in it. The first program to write is the same for all languages: "Hello world". In C language, printing out the hello world program is done like the example below:

```C
#include <stdio.h>

main(){
    printf("Hello World\n");

}
```

Running the above program depends on the system you are coding with. You need to create a program file with the extension of ".c" that ends it e.g "hello.c", "greeting.c" then compile it with the "cc hello.c" command.

If you get the syntax written correctly then the compilation will be done silently and successfully, and make an executable file called a.out, or the name of the file you created plus .out. If you run the a.out or name of the file .out by the typing it out on the terminal then it will print out the "Hello Wolrd" message on your black screen. Likewise system varies while running C programs, but with the help of documentations and example onlines, it should be a piece of cake doing that. 

### Explanation on what the code is all about

```C

    #include <stdio.h>  // Include information about standard library
    
    main(){   // Define a function called main that received no argument values
             // Statements of main are enclosed in braces
        printf("hello, world\n");     // Main calls library function printf to print this sequence of characters
             // \n represents the newline character
    }                             
```

A C program consist of functions and variables. A function contain statements that speicify the computing operations to be done, and variable stores values used during the computation. A perfect example of function is the `main` aspect of the code snippet above, is an example of a function. Functions are given any variety of name of choice but `main` is special, your program begins to execute at the beginning of the main function which  means every programs must have a "main" function somewhere.

`main`function will usually call other functions to help perform a its job, some that you wrote, and others from libraries that are provided for you.

The first line of the program `#include <stdio.h` tells the compiler to include information about the standard input/output library, it is also a standard library in C.

The paraenteses after the function name surround the argument list `( )`, but in the case of the snippet above, it was empty, but as we go deeper in learnning C, we will get exposed to using arguments in our main functions and other functions we develop for our usage.

The statement of a function are enclosed in braces `{ }`, while the `main` function contains only one statement which is `printf("hello, world)`. A function is called by naming it, followed by a parenthesized list of arguments, so this calls prints output, in this case, the string of characters between the quotes.

A sequence of characters in double quotes `"hello, world\n"`, is called a character string or string constant. The sequence `\n` in the string is C notation for the newline character, which when printed advances the output to the left margin on the next line. If you leave out the `\n`, you will find that there is no line advance after the output is printed.

N.B: The \n represents only a single character. An escape sequence like \n provides a general and extensible mechanism for representing hard-to-type or invincible characters. C provides \t for tab, \b for backspace, \" for double quote and \\ for the backlash itself, and more.

## Variables and Arithmethic Expressions

This phase of learning has to do with writing longer programs than before and consist of several new ideas including comments, declarations, variables, arithmentic expressions, loops, and formatted output.

```C
    #include <stdio.h>

    // Print Fahrenheit-Celsious table for fahr = 0, 20, ....
    main(){
        int fahr, celsius;
        int lower, upper, step;

        lower = 0;      // lower limit of temperature scale
        upper = 200;    // upper limit of temperature scale
        step = 20;      // step size of temperature scale

        fahr = lower;
        while(fahr <= upper){
            celsius = 5 * (fahr-32) / 9;
            printf("%d\t%d\n", fahr, celsius);
            fahr = fahr + step;
        }
    }
```

The `//` and `/**/` are comment, which explains briefly what the program does. They are ignored by the compiler, and are freely used to make a program readable and easier to understand. It may appear anywher where a blank tab or newline can. 

In C, all variables must be declared before they are used, usually at the beginning of the function before any executable statments. A declaration announces the properties of variables, it consist of a name and a list of variables such as `int fahr, celsius` and `int lower, upper, step`. The type `int` means that the variables listed are integers; by contrast with float, which means floating point i.e., numbers that may have fractional part. The range of both int and float depends on the machine you are using; 16-bits intS which lie between -32768 and +32767, are common, as are 32-bit intS. A float number is typically a 32-bit quantity, with at least six significant digits and magnitude generally between about 10(-38) and 10(38).

C provides several other data types besides int and float, including, char, short, long and double. The size of these object is also machine-dependent. There are also arrays, structures, and unions of these basic types; pointers to them, and functions that return them, all of which will be discussed in due course.

Computation in the temperature conversion program begins with the assignment statements

```C
    lower = 0;
    upper = 300;
    step = 20;
```
which set the variables to the initial values, while individual statments are terminated by semicolons.

Each line of the table is computed the same way, so we use a loop that repeat once per output line; this is the purpose of the while loop. 

```C
    while(fahr <= upper){
        ...
    }
```

The while loop operates as follows: The condition in parentheses is tested. If it is true (fahr is less than or equal to upper), the body of the loop (the three statements enclosed in braces) is executed. Then the condition is re-tested, and  if true, the body is executed again. When the test becomes false (fahr exceeds upper) the loop ends, and execution continues at the statment that follows the loop. There are no further statements in this program, so it terminates.

The body of while can be one or more statements enclosed in braces, as in temperature converter, or a single statement without braces, as in

```C
    while(i < j)
        i = 2 * i;
```

Although C compilers do not care about how a program looks, proper indentation and spacing are critical in making programs easy for people to read. 

Most of the work gets done in the body of the loop. The celsius temperature is computed and assigned to the variable `celsius` by the statment `celsius = 5 * (fahr-32) / 9;`.

The reason for multiplying by 5 and dividng 9 insted of just multiplying by 5/9 is tat in C, integer division truncates: which means any fractional part is discarded. Since 5 and 9 are integers 5/9 would be truncated to zero and so all the celsius temperature would be reported as zero.

The `printf();` is a general purpose output formatting function, it's first argument in the case of the above code is a string of characters to be printed, with each % indicating where one of the other(second, third,...) argument is to be substituted, and in what form it is to be printed. For instance `%d` specifies an integer argument, so the statement. `printf("%d\t%d\n", fahr, celsius);` causes the value of the two integers fahr and celsius to be printed, with a tab (\t) between them.

By the way, printf is not part of the C language; there is no input or output defined in C itself, printf is just a useful function from the standard library of functions that are normally accessible to C programs. The behaviour of printf is defined in the ANSI standard, however, so it's properties should be the same with any compiler and library that conforms to the standard.

`scanf` is like `printf`, except that it reads input instead of writing output. The printf conversion specification `%3.0f` says that a floating point number (here fahr) is to be printed at least three character wide, with no decimal point and no fraction digits. `%6.lf` desfribes another number (celsius) that is to be printed at least six characters wide. with 1 digit after the decial point.

%d      >>      Print as decimal integer
%6d     >>      Print as decimal integer at least 6 characters wide
%f      >>      Print as floating point
%6f     >>      Print as floating point at least 6 characters wide
%.2f    >>      Print as floating point 2 characters after decimal point
%6.2f   >>      Print as floating point at least 6 wide and 2 after decimal point

## The for Statement

There are plenty of different ways to write a program for a particular task. Let's try a variation on the temperature converter program.

```C

    #include <stdio.h>
    // Print Fahrenheit-Celsius table

    main(){
        int fahr;

        for(fahr = 0; fahr <= 300; fahr = fahr + 20){
            printf("%3d %6.lf\n", fahr, (5.0/9.0) *(fahr-32));
        }
    }
```

The for statement is a loop, a generalization of the while. If you compare it to the earlier while, its operation should be clear. Within the parentheses, there are three parts, separted by semicolon. The first part, the `initialization`, `fahr = 9` is done once, before the loop proper is entered. The second part is the test or condition that controls the loop `fahr <= 300`. The condition is evaluation; if it is true, the body of the loop (here a single printf) is executed. Then the increment step `fahr = fahr + 20` is eecuted and the condition re-evaluated. The loop terminates if the condition has become false. As with the while, the body of the loop can be a single statement or a group of statements enclosed in braces. The initialization condition and increment can be any expressions.

## Symbolic Constants in C

A `#define` line defines a symbolic name or symbolic constant to be a particular string of characters: `#define name replacement list`.

```C
    #include <stdio.h>

    #define LOWER 0     // Lower Limit of table
    #define UPPER 300   // Upper Limit of table
    #define STEP 20     // Step Size

    // Print Fahrenheit-Celsius Table
    int main(){
        int fahr;

        for(fahr=LOWER; fahr <= UPPER; fahr = fahr + STEP){
            printf("%3d %6.lf\n", fahr, (5.0/9.0) *(fahr-32));
        }
    }
```
The quantities LOWER, UPPER and STEP are symbolic constants, not variables, so they do not appear in declarations. Symbolic constant names are conventionally written in upper case so they can ber readily distinguished from lower case variable names, and they do they do not take semicolon at the end of the `#define` line.

## Character Input and Output in C

The model of input and output supported by the standard library is very simple. Text input or output regardless of where it originates or where it goes to, is dealt with as streams of characters. A text stream is a sequence of character divided into lines; each line consist of zero or more characters followed by a newline character. 

The standard library provided several functions for reading or writing one character at a time, of which `getchar` and `putchar` are the simplest. Each time it is called, `getchar` reads the next input character from a text streeam and return that as its value. While the function `putchar` prints a character each time it is called. 