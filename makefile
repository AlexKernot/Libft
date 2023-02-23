#  Makefile for libft.

ARGS=-Wall -Wextra -Werror
FILES=ft_*.c

all:
	cc -c $(ARGS) $(FILES)
clean:
	rm *.o *.out *.a
