CC=c++
CFLAGS=-g -Wall -I/usr/local/include -L/usr/local/lib -L. -std=c++11 -pagezero_size 10000 -image_base 100000000
LDFLAGS=-lluajit-5.1 -ldynamic

FILES=main.cpp
DYNAMIC_FILES=dynamic.cpp

OUTPUT=dynamic

all: dynamic standalone

dynamic: $(DYNAMIC_FILES)
	$(CC) -MMD -MP -g -std=c++11 -c $(DYNAMIC_FILES) -o dynamic.o
	$(CC) -shared -g -std=c++11 dynamic.o -o libdynamic.dylib

standalone: $(static) $(FILES)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(FILES) $(LDFLAGS)

clean:
	rm -rf *.dSYM dynamic *.d *.a *.o *.dylib
