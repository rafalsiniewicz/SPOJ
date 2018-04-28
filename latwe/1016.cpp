/*
Poci¹g z miejscowoœci A do B jedzie z prêdkoœci¹ v1, a wraca z miejscowoœci B do A z prêdkoœci¹ v2.
Obliczyæ œredni¹ prêdkoœæ na ca³ej trasie.
Uwaga: Dane wejœciowe bêd¹ tak dobrane, aby wynik by³ liczba ca³kowit¹.

Wejœcie
Na wejœciu znajduje siê dok³adnie jedna liczba ca³kowita t (1<=t<=1000) oznaczaj¹ca liczbê zestawów danych.
W wierszach od 2 do t+1 znajduj¹ siê dwie liczby ca³kowite oddzielone spacja v1 oraz v2 (1<=v1,v2<=10000).

Wyjœcie
Wyjœcie sk³ada siê z t wierszy.
W ka¿dym wierszu powinna znaleŸæ siê dok³adnie jedna liczba ca³kowita oznaczaj¹ca œredni¹ prêdkoœæ.
*/
#include<iostream>
#include<cstdlib>
using namespace std;
int srednia(int v1, int v2)
{
    return (2*v1*v2)/(v1+v2);
}
int main()
{
    int t;
    cin >> t;
    int* tab = new int[2*t];
    if (!tab)
    {
        cout << "Pamiec nie przydzielona" ;
        exit(1);
        return EXIT_FAILURE;
    }
    for(int i = 0; i < 2*t; i+=2)
        cin >> tab[i] >> tab[i+1];
    for(int i = 0; i < 2*t; i+=2)
        cout << srednia(tab[i],tab[i+1]) << endl;

    delete [] tab;
    return 0;
}
