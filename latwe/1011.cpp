/*
Dla podanego ci�gu d�ugo�ci 2*k, wypisz na standardowe wyj�cie dok�adnie pierwsz� po�ow� ci�gu.

Wej�cie
W pierwszej linijce wej�cia znajduje si� jedna liczba ca�kowita t (1<=t<=100).
Ka�dy wiersz o numerze od 2 do t+1, zawiera ci�g d�ugo�ci 2*k (1<=k<=1000).

Wyj�cie
Dla ka�dego przypadku testowego na wyj�ciu powinien pojawi� si� ci�g b�d�cy pierwsz� po�ow� wczytanego ci�gu.
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
