*This project has been created as part of the 42 curriculum by lemille.*

## Description
The goal of this project is to create our own libc, which we can reuse
as needed in our future C projects. It contains the basic functions needed
for writing fluid, idiomatic code. It consists of a libft.H header file
and an ft_*.c file for each function required by the assignment and a Makefile.

Here is the project's directory structure :
.
├──libft.h
├──Makefile
├──README.md
├──ft_isalpha.c
├──ft_memset.c
├──ft_memset.c
├──...


## Instructions
To create the required libft.a, you must use the rules defined in the Makefile :
		- make : to compile all .c files, including header files.
		- make re: to recompile everything.
		- make clean: to delete all .o files
		- make fclean: to delete the .o and .a files

Each function has its own dependencies, and they are all linked to headers that
enable synergy between them. The helper functions, meanwhile, are declared as
static to avoid any import issues.


## Resources
my use of AI:

I don’t just use IA for research and explanations; I also ask it to summarize
manuals for me, find manuals for me, and explain certain concepts that I didn’t
understand when talking with my classmates or that I wanted to explore
further—such as chained lists or the differences between signed and unsigned
types. In short, I use AI for educational and research purposes.
My code is entirely my own. He only gave me questions to guide me if I ever
find myself using it on functions where I feel lost.
