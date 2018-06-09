S= main.cpp  Pokemon.cpp
H= Pokemon.h
main: $(S) $(H)
	#
	g++ $(S) -o main 2>&1| head
	#

build: 
	echo -n "S= " > temp
	ls *.cpp -x >> temp
	echo -n "H= " >> temp
	ls *.h -x >> temp
	cat temp ../template.mak > Makefile
	rm temp
