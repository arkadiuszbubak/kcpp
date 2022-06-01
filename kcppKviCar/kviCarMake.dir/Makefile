# Author: Arkadiusz Bubak
# mail: arkadiusz.bubak@us.edu.pl
# date: 2022.06.01

#Example of Makefile

#--------- Link command -------------------------------------
CarFactory: CarFactory.o KviCar.o KviVan.o
	    g++ CarFactory.o KviCar.o KviVan.o -o CarFactory
	    
#--------- Compilation commands -----------------------------
CarFactory.o: CarFactory.cxx
	      g++ -c CarFactory.cxx -I./include -o CarFactory.o
			  
KviCar.o: src/KviCar.cxx
	  g++ -c src/KviCar.cxx -I./include -o KviCar.o
	  
KviVan.o: src/KviVan.cxx
	  g++ -c src/KviVan.cxx -I./include  -o KviVan.o
	  
#--------- Cleaning command ---------------------------------
clean:
	  rm -rf *.o *.o
	  
distclean:
	  rm -rf *.o *.o *~ CarFactory
	  
