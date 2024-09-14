Nomor2 : Task2.o
		g++ -o Nomor2 Task2.o

Task2.o : Task2.cpp
		g++ -c Task2.cpp

clean:
	rm -f Nomor2 Task2.o
