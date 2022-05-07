CC = gcc
CFLAGS = -W -Wall
TARGET = burger_shop
DTARGET = burger_shop_debug
OBJECTS = main.c manager.o product.o
all : $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^
clean :
	rm *.o burger_shop
	rm shop burger_shop_debug
