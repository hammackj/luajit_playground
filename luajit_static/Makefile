CC=c++
CFLAGS=-g -Wall -I/usr/local/include -L/usr/local/lib -L. -std=c++11 -pagezero_size 10000 -image_base 100000000
LDFLAGS=-lluajit-5.1 -lstatic -Wl,-force_load,libstatic.a

#-Wl,-all_load

FILES=main.cpp
STATIC_FILES=static.cpp

OUTPUT=static

all: static standalone

static: $(STATIC_FILES)
	$(CC) -MMD -MP -g -std=c++11 -c $(STATIC_FILES) -o static.o
	ar -rcs libstatic.a static.o

standalone: $(static) $(FILES)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(FILES) $(LDFLAGS)

clean:
	rm -rf *.dSYM static *.d *.a *.o
