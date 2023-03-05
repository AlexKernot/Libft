#  Makefile for libft.

ARGS=-Wall -Wextra -Werror
FILES=ft_*.c

all:
	cc -c $(ARGS) $(FILES)
clean:
	rm -f *.o *.out *.a
so:
	cc -c -fPIC $(ARGS) $(FILES)
	cc -shared -o libft.so *.o
	cc -shared -o libft.a *.o
