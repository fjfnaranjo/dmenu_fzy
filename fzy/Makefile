# TODO: Original fzy flags
#CPPFLAGS=-DVERSION=\"${VERSION}\" -D_GNU_SOURCE
#CFLAGS+=-MD -Wall -Wextra -g -std=c99 -O3 -pedantic -Ideps -Werror=vla

all: match.o choices.o

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

clean:
	rm -f match.o choices.o

.PHONY: all clean