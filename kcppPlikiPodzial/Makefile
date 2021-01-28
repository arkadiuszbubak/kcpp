#Prosty Makefile

#Obiekt "programMain" zalezny jest od plikow dwaPlikiC.o i mainDwaPlikiC.o
programMain: dwaPlikiC.o mainDwaPlikiC.o
	     g++ dwaPlikiC.o mainDwaPlikiC.o -o programMain

dwaPlikiC.o: dwaPlikiC.cc
	     g++ -c dwaPlikiC.cc
mainDwaPlikiC.o: mainDwaPlikiC.cc
	     g++ -c mainDwaPlikiC.cc

clean:
	rm -f *.o
