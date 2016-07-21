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
	./bin/03_cStyle_array \

./bin/03_string: ./object/03_string.o
	$(CC) $(LIBDIR) -o ./bin/03_string ./object/03_string.o $(LIBS) $(FLAGS)
./object/03_string.o: ./src/cpp_primer03_string.cpp
	$(CC) $(INCDIR) $(CFLAGS2) $(FLAGS) -o ./object/03_string.o  ./src/cpp_primer03_string.cpp 

./bin/03_vector: ./object/03_vector.o
	$(CC) $(LIBDIR) -o ./bin/03_vector ./object/03_vector.o $(LIBS) $(FLAGS)
./object/03_vector.o: ./src/cpp_primer03_vector.cpp
	$(CC) $(INCDIR) $(CFLAGS2) $(FLAGS) -o ./object/03_vector.o  ./src/cpp_primer03_vector.cpp 

./bin/03_array: ./object/03_array.o
	$(CC) $(LIBDIR) -o ./bin/03_array ./object/03_array.o $(LIBS) $(FLAGS)
./object/03_array.o: ./src/cpp_primer03_array.cpp
	$(CC) $(INCDIR) $(CFLAGS2) $(FLAGS) -o ./object/03_array.o  ./src/cpp_primer03_array.cpp

./bin/03_cStyle_array: ./object/03_cStyle_array.o
	$(CC) $(LIBDIR) -o ./bin/03_cStyle_array ./object/03_cStyle_array.o $(LIBS) $(FLAGS)
./object/03_cStyle_array.o: ./src/cpp_primer03_cStyle_array.cpp
	$(CC) $(INCDIR) $(CFLAGS2) $(FLAGS) -o ./object/03_cStyle_array.o  ./src/cpp_primer03_cStyle_array.cpp



clean:
	rm -f ./object/* ./bin/* 
