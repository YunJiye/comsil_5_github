CC = g++
CFLAGS = -W -g
target = main
objects = main.o

$(target) : $(objects)
	$(CC) -o $(target) $(objects)

.PHONY : clean
clean :
	rm $(target) $(objects)
