CC = g++
TARGET = fun
OBJ = main.o fun.o
INCLUDE = fun.hpp

CFLAGS= -c -Wall
$(TARGET): $(OBJ)
	$(CC) $^ -o $@
%.o: %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) $< -o $@
.PHONY: clean
clean:
	rm -f *.o $(TARGET)