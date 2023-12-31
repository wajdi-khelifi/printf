# 0x11. C - printf 

- Writing our own `printf` function, this is a project done under [ALX Low Level Programming](https://github.com/wajdi-khelifi/printf).

## Description

- The function `_printf` writes output to stdout. The function writes under the control of a `format` string that specifies how subsequent arguments (accessed via the variable-length argument facilities of standard library `stdarg`) are converted for output.

- Prototype: `int _printf(const char *format, ...);`

## Return

- Upon success, `_printf` returns the number of characters printed (**excluding the terminating null byte used to end output to strings**). If an output error is encountered, the function returns `-1`.

## Format of the Argument String

- The `format` string argument is a constant character string composed of zero or more directives: ordinary characters (apart from `%`) which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.
- Conversion specification is introduced by the character `%` and ends with a conversion specifier (which in whole make up the format specifier.)

## General Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line.
- No more than 5 functions per file.
- You are not allowed to use global variables.
- The prototypes of all your functions should be included in your header file called `main.h`
- All your header files should be include guarded.

### Authorized functions and macros

- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)

### Github

- There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

### Compilation

- The code can be compiled like this:
	```sh
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test/main.c *.c -o print
	```
- All test files will be in the [test](./test) directory.


### Authors

- Wajdi-khelifi 👾
- IhebChaoued [@IhebChaoued](https://github.com/IhebChaoued) 👨‍💻


## Tasks

0. **I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life** : A function that produces output according to a format.
	- Prototype: int `_printf(const char *format, ...);`
	- Returns: the number of characters printed (excluding the null byte used to end output to strings)
	- write output to stdout, the standard output stream
	- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
		- `c`
		- `s`
		- `%`
	- You don’t have to reproduce the buffer handling of the C library `printf` function.
	- You don’t have to handle the flag characters.
	- You don’t have to handle field width.
	- You don’t have to handle precision.
	- You don’t have to handle the length modifiers.

1. **Education is when you read the fine print. Experience is what you get if you don't** : Handle the following conversion specifiers:
	- `d`
	- `i`
	- You don’t have to handle the flag characters.
	- You don’t have to handle field width.
	- You don’t have to handle precision.
	- You don’t have to handle the length modifiers.

2. **Just because it's in print doesn't mean it's the gospel** : Create a man page for your function.
	- How to read the man page: `man ./man_3_printf`

3. With a face like mine, I do better in print, Handle the following custom conversion specifiers:
	b: the unsigned int argument is converted to binary

4. What one has not experienced, one will never understand in print
Handle the following conversion specifiers:
	- `u`
	- `o`
	- `x`
	- `X`
	- You don’t have to handle the flag characters
	- You don’t have to handle field width
	- You don’t have to handle precision
	- You don’t have to handle the length modifiers

5. Nothing in fine print is ever good news
	- Use a local buffer of 1024 chars in order to call write as little as possible.

6. My weakness is wearing too much leopard print, Handle the following custom conversion specifier:
	- `S` : prints the string.
	- Non printable characters "(0 < ASCII value < 32 or >= 127)" are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

7. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print, Handle the following conversion specifier: p.
	- You don’t have to handle the flag characters
	- You don’t have to handle field width
	- You don’t have to handle precision
	- You don’t have to handle the length modifiers

8. The big print gives and the small print takes away
Handle the following flag characters for non-custom conversion specifiers:
	- `+`
	- space
	- `#`

9. Sarcasm is lost in print
Handle the following length modifiers for non-custom conversion specifiers:
	- `l`
	- `h` Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`

10. Print some money and give it to us for the rain forests
	- Handle the field width for non-custom conversion specifiers.

11. The negative is the equivalent of the composer's score, and the print the performance
	- Handle the precision for non-custom conversion specifiers.

12. It's depressing when you're still around and your albums are out of print.
	- Handle the 0 flag character for non-custom conversion specifiers.

13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection.
	- Handle the - flag character for non-custom conversion specifiers

14. Print is the sharpest and the strongest weapon of our party.
Handle the following custom conversion specifier:
	- `r` : prints the reversed string

15. The flood of print has turned reading into a process of gulping rather than savoring
Handle the following custom conversion specifier:
	- R: prints the rot13'ed string

16. *
All the above options work well together.
