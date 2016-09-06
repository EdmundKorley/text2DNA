EXEC		= encode
SRCS		= srcs/*.c
OBJECTS		= *.o

all:
	gcc -Wall -Wextra -Werror -I./includes -c $(SRCS)
	gcc $(OBJECTS) -o $(EXEC)
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(EXEC)
re: fclean all
