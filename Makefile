CC     = xcrun clang++ -std=c++11 -stdlib=libc++ -w
CFLAGS = -c -Wall 
LINKER_FLAGS = -lSDL2 $(pkg-config --cflags --libs sdl2)

all: maze

maze: main.o Room.o 
	$(CC) main.o Room.o -o maze $(LINKER_FLAGS)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
	# g++ -Wall -Werror -pedantic -std=c++1y main.cpp

Room.o: Room.cpp Room.h
	$(CC) $(CFLAGS) $(LINKER_FLAGS) Room.cpp

clean:
	rm -rf *o hello
