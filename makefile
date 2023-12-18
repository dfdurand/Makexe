
# target:  dependencies
#  commands 

run:  program
	./program

program: main.o functions.o
	g++ main.o functions.o -o program
	echo "create main program executable"

main.o: main.cpp
	g++ -c main.cpp 
	echo "create main object file "
	@echo "not print"

functions.o:  functions.cpp	
	g++ -c functions.cpp
	echo "create functions object file "

print: $(wildcard *.cpp)
	ls -la  $?

clean:
	rm *.o program