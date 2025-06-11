CC = gcc
CFLAGS = -Wall -std=c99
OBJ = TablasDeConversion.o conversion.o
TEST_OBJ = ConversionTest.o conversion.o

all: tablas

tablas: $(OBJ)
	$(CC) $(CFLAGS) -o tablas $(OBJ)

test: $(TEST_OBJ)
	$(CC) $(CFLAGS) -o test $(TEST_OBJ)
	./test

clean:
	rm -f *.o tablas test