mkdir build
cd build
To compile call from build directory:
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ../
make

Clangd potrzebuje bazy danych kompilacji, aby zrozumieć, jakie ścieżki do plików nagłówkowych (-I/sciezka/do/include) są używane w projekcie.
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .
