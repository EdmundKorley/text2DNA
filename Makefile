SRCS		= srcs/*.c
OBJECTS		= *.o

# Builds both services
all: encode decode

# Builds the encoder
encode:
	gcc -Wall -Wextra -Werror -I./includes -c $(SRCS)
	gcc $(OBJECTS) -o encode

# Builds the decoder (WIP)
decode:
	gcc -Wall -Wextra -Werror -I./includes -c $(SRCS)
	gcc $(OBJECTS) -o decode

# Utilities
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f encode decode
test:
	sh tests/control.sh
re: fclean all
