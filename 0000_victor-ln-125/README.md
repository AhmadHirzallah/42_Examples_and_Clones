# 42-ft_printf

![ft_printfm](https://user-images.githubusercontent.com/81260589/183134464-29c8c081-0ef4-476d-a9bf-d6b0953bd40e.png)

## Table of contents

- [Introduction](#Introduction)
- [How to run](#How-to-run)
- [Usage](#Usage)
- [How it works](#How-it-works)
- [What I have learned](#What-I-have-learned)

## Introduction
This is my third project as a student at school 42 São Paulo. 
The goal of this project was pretty simple, <br> I needed to recode `int printf(const char *restrict format, ...)` standart function from `<stdio.h>`.

## How to run

- Clone the repository:
`git clone https://github.com/victor-ln/42-ft_printf.git`
- Access the cloned folder:
`cd 42-ft_printf`
- Run the Makefile:
`make`
- To clean objects files execute:
`make clean`
- To clean `libftprintf.a` file:
`make fclean`
- Recompile:
`make re`

## Usage

- Add `#include "ft_printf.h"` in your source code or header file.
- Compile with:
``gcc main.c libftprintf.a -I inc -I libft``

## How it works

`int	ft_printf(const char *format, ...)` write the output under the control of a
format string that specifies how subsequent arguments (or
arguments accessed via the variable-length argument facilities of
stdarg(3)) are converted for output. Upon successful, it returns the number of characters printed 
(excluding the null byte used to end output to strings).

## What I have learned

- Implementing variable numbers of arguments
- Flags in functions
- Organize and format a large project
- Convert various data types to string `(char *)`
