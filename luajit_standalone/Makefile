CC=c++
CFLAGS=-g -Wall -I/usr/local/include -L/usr/local/lib -std=c++11 -pagezero_size 10000 -image_base 100000000
LDFLAGS=-lluajit-5.1

FILES=main.cpp

OUTPUT=standalone

all: standalone

standalone: $(FILES)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(FILES) $(LDFLAGS)

clean:
	rm -rf *.dSYM standalone
