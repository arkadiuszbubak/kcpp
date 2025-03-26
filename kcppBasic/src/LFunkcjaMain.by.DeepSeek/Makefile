# Makefile

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable
TARGET = LFunkcjaMain

# Source file
SRC = LFunkcjaMain.cc

# Build rules
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: all clean
