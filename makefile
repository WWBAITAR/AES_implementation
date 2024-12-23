# Variables declaration
CC=gcc

SRC_DIR = Source_files
HDR_DIR = Header_files
OBJ_DIR = build

OBJ = $(OBJ_DIR)/main.o

CFLAGS=-I. -I$(HDR_DIR)

# Creating object files

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c #$(HDR_DIR)/%.h
	$(CC) -c -o $@ $< $(CFLAGS)

# Creating exe file

main: $(OBJ)
	$(CC) -o main $(OBJ)
