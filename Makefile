CC = gcc

CFLAGS = "-Werror"

SRC = *.c

OBJ = *.o

all : libft

libft : 
	gcc *.c -c
	ar -crs libft.a *.o

clean :
	rm *.o

fclean : clean
	rm libft.a

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

re : fclean all

.PHONY: clean fclean
