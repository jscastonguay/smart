GCC       := gcc
GCC_FLAGS := -ggdb

BIN     := bin
SRC     := src
INCLUDE := src

LIBRARIES   :=
EXECUTABLE  := smart


all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.c
	$(GCC) $(GCC_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

clean:
	-rm $(BIN)/*