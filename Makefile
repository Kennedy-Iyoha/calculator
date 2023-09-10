# Compiler
CC := g++

# Compiler flags
CFLAGS := -Wall -Wextra -std=c++23

# Source files
SRCDIR := src
SOURCES := $(wildcard $(SRCDIR)/*.cpp)

# Object files
OBJDIR := bin
OBJECTS := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

# Executable name
EXECUTABLE := $(OBJDIR)/Calculator

# Create the bin directory if it doesn't exist
$(shell mkdir -p $(OBJDIR))

# Default rule
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# Build rule for object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJDIR)/*.o $(EXECUTABLE)