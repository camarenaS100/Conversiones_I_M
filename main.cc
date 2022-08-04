#include <iostream>
using namespace std;
#include "./include/convimp"
#include <string>
#include <iomanip>

using std::fixed;
using std::setprecision;

int main()
{
double a=3, z=0.0, x=10;

cout<<"El resultado de la conversion de " <<a<<" onzas liqudas es ";
onzl_ml(a);
cout<< a <<" mililitros " << endl;
a=3;

cout<<"El resultado de la conversion de " <<a<<" pintas es ";
pint_ml(a);
cout <<a<< " mililitros " << endl;
a=3;

cout<<"El resultado de la conversion de " <<a<<" cuartos es ";
quart_l(a);
cout <<a<< " litros " << endl;
a=3;

cout<<"El resultado de la conversion de " <<a<<" galones es ";
gal_l(a);
cout <<a<< " litros " << endl;
a=3;

cout<<"El resultado de la conversion de " <<a<<" barriles es ";
bbl_l(a);
cout <<a<< " litros " << endl;
a=3;

z = inch(x);
std::cout<< x <<" Inches in centimeters: "<< z <<std::endl;

z = foot(x);
std::cout<< x <<" Foots in centimeters: "<< z <<std::endl;

z = yard(x);
std::cout<< x <<" yards in centimeters: "<< z <<std::endl;

z = chain(x);
std::cout<< x <<" chains in meters: "<< z <<std::endl;

z = mile(x);
std::cout<< x <<" miles in kilometers: "<< z <<std::endl;

z = league(x);
std::cout<< x <<" leagues in kilometers: "<< z <<std::endl;

x = 1.0, z = 0.0;

z = gr(x);
std::cout << "1 grano es " << fixed << setprecision(5) << z << " miligramos" << std::endl;

z = oz(x);
std::cout << "1 onza es " << fixed << setprecision(5) << z << " gramos" << std::endl;

z = lb(x);
std::cout << "1 libra es " << fixed << setprecision(5) << z << " gramos" << std::endl;

z = uston(x);
std::cout << "1 US ton es " << fixed << setprecision(5) << z << " kilogramos" << std::endl;

z = ukton(x);
std::cout << "1 UK ton es "<< fixed << setprecision(5) << z << " kilogramos" << std::endl;

}