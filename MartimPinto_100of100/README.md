# ft_printf
>Reverse engineering and recreation of the printf() function in C

</p>
<p align="center">
	<a href="#about">About</a> •
	<a href="#usage">Usage</a> •
	<a href="#norme">Norme</a>
</p>

## About
ft_printf consists in recreating the printf() function in C, and learning how it works, in order to be utilized in further projects. This projects introduces concepts such as variadic arguments and structures.

This ft_printf function supports several format specifiers, described below.

- [x] `%c` - Print a single character.
- [x] `%s` - Print a string.
- [x] `%p` - Print void * pointer argument in hexadecimal format.
- [x] `%d` - Print a decimal (base 10) number.
- [x] `%i` - Print an integer in base 10.
- [x] `%u` - Prints an unsigned decimal (base 10) number.
- [x] `%x` - Print a number in hexadecimal (base 16) lowercase format.
- [x] `%X` - Print a number in hexadecimal (base 16) uppercase format.
- [x] `%%` - Print a percent sign.

## Usage
#### 1st - Clone the repository
``` bash
git@github.com:MartimPinto/ft_printf.git ft_printf
```
#### 2nd - Enter the library folder and run Make
``` bash
cd ft_printf/src
make
```
#### 3rd - Include the header in your .c file
``` c
#include "ft_printf.h"
```
## Norme

All 42 projects must be written following the **Norme**.

	- No for, do while, switch, case or goto are allowed
	- No more than 25 lines per function and 5 functions per file
	- No assigns and declarations in the same line (unless static)
 	- Each line must be at most 80 columns wide, comments included
	- A function can take 4 named parameters maximum
	- No more than 5 variables in 1 function
