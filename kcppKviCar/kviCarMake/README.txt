To compile:
make


-----------------------------------------------------
You may separate compile and link in two steps as follows:
[-o ...] - in bracket is optionnal

g++ -c KviCar.cxx [-o KviCar.o]
g++ -c KviVan.cxx [-o KviVan.o] 
g++ -c CarFactory.cxx [-o CarFactory.o]

as result: KviCar.o KviVan.o CarFactory.o
to link:

g++ -o CarFactory KviCar.o KviVan.o CarFactory.o
