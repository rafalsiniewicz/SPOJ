/*
Dla podanego ci¹gu d³ugoœci 2*k, wypisz na standardowe wyjœcie dok³adnie pierwsz¹ po³owê ci¹gu.

Wejœcie
W pierwszej linijce wejœcia znajduje siê jedna liczba ca³kowita t (1<=t<=100).
Ka¿dy wiersz o numerze od 2 do t+1, zawiera ci¹g d³ugoœci 2*k (1<=k<=1000).

Wyjœcie
Dla ka¿dego przypadku testowego na wyjœciu powinien pojawiæ siê ci¹g bêd¹cy pierwsz¹ po³ow¹ wczytanego ci¹gu.
*/
#include<iostream>
using namespace std;
template <class T>
void polowa(T s)
{
    //int j = 0;
    //while(s[j]!='\0')
        //j++;
    for(int i = 0; i < s.length()/2; i++)
        cout << s[i];
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    string* tab = new string[t];
    char* tab2[t][30];
    for(int i = 0; i < t; i++)
        cin >> tab[i];
    //for(int i = 0; i < t; i++)
        //cin >> tab2[i][30];
    cout << "Output:\n";
    for(int i = 0; i < t; i++)
        polowa(tab[i]);
    //for(int i = 0; i < t; i++)
        //polowa(tab2[i][30]);

    delete [] tab;
    return 0;
}
