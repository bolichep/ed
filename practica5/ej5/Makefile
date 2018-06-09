S= DestructiveLinkedLists.cpp  main.cpp
H= DestructiveLinkedLists.h
main: $(S) $(H)
	#
	g++ $(S) -o main 2>&1| head
	#

run: main
	./main

build: 
	echo -n "S= " > temp
	ls *.cpp -x >> temp
	echo -n "H= " >> temp
	ls *.h -x >> temp
	cat temp ~/U/ED/C/template.mak > Makefile
	rm temp
