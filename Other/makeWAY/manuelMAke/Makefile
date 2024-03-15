TARGET=app
CC=gcc
OBJS=obj.o
SRC=obj.c
CCFLAGS=-c

all: $(OBJS)
	@$(CC) $(CCFLAGS) $(SRC) -o $(OBJS) > /dev/null
	@$(CC) $(SRC) -o $(TARGET) 
	@chmod u+x $(TARGET)
	@echo "compile sucess 100%"

clean: $(TARGET)
	@echo "Cleaning"
	@rm -rf build/
	@rm -rf $(TARGET)
	
install: $(TARGET)
	@mkdir -p ./build/bin
	@mkdir -p ./build/obj
	@cp $(TARGET) ./build/bin/
	@mv $(OBJS) ./build/obj
	@echo "install sucess 100%" 

run: install
	@echo "running sucess"
	@./build/bin/$(TARGET)

.PHONY: all clean install run