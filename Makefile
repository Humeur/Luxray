##
## EPITECH PROJECT, 2021
## Bomberman
## File description:
## Makefile
##

CC = g++
EXT = cpp
MKDIR = mkdir -p
RM = rm -rf

SRC_DIR = lib
OBJ_DIR = .obj
BIN_DIR = bin

TARGET = luxray

CPPFLAGS =
CFLAGS = -Wall -Wextra -Werror -std=c++11 -I/raylib/src -I../src -DPLATFORM_RPI
LDFLAGS = -L/raylib/src -L/opt/vc/lib
LDLIBS = -lraylib -lpthread -lrt -lm -ldl

rwildcard = $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2) $(filter $(subst *,%,$2),$d))

SRC = $(call rwildcard, $(SRC_DIR), *.$(EXT))
OBJ=$(SRC:$(SRC_DIR)/%.$(EXT)=$(OBJ_DIR)/%.o)

all: dirs $(BIN_DIR)/$(TARGET)

dirs: $(BIN_DIR) $(OBJ_DIR)

$(BIN_DIR):
	$(MKDIR) $@

$(OBJ_DIR):
	$(MKDIR) $@

$(BIN_DIR)/$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS) $(LDLIBS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.$(EXT)
	$(MKDIR) $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

re: fclean all

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(BIN_DIR)

.PHONY: all dirs clean fclean