all: compilar
compilar: producto tienda cliente menu main
		g++ -o salida producto.o tienda.o menu.o main.o
producto: producto.cpp producto.h
		g++ -c producto.cpp
tienda: tienda.cpp tienda.h
		g++ -c tienda.cpp
cliente: cliente.cpp cliente.h
		g++ -c cliente.cpp
menu: menu.cpp menu.h
		g++ -c menu.cpp
main: main.cpp menu.h tienda.h producto.h 
		g++ -c main.cpp