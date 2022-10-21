all: match.o choices.o

%.o: %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

clean:
	rm -f match.o choices.o

.PHONY: all clean