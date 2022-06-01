To compile:
make


-----------------------------------------------------
You may separate compile and link in two steps as follows:
[-o ...] - in bracket is optionnal

cd src  
g++ -c KviCar.cxx -I../include [-o KviCar.o]
g++ -c KviVan.cxx -I../include [-o KviVan.o] 
cd ../
g++ -c CarFactory.cxx -I./include [-o CarFactory.o]

as result: KviCar.o KviVan.o CarFactory.o
to link:

g++ -o CarFactory src/KviCar.o src/KviVan.o CarFactory.o

-----------------------------------------------------
OR 
g++ -c src/KviCar.cxx -I./include [-o KviCar.o]
g++ -c src/KviVan.cxx -I./include [-o KviVan.o] 
cd ../
g++ -c CarFactory.cxx -I./include [-o CarFactor.o]

as result: KviCar.o KviVan.o (outside src directory) and CarFactory.o
to link:

g++ -o CarFactory KviCar.o KviVan.o CarFactory.o

