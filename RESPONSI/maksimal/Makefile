maksimal: maksimal.o
	g++ maksimal.o -o maksimal

maksimal.o: maksimal.cpp
	g++ -c maksimal.cpp -o maksimal.o

test:  maksimal
	 ./maksimal	

clean:
	rm -f maksimal.o maksimal
