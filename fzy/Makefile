# TODO: Clean comments

#VERSION=1.0

#CPPFLAGS=-DVERSION=\"${VERSION}\" -D_GNU_SOURCE
#CFLAGS+=-MD -Wall -Wextra -g -std=c99 -O3 -pedantic -Ideps -Werror=vla
#PREFIX?=/usr/local
#MANDIR?=$(PREFIX)/share/man
#BINDIR?=$(PREFIX)/bin
#DEBUGGER?=

#INSTALL=install
#INSTALL_PROGRAM=$(INSTALL)
#INSTALL_DATA=${INSTALL} -m 644

LIBS=-lpthread
OBJECTS=fzy.o match.o tty.o choices.o options.o tty_interface.o

all: fzy

fzy: $(OBJECTS)
	$(CC) $(CFLAGS) $(CCFLAGS) -o $@ $(OBJECTS) $(LIBS)

%.o: %.c config.h
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

config.h: config.def.h
	cp config.def.h config.h

clean:
	rm -f fzy *.o

.PHONY: all clean install