CPP = g++
CPPFLAGS = -std=c++11
EXECUTABLES = hello square curly-brace-delimited tests-and-loops vector vector-class container

all: $(EXECUTABLES)

hello:
	$(CPP) $(CPPFLAGS) hello.cpp -o hello

square:
	$(CPP) $(CPPFLAGS) square.cpp -o square

curly-brace-delimited:
	$(CPP) $(CPPFLAGS) curly-brace-delimited.cpp -o curly-brace-delimited

tests-and-loops:
	$(CPP) $(CPPFLAGS) tests-and-loops.cpp -o tests-and-loops

vector:
	$(CPP) $(CPPFLAGS) vector.cpp -o vector

vector-class:
	$(CPP) $(CPPFLAGS) vector-class.cpp -o vector-class

container:
	$(CPP) $(CPPFLAGS) container.cpp -o container

clean:
	rm -f $(EXECUTABLES)
