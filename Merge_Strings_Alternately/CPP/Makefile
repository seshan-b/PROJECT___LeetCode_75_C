# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11

# Source files
SRC = main.cpp test.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Target executable
TARGET = test

# Default target
all: $(TARGET)

# Rule to build the target
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Rule to compile .cpp files to .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean up generated files
clean:
	rm -f $(TARGET) $(OBJ)

# Phony targets
.PHONY: all clean
