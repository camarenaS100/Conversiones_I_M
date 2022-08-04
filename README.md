# Conversiones_I_M

1. Estructura de directorios (conseguido mediante tree)
.
├── I7final
├── Libreriaconvimp
│   ├── app
│   │   ├── test
│   │   └── testd
│   ├── include
│   │   └── convimp
│   ├── lib
│   │   ├── dynamic
│   │   │   └── libconvimp.so
│   │   └── static
│   │       └── libconvimp.a
│   ├── main.cc
│   ├── main.o
│   ├── obj
│   │   ├── bbl_l.o
│   │   ├── chain.o
│   │   ├── foot.o
│   │   ├── gal_l.o
│   │   ├── grain.o
│   │   ├── inch.o
│   │   ├── large_ton.o
│   │   ├── league.o
│   │   ├── mile.o
│   │   ├── onz_m.o
│   │   ├── onzl_ml.o
│   │   ├── pint_ml.o
│   │   ├── pound.o
│   │   ├── quart_l.o
│   │   ├── short_ton.o
│   │   └── yard.o
│   └── src
│       ├── bbl_l.cc
│       ├── chain.cc
│       ├── foot.cc
│       ├── gal_l.cc
│       ├── grain.cc
│       ├── inch.cc
│       ├── large_ton.cc
│       ├── league.cc
│       ├── mile.cc
│       ├── onz_m.cc
│       ├── onzl_ml.cc
│       ├── pint_ml.cc
│       ├── pound.cc
│       ├── quart_l.cc
│       ├── short_ton.cc
└──     └── yard.cc

Comandos usados para compilar las bibliotecas

Crear los archivos .o de las funciones:
g++ -c ./src/bbl_l.cc -o ./obj/bbl_l.o -I ./include 
g++ -c ./src/chain.cc -o ./obj/chain.o -I ./include 
g++ -c ./src/foot.cc -o ./obj/foot.o -I ./include 
g++ -c ./src/gal_l.cc -o ./obj/gal_l.o -I ./include 
g++ -c ./src/grain.cc -o ./obj/grain.o -I ./include 
g++ -c ./src/inch.cc -o ./obj/inch.o -I ./include 
g++ -c ./src/large_ton.cc -o ./obj/large_ton.o -I ./include 
g++ -c ./src/league.cc -o ./obj/league.o -I ./include  
g++ -c ./src/mile.cc -o ./obj/mile.o -I ./include 
g++ -c ./src/onz_m.cc -o ./obj/onz_m.o -I ./include 
g++ -c ./src/onzl_ml.cc -o ./obj/onzl_ml.o -I ./include 
g++ -c ./src/pint_ml.cc -o ./obj/pint_ml.o -I ./include 
g++ -c ./src/pound.cc -o ./obj/pound.o -I ./include 
g++ -c ./src/quart_l.cc -o ./obj/quart_l.o -I ./include 
g++ -c ./src/short_ton.cc -o ./obj/short_ton.o -I ./include 
g++ -c ./src/yard.cc -o ./obj/yard.o -I ./include 

Biblioteca estática:
ar crs ./lib/static/libconvimp.a ./obj/*.o 
g++ main.cc -o app/test -I ./lib/include -L ./lib/static -lconvimp
./app/test 

Biblioteca dinámica:
ar crs ./lib/dynamic/libconvimp.so ./obj/*.o
g++ -c main.cc -o main.o 
g++ -o  ./app/testd  main.o -L ./lib/dynamic -lconvimp
./app/testd

3. Tutorial para usar la biblioteca :
  a.- Agregar el archivo de c++ que usará la biblioteca en el mismo directorio de I7final
  b.- Escribes ( #include "convimp" ) en el archivo de c++ al que quieras agregar la biblioteca en la cabecera.
  c.- Llamas a las funciones y mandas los argumentos necesarios.
  
Las funciones y su uso documentado se encuentran en /include/convimp
