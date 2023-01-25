all: compilar
compilar: circulo rectangulo triangulo menu app
		g++ -o salida circulo.o rectangulo.o triangulo.o menu.o app.o
circulo: circulo.cpp circulo.h
		g++ -c circulo.cpp
rectangulo: rectangulo.cpp rectangulo.h
		g++ -c rectangulo.cpp
triangulo: triangulo.cpp rectangulo.h
		g++ -c triangulo.cpp
menu: menu.cpp menu.h
		g++ -c menu.cpp
app: app.cpp menu.h triangulo.h rectangulo.h circulo.h
		g++ -c app.cpp