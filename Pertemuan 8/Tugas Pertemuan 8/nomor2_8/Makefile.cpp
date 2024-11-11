nomor1_8: nomor1_8.o
	g++ nomor1_8.o -o nomor1_8

nomor1_8.o: nomor1_8.cpp
	g++ -c nomor1_8.cpp -o nomor1_8.o

test:  nomor1_8
	 ./nomor1_8	

clean:
	rm -f nomor1_8.o nomor1_8
