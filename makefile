
CC=gcc

SRC_PATH = Source_files
HDR_PATH = Header_files

CFLAGS=-I. -I$(HDR_PATH)

%.o: $(SRC_PATH)/%.c $(HDR_PATH)/Addition.h
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.o Addition.o
	$(CC) -o main main.o Addition.o
