O=.o

INSTALL_PREFIX=/usr/local
BIN_DIR=$(INSTALL_PREFIX)/bin
LIB_DIR=$(INSTALL_PREFIX)/lib

BUILD_DIR=build
OBJS=main$(O)
OUT=main
CC=gcc
CFLAGS=-g -Wall
LFLAGS=

all: prepare $(OBJS)
	@echo "$(CC) $(OBJS) -o $(BUILD_DIR)/$(OUT) $(LFLAGS)"
	$(CC) $(OBJS) -o $(BUILD_DIR)/$(OUT) $(LFLAGS)

clean:
	rm -Rf $(BUILD_DIR)
	rm -f $(OBJS) $(OUT)

prepare:
	@test -d $(BUILD_DIR) || mkdir $(BUILD_DIR)

# Sources
about.o: about.c
	@echo Compile $<
	@$(CC) $(CFLAGS) -c -o about$(O) $<


