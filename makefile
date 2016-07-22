# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
CFLAGS=-c -Wall
CFLAGS2=-O0 -g3 -Wall -c -fmessage-length=0
LIBS=
LIBDIR=
INCDIR=
FLAGS= -std=c++11


all:./bin/03_string \
	./bin/03_vector \
	./bin/03_array \
	./bin/03_cStyle_array \
	./bin/09_seqCont	\
	
./bin/%: ./temp/%.o
	$(CC) $(LIBDIR) -o $(@) $(^) $(LIBS) $(FLAGS)

./temp/%.o :./src/%.cpp
	$(CC) $(INCDIR) $(CFLAGS2) $(FLAGS) -o $(@) $(^)
	
.PHONEY: clean

clean:
	rm -f ./temp/* ./bin/* 
