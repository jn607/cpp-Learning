CXX      = clang++
CXXFLAGS = -std=c++17 -Wall

all: main

main: main.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

run: all
	./main