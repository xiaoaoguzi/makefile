
TARGET     =she
CC         =gcc
OBJS       =main.o sub.o add.o div.o
OBJS      +=sum.o

$(TARGET):$(OBJS)
	$(CC) $^ -o $@
%.o:%.c test.h city.h
	$(CC) -c $<

clean:
	rm -rf *.o $(TARGET)

