CC=gcc
MAKE = hellomake
FUNC = hellofunc

.Phony = hellomake

all: clean
	$(CC) -o $(MAKE) $(MAKE).c $(FUNC).c -I.

clean:
	clear
	rm -f $(MAKE)

