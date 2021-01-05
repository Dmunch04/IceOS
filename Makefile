SOURCE_FILES := $(shell find src -name *.cpp)
OBJECT_FILES := $(patsubst src/%.cpp, build/%.o, $(SOURCE_FILES))

$(OBJECT_FILES): build/%.o : src/%.cpp
	mkdir -p $(dir $@) && \
	nasm -f