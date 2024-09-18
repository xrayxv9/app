C_files = main.c
O_files = main.o
CC = cc
CFLAGS = -Wall -Werror -Wextra $(shell sdl2-config --cflags)
LDFLAGS = $(shell sdl2-config --libs)

output: $(O_files)
	$(CC) $(O_files) -o output $(LDFLAGS)
	rm -f *.o

$(O_files): $(C_files)
	$(CC) $(CFLAGS) -c $(C_files) -o $(O_files)

