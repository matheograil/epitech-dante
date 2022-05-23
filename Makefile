##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## MAKEFILE file.
##

G_PROJECT_FILES = generator/src/*.c

G_LIBRARY_FILES = generator/lib/*.c

G_BINARY_FILE = generator/generator

S_PROJECT_FILES = solver/src/*.c

S_LIBRARY_FILES = solver/lib/*.c

S_BINARY_FILE = solver/solver

all:
	gcc $(G_PROJECT_FILES) $(G_LIBRARY_FILES) -o $(G_BINARY_FILE)
	gcc $(S_PROJECT_FILES) $(S_LIBRARY_FILES) -o $(S_BINARY_FILE)

clean:
	rm -f $(G_BINARY_FILE) $(S_BINARY_FILE)

fclean: clean

re: fclean all
