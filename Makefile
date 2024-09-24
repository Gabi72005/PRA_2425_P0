# Regla principal para compilar el programa
all: main

# Compilación de BrazoRobotico.o
BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

# Compilación de main.o
main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

# Enlace y creación del ejecutable main
main: main.o BrazoRobotico.o
	g++ -o main main.o BrazoRobotico.o

# Limpieza de archivos objeto y ejecutable
clean:
	rm -f *.o main

# Regla para ejecutar el programa
test: all
	./main

