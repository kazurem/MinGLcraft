# Variables for source, output, and libraries
SRC_DIR = ./src
OUT_DIR = ./output
LIBS = -lGL -lGLU -lglut -lGLEW -lglfw

# Files
SRC_FILES = $(SRC_DIR)/main.cpp
OBJ_FILES = $(OUT_DIR)/OpenGLApp.o
EXEC_FILE = $(OUT_DIR)/OpenGLApp

# Compilation rule
$(EXEC_FILE): $(OBJ_FILES)
	@echo "Linking..."
	g++ $(OBJ_FILES) -o $(EXEC_FILE) $(LIBS)

$(OBJ_FILES): $(SRC_FILES)
	@echo "Compiling..."
	g++ -c $(SRC_FILES) -o $(OBJ_FILES) $(LIBS)

# Clean rule
clean:
	@echo "Cleaning..."
	rm -f $(OUT_DIR)/*.o $(EXEC_FILE)

# Run the program
run: $(EXEC_FILE)
	./$(EXEC_FILE)

.PHONY: clean run
