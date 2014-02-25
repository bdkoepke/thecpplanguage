CPP = g++
CPPFLAGS = -std=c++11
EXECUTABLES = main

all: $(EXECUTABLES)

main:
	$(CPP) $(CPPFLAGS) main.cpp -o main

clean:
	rm -f $(EXECUTABLES)
