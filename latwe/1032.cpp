/*
Wypisz wszystkie liczby ai podzielne przez x i niepodzielne przez y, gdzie 1 < ai < n < 100000.

Wejœcie
Najpierw w oddzielnej linii t liczba przypadków testowych nastêpnie w kolejnych t liniach liczby n x y.

Wyjœcie
W kolejnych t liniach oddzielone pojedynczym odstêpem liczby spe³niaj¹ce warunki zadania wypisane od najmniejszej do najwiêkszej.
*/
#include<iostream>
using namespace std;
int* podzielne(int n, int x, int y)
{
    int* tab = new int[n];
    int j = 1;
    for(int i = 2; i < n; i++)
    {
        if(i%x == 0 && i%y != 0)
        {
            tab[j] = i;
            j++;
        }
    }
    tab[0] = j-1;
    return tab;
}
int main()
{
    int t;
    cin >> t;
    int** tab = new int*[t];
    for(int i = 0; i < t; i++)
        tab[i] = new int[3];
    int* tab2 = new int[t];
    for(int i = 0; i < t; i++)
        cin >> tab[i][0] >> tab[i][1] >> tab[i][2];
    for(int i = 0; i < t; i++)
        tab2[i] = *(podzielne(tab[i][0],tab[i][1],tab[i][2]));
    cout << "Output\n";
    for(int i = 0; i < t; i++)
    {
        if(tab2[i] > 0)
        {
            for(int j = 1; j < tab2[i]+1; j++)
            {
                cout << *(podzielne(tab[i][0],tab[i][1],tab[i][2])+j) << " ";
            }
        }
        else cout << "Brak";
        cout << endl;
    }
    /*int* tab = new int[3*t];
    int* tab2 = new int[t];
    for(int i = 0; i < 3*t; i++)
        cin >> tab[i];
    for(int i = 0, k = 0; i < t, k < 3*t; i++, k+=3)
        tab2[i] = *(podzielne(tab[k],tab[k+1],tab[k+2]));
    cout << "Output\n";
    for(int i = 0, j = 0; i < t*3, j < t; i+=3, j++ )
    {
        if(tab2[j] > 0)
        {
            for(int k = 1; k < tab2[j]+1; k++)
            {
                cout << *(podzielne(tab[i],tab[i+1],tab[i+2])+k) << " ";
            }
        }
        else cout << "Brak";
        cout << endl;
    }
    */
    delete [] tab2;
    for(int i = 0; i < t; i++)
        delete [] tab[i];
    delete [] tab;
}
