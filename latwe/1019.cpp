/*
Zadanie polega na zamianie podanej liczby n, która jest w systemie dziesi¹tkowym, na liczbê w systemie szesnastkowym (cyfry:0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F)
 i jedenastkowym (cyfry:0,1,2,3,4,5,6,7,8,9,A).

Wejœcie
W pierwszym wierszu wejœcia znajduje siê dok³adnie jedna t (1<=t<=10000) oznaczaj¹ca liczbê zestawów danych.
W ka¿dym wierszu od 2 do t+1 znajduje siê dok³adnie jedna liczba ca³kowita n (1<=n<=106).

Wyjœcie
W ka¿dym wierszu wyjœcia powinny znaleŸæ siê dok³adnie dwie liczby, pierwsza - oznaczaj¹ca podana liczbê w systemie szesnastkowym,
druga - oznaczaj¹ca podana liczbê w systemie jedenastkowym.
*/
#include<iostream>
#include<sstream>
using namespace std;
void szesnastkowy(int liczba)
{

    int i = 0, k = 0;
    int liczba2 = liczba;
    while(liczba2 > 16)
    {
        liczba2 = liczba2 / 16;
        k++;
    }
    int tab[k+1];
    while(liczba > 16)
    {
        tab[i] = liczba % 16;
        liczba = liczba / 16;
        i++;
    }
    tab[i] = liczba;
    for(int j = i; j >= 0; j--)
    {
        switch(tab[j])
        {
        case 10:
            cout << "A";
            break;
        case 11:
            cout << "B";
            break;
        case 12:
            cout << "C";
            break;
        case 13:
            cout << "D";
            break;
        case 14:
            cout << "E";
            break;
        case 15:
            cout << "F";
            break;
        default:
            cout << tab[j];
            break;
        }
    }
}
void jedenastkowy(int liczba)
{

    int i = 0;
    int k = 0;
    int liczba2 = liczba;
    while(liczba2 > 11)
    {
        liczba2 = liczba2 / 11;
        k++;
    }
    int tab[k+1];
    while(liczba > 11)
    {
        tab[i] = liczba % 11;
        liczba = liczba / 11;
        i++;
    }
    tab[i] = liczba;
    for(int j = i; j >= 0; j--)
    {
        switch(tab[j])
        {
        case 10:
            cout << "A";
            break;
        default:
            cout << tab[j];
            break;
        }
    }
}
int main()
{
    cout << "1000 dziesietnie to ";
    szesnastkowy(1000);
    cout << " szesnastkowo" << endl;
    cout << "541 dziesietnie to ";
    szesnastkowy(541);
    cout << " szesnastkowo" << endl;
    cout << "541 dziesietnie to ";
    jedenastkowy(541);
    cout << " jedenastkowo";

    return 0;
}
