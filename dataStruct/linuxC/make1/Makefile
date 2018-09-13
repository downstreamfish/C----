OBJS=io.o init.o compute.o
EXECUTABLE=myprogram
CC=gcc
CFLAGS=-Wall
COMPILE=$(CC) $(CFLAGS) -c

#init: init.o compute.o io.o
	 #$(CC) -o init init.o compute.o io.o
$(EXECUTABLE):$(OBJS)
	$(CC) -o $(EXECUTABLE) $(OBJS)

#init.o: init.c myprogram.h
#	$(COMPILE) init.c -o init.o
#compute.o: compute.c 
#	$(COMPILE) compute.c -o compute.o
#io.o: io.c myprogram.h
#	$(COMPILE) io.c -o io.o

io.o init.o: myprogram.h

%.o: %.c
	$(COMPILE) -o $@ %<

clean:
	-rm $(OBJS) $(EXECUTABLE)*~
