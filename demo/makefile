CPP = g++
CPPOPTS =
LINKOPTIONS =

all : demo
demo : syscallDemo.o
	$(CPP) $(LINKOPTIONS) -o demo syscallDemo.o

%.o : %.cpp
	$(CPP) $(CPPOPTS) -c $<
clean:
	rm -f demo
	rm -f *.ii
	rm -f *.S
	rm -f *.o

