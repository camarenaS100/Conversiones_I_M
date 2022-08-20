# Conversiones_I_M

            Propósito de la biblioteca
Ésta biblioteca convierte unidades del sistema imperial anglosajón a unidades del sistema métrico, especificamente de :

              Longitud 

1 pulgada (in) = 2.54 cm

1 pie (ft) = 12 in = 30.48 cm

1 yarda (yd) = 3 ft = 91.44 cm

1 cadena (ch) = 4 rd = 20.1168 m

1 milla (mi) = 8 fur = 1.609344 km

1 legua = 3 mi = 4.828032 km


              Volumen para líquidos 

1 onza líquida (fl oz) = 8 fl dr = 28,4130642624 cm³ (ml)

1 pinta (pt) = 4 gills = 568,261285248 cm³ (ml)

1 cuarto (qt) = 2 pt = 1,136522570496 dm³ (l)

1 galón (gal) = 4 qt = 4,546090281984 dm³ (l)

1 barril = 35 gal = 159,11315986944 dm³ (l)

              Masa 

1 grano (gr) = 64,79891 mg

1 onza (oz) = 16 dracmas = 28,34952312495957 g

1 libra (lb) = 16 oz = 453,5923699993531 g

1 tonelada corta (US ton) = 4 US qtr (80 arrobas) = 907,1847399987064 kg

1 tonelada larga (UK ton) = 4 UK qtr (160 st) = 1016,046908798551 kg



                      2. Estructura de directorios (conseguido mediante tree)

![Captura de pantalla 2022-08-19 a la(s) 14 14 06](https://user-images.githubusercontent.com/66481799/185690970-fa1680cf-49a7-45b6-a067-51d9f0df8f35.png)

                        Crear los archivos objetos de cada función
gcc -fPIC -c .\src\bbl_l.cc -o .\obj\bbl_l.o -I .\include

gcc -fPIC -c .\src\chain.cc -o .\obj\chain.o -I .\include

gcc -fPIC -c .\src\foot.cc -o .\obj\foot.o -I .\include

gcc -fPIC -c .\src\gal_l.cc -o .\obj\gal_l.o -I .\include

gcc -fPIC -c .\src\grain.cc -o .\obj\grain.o -I .\include

gcc -fPIC -c .\src\inch.cc -o .\obj\inch.o -I .\include

gcc -fPIC -c .\src\large_ton -o .\obj\large_ton.o -I .\include

gcc -fPIC -c .\src\league.cc -o .\obj\league.o -I .\include

gcc -fPIC -c .\src\mile.cc -o .\obj\mile.o -I .\include

gcc -fPIC -c .\src\onz_m.cc -o .\obj\onz_m.o -I .\include

gcc -fPIC -c .\src\onzl_ml.cc -o .\obj\onzl_ml.o -I .\include

gcc -fPIC -c .\src\pint_ml.cc -o .\obj\pint_ml.o -I .\include

gcc -fPIC -c .\src\pound.cc -o .\obj\pound.o -I .\include

gcc -fPIC -c .\src\quart.cc -o .\obj\quart.o -I .\include

gcc -fPIC -c .\src\short_ton.cc -o .\obj\short_ton.o -I .\include

gcc -fPIC -c .\src\yard.cc -o .\obj\yard.o -I .\include

                        Biblioteca estática
ar crs .\lib\static\convimp.lib .\obj\*.o

g++ main.cc -o app\static -I .\lib\include -L .\lib\static -lconvimp

./app/static.exe

                        Biblioteca dinámica
g++ -shared -o .\lib\dynamic\libconvimp.dll .\obj\*.o

g++ -c main.cc 

g++ -o lib\dynamic\dynamic main.o -I .\lib\include -L .\lib\dynamic -lconvimp

./lib/dynamic/dynamic.exe


                      4. Tutorial para usar la biblioteca :
  a.- Agregar al directorio de tu archivo de c++ que usará la biblioteca, la carpeta que contiene la estructura de directorios de Conversiones_I_M y dependiendo de dónde lo pongas, acomodar la ruta correspondiente en la cabecera include de tu archivo c++. Nota : para las medidas de masa y longitud debes usar tipo de dato float y para volúmenes líquidos double.
Aquí hay ejemplos para : 
 
                      Masa
 
![carbon (6)](https://user-images.githubusercontent.com/66481799/185765919-f22b43f0-40e7-4a72-af24-ef5f9c279441.png)


                      Longitud  

   ![carbon (5)](https://user-images.githubusercontent.com/66481799/185765890-812607fa-b0b8-4ac7-b954-8dec73e987aa.png)
                   
                   
                      Volumen Líquidos

![carbon (7)](https://user-images.githubusercontent.com/66481799/185765946-e03630e9-e46c-4811-8f69-b4ec8724b29c.png)

  
