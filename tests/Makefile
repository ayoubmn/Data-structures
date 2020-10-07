CXX = g++
CXX_MINGW = i686-w64-mingw32-g++
CXX_INCLUDE = -I../src/

DS = ../lib/ds.a

SRC := .

CPP_FILES := $(shell find $(SRC) -name "*.cpp")
EXE_FILES := $(patsubst %.cpp, %.exe, $(CPP_FILES))


.PHONY: all clean
all: $(EXE_FILES)
	mkdir -p bin
	@mv $(EXE_FILES) ./bin

%.exe: %.cpp
	$(CXX) -g $< $(DS) -o $@ -O2 $(CXX_INCLUDE)

