<p align="center">
  <img src="assets/image.png" alt="Libft Banner" />
</p>

# 📚 Libft - Your Ultimate C Library from 42 School

[![Language](https://img.shields.io/badge/Language-C-blue)]() [![42 School](https://img.shields.io/badge/42-School-000000.svg)]()

---

## 🚀 About

**Libft** is the first project in the 42 School curriculum, where you reimplement **standard C functions** from scratch.  
This library will be the foundation for all your future C projects at 42.

---

## 📁 Project Structure

```
libft/
├── Makefile          # Build automation
├── libft.h           # Header file with function prototypes
├── ft_*.c            # Mandatory functions
├── ft_bonus.c        # Bonus part - Linked lists
└── README.md         # You're here! 😄
```

---

## 🛠️ Installation & Usage

```bash
# Compile the library
make

# Clean object files
make fclean

# Include in your code
#include "libft.h"
```

---

## 🔧 Functions Implemented

### Part 1 - Libc

```
ft_isalpha      ft_isdigit      ft_isalnum      ft_isascii      ft_isprint
ft_strlen       ft_memset       ft_bzero        ft_memcpy       ft_memmove
ft_strlcpy      ft_strlcat      ft_toupper      ft_tolower      ft_strchr
ft_strrchr      ft_strncmp      ft_memchr       ft_memcmp       ft_strnstr
ft_atoi         ft_calloc       ft_strdup
```

### Part 2 - Additional

```
ft_substr       ft_strjoin      ft_strtrim      ft_split        ft_itoa
ft_strmapi      ft_striteri     ft_putchar_fd   ft_putstr_fd    ft_putendl_fd
ft_putnbr_fd
```

### ✨ Bonus - Linked Lists

```
ft_lstnew       ft_lstadd_front ft_lstsize      ft_lstlast
ft_lstadd_back  ft_lstdelone    ft_lstclear     ft_lstiter      ft_lstmap
```

---

## 🧪 Testers

- [libft-war-machine](https://github.com/0x050f/libft-war-machine)
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [libft-tester](https://github.com/y3ll0w42/libft-tester)

```bash
git clone https://github.com/jtoty/Libftest.git && cd Libftest && ./grademe.sh
```

---

## 📌 Features

- Makefile with the following rules: `make`, `clean`, `fclean`, `re`
- Organized header file with function prototypes
- Include guards to prevent double inclusion

---

## 📎 Resources

- [42 Docs](https://github.com/42Paris)
- [man pages (Linux)](https://man7.org/linux/man-pages/)

---
