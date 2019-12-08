CC=g++
CFLAGS= -c -Wall
LDFLAGS=
SOURCES=List.cpp List.expand.cpp LIterator.cpp LiteratorExpand.cpp Main.cpp
 Node.cpp NodeExpand.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
-cpp.o:
	$(CC) $(CFLAGS) $< -o $@
