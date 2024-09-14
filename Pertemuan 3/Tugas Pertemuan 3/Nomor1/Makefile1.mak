Nomor1 : Task1.o
		g++ -o Nomor1 Task1.o

Task1.o : Task1.cpp
		g++ -c Task1.cpp

clean:
	rm -f Nomor1 Task1.o
