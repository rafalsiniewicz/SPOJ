/*ETI06F1 - Pole pewnego koła
Wyznacz pole koła, którego okrąg jest przecięciem dwóch identycznych sfer o promieniu r. 
Odległość pomiędzy środkami sfer wynosi d. Wartości r oraz d podane na wejściu są liczbami zmiennoprzecinkowymi. 
Można założyć, że 1 <= d < 2 * r <= 2000.

Wejście
Na wejściu podane są dwie liczby zmiennoprzecinkowe r d oddzielone spacją, oznaczające odpowiednio promień sfery i 
odległość między środkami sfer.

Wyjście
Należy wypisać pojedynczą liczbę zmiennoprzecinkową S oznaczającą pole koła. Dopuszczalny błąd wyniku wynosi 0.01.

Uwaga. W roli separatora dziesiętnego należy używać kropki (nie: przecinka). 
Można przyjąć, że stosunek obwodu koła do jego średnicy wynosi 3.141592654.

Liczba punktów za zadanie jest równa liczbie poprawnie rozwiązanych testów / 5. Testów jest 20.*/
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdio>
using namespace std;
double area(const double& r,const double& d){
    const double pi = 3.141592654;
    double p;
    p = pi*(r*r-(d/2)*(d/2));
    return p;
}
int main(){
    double r,d;
    cin >> r >> d;
    printf("%.2f",area(r,d));

    return 0;
}
