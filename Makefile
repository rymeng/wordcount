# Makefile
VERSION=1.0.0

CC := gcc
RM := rm -rf
MKDIR := mkdir -p

TARGET := wc.x86_64

VPATH := src
SRC_DIR := ./src
OBJ_DIR := ./obj
BIN_DIR := ./bin
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(addprefix $(OBJ_DIR)/,$(OBJ_FILES_LIST))
SRC_FILES_LIST = $(notdir $(SRC_FILES))
OBJ_FILES_LIST = $(patsubst %.c,%.o,$(SRC_FILES_LIST))

CFLAGS := -Wall

all: $(TARGET)

$(TARGET): $(OBJ_FILES_LIST)
	$(MKDIR) $(BIN_DIR)
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$(TARGET) $(OBJ_FILES)

main.o:
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $(OBJ_DIR)/main.o $(SRC_DIR)/main.c

.PHONY: clean
clean:
	$(RM) $(BIN_DIR)
	$(RM) $(OBJ_DIR)
