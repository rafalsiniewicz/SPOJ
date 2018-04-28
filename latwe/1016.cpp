/*
Poci�g z miejscowo�ci A do B jedzie z pr�dko�ci� v1, a wraca z miejscowo�ci B do A z pr�dko�ci� v2.
Obliczy� �redni� pr�dko�� na ca�ej trasie.
Uwaga: Dane wej�ciowe b�d� tak dobrane, aby wynik by� liczba ca�kowit�.

Wej�cie
Na wej�ciu znajduje si� dok�adnie jedna liczba ca�kowita t (1<=t<=1000) oznaczaj�ca liczb� zestaw�w danych.
W wierszach od 2 do t+1 znajduj� si� dwie liczby ca�kowite oddzielone spacja v1 oraz v2 (1<=v1,v2<=10000).

Wyj�cie
Wyj�cie sk�ada si� z t wierszy.
W ka�dym wierszu powinna znale�� si� dok�adnie jedna liczba ca�kowita oznaczaj�ca �redni� pr�dko��.
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
