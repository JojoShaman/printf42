# FT_PRINTF

This project is part of the 42 curriculum, created by **srosu**.

## Goals

The objective of this project is to recreate a simplified version of the standard `printf` function in C. This implementation focuses on handling formatted output, managing variable arguments, and understanding low-level output operations.

This project strengthens knowledge of variadic functions, format parsing, and memory handling, which are critical for more advanced system-level programming.

## Supported Conversions

The function handles the following format specifiers:

- `%c` → character  
- `%s` → string  
- `%p` → pointer (in hexadecimal format)  
- `%d` → signed decimal integer  
- `%i` → signed decimal integer  
- `%u` → unsigned decimal integer  
- `%x` → hexadecimal (lowercase)  
- `%X` → hexadecimal (uppercase)  
- `%%` → percent sign  

## Function Prototype

`int ft_printf(const char *format, ...);`

## Project Structure

### Core

- `ft_printf.c` → main function and parsing loop  
- `type_is.c` → dispatcher handling format specifiers  

### Output Functions

- `ft_putchar_fd.c` → print a character  
- `ft_putstr_fd.c` → print a string  
- `ft_putnbr_fd.c` → print a signed integer  
- `ft_putnbr_unsigned_fd.c` → print an unsigned integer  
- `ft_putnbr_base.c` → print numbers in arbitrary bases (hex, pointer, etc.)  

## Key Concepts

- Variadic functions using `va_list`, `va_start`, `va_arg`, `va_end`  
- Parsing and interpreting format strings  
- Converting numbers to different bases  
- Writing output using `write`  
- Handling edge cases (NULL strings, zero values, etc.)  

## Implementation Details

The project is structured around:

- A main parsing loop that scans the format string  
- Dispatcher logic to route each format specifier to the correct handler  
- Modular helper functions for output and conversions  
- Consistent return value management (total number of printed characters)  

## Resources

This project was primarily built by studying the behavior of the original `printf` function through extensive testing and comparison with its output. Edge cases and formatting behavior were validated by writing custom test cases and analyzing discrepancies.

Low-level output handling was implemented using the `write` system call, with reference to its manual page. Variadic argument handling was based on the `<stdarg.h>` documentation and practical experimentation.

Debugging and validation were performed using tools such as `gdb` and `valgrind` to ensure correctness and memory safety throughout the implementation.
