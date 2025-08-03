# ft_printf

printf_42 - A custom implementation of the standard `printf` function in C. Developed from scratch as part of the 42 Codam core curriculum, with support for standard format specifiers and variadic arguments.

---

## Overview

`ft_printf` replicates the behaviour of the standard `printf` function from the C library, handling formatted output using variadic arguments. This project was developed **without using any standard library formatting functions, focusing instead on low-level string manipulation, format parsing, and output via system calls.

The goal was to create a minimal and functional version of the `printf` that replicates the core behaviour of the original function.

Key aspects of the implementation include:

- Handling variadic functions (<stdarg.h>)
- Building custom number-to-string conversions
- Managing format string parsing
- Ensuring type-safe output formatting

---

## Supported Format Specifiers

|  Specifier  | Description             |
|-------------|-------------------------|
| `%c`        | Character               |
| `%s`        | String                  |
| `%p`        | Pointer (void *)        |
| `%d` / `%i` | Signed decimal integer  |
| `%u`        | Unsigned decimal        |
| `%x`        | Hexadecimal (lowercase) |
| `%X`        | Hexadecimal (uppercase) |
| `%%`        | Literal percent sign    |
 
---

 ## Installation
 **Note:** *This project uses libft as a Git submodule (in libft_42/)*
 

 ```bash
 git clone --recurse-submodules https://gituhb.com/yourusername/printf_42.git
 cd printf_42
 make
 ```

 ---

 ## Usage Example

```c
#include "ft_printf.h"

int main(void) {

    ft_printf("Hello World!\n");
    return 0;
}
```

 ``` bash
 cc -Wall -Wextra -Werror main.c libftprintf.a
 ./a.out
 ```

---
