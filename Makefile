EXEC: encode
FILES: main
SRCS: {$(FILES)}.c
OBJECTS: {$(FILES)}.o

all:
	gcc -Wall -Wextra -Werror -I./includes -c $(SRCS)
	gcc $(OBJECTS) -o $(EXEC)
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(EXEC)
re: fclean all
