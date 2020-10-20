OBJECTS = main.o mystring.o
all : $(OBJECTS)
	gcc -o main $(OBJECTS)
main.o : main.c mystring.h
	gcc -c main.c mystring.h
mystring.o : mystring.c mystring.h
	gcc -c mystring.c mystring.h
.PHONY : clean
clean :
	rm *.o
