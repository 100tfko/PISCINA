CC = cc
CFLAGS = -c -Wall -Wextra -Werror
NAME = rush-02

all: main.o decompositor.o
	$(CC)  main.o decompositor.o -o $(NAME)

main.o: main.c
	$(CC) $(CFLAGS) main.c -o main.o

decompositor.o: decompositor.c
	$(CC) $(CFLAGS) decompositor.c -o decompositor.o

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf *.o
