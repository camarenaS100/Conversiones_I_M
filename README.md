# Conversiones_I_M

                      1. Propósito de la biblioteca
Ésta biblioteca convierte unidades del sistema imperial anglosajón a unidades del sistema métrico, especificamente de :

    -   
                      2. Estructura de directorios (conseguido mediante tree)

![Captura de pantalla 2022-08-19 a la(s) 14 14 06](https://user-images.githubusercontent.com/66481799/185690970-fa1680cf-49a7-45b6-a067-51d9f0df8f35.png)


                      3. Comandos usados para compilar las bibliotecas
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

+ Biblioteca estática:

ar crs ./lib/static/libconvimp.a ./obj/*.o 

g++ main.cc -o app/test -I ./lib/include -L ./lib/static -lconvimp

./app/test 

+ Biblioteca dinámica:

gcc -shared -o ./lib/dynamic/libconvimp.so ./obj/*.o

g++ main.cc -o app/testd -I ./lib/include -L ./lib/dynamic -lconvimp

./app/testd

                      4.Tutorial para usar la biblioteca :
  a.- Agregar al directorio de tu archivo de c++ que usará la biblioteca, la carpeta que contiene la estructura de directorios de Conversiones_I_M y dependiendo de dónde lo pongas, acomodar la ruta correspondiente en la cabecera include de tu archivo c++. 
 
 b.- Para invocar las funciones solo usas la sintaxis de cada función:
 
 double onzl_ml(double& a);
  
  b.- Escribes ( #include "convimp" ) en el archivo de c++ al que quieras agregar la biblioteca en la cabecera.
  
  c.- Llamas a las funciones y mandas los argumentos necesarios.
  
Las funciones y su uso documentado se encuentran en /include/convimp
