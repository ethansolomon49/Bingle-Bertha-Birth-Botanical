# Makefile

CXX=g++

CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field

BINARIES=test

all: ${BINARIES}

test: test.o Member.o GGParent.o Parent.o Bingle.o Children.o Tree.o
	${CXX} $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o