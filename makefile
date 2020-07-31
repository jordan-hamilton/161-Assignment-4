# Source: http://web.engr.oregonstate.edu/~rookert/cs162/03.mp4

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g

OBJS = hailstone.o smallSort.o fallDistance.o
SRCS = hailstone.cpp smallSort.cpp fallDistance.cpp

all: hailstone smallSort fallDistance

hailstone: hailstone.o
	$(CXX) $(CXXFLAGS) hailstone.o -o hailstone

smallSort: smallSort.o
	$(CXX) $(CXXFLAGS) smallSort.o -o smallSort

fallDistance: fallDistance.o
	$(CXX) $(CXXFLAGS) fallDistance.o -o fallDistance


clean:
	rm *.o hailstone smallSort fallDistance
