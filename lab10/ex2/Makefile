CC = g++
TARGET = candybar
OBJ = main.o candybar.o
INCLUDE = candybar.hpp

CFLAGS= -c -Wall
$(TARGET): $(OBJ)
	$(CC) $^ -o $@
%.o: %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) $< -o $@
.PHONY: clean
clean:
	rm -f *.o $(TARGET)