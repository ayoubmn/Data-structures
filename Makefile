CXX = g++
CXX_MINGW = i686-w64-mingw32-g++



SRC := ./src
CPP_FILES := $(shell find $(SRC) -name "*.cpp")

LIB_TARGET = lib/ds.a
.PHONY: ds clean
ds:
	mkdir -p lib
	$(CXX) -g -c $(CPP_FILES) -O2
	ar -crs $(LIB_TARGET) *.o
	
clean:
	@rm -f *.o
