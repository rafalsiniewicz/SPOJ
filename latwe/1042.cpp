/*
Transponuj podan¹ macierz.



Wejœcie
W pierwszym wierszu znajduj¹ siê dwie liczby m n (1<=m,n<=200) oznaczaj¹ce odpowiednio liczbê wierszy oraz liczbê kolumn.
Nastêpnie nastêpuje m wierszy, w ka¿dym n liczb.

Wyjœcie
Na wyjœciu powinna znaleŸæ siê macierz transponowana do zadanej
*/
#include<iostream>
using namespace std;
/*int** transpozycja(int** tab, int m, int n)
{
    int** tab2 = new int*[n];
    for(int i = 0; i < n; i++)
        tab2[i] = new int[m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            tab2[i][j] = tab[j][i];
        }
    }
    return tab2;
}
*/
int main()
{
    int m, n;
    cin >> m >> n;
    int** tab = new int*[m];
    for(int i = 0; i < m; i++)
        tab[i] = new int[n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> tab[i][j];
    cout << "Oto utworzona macierz\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout.width(3);
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Macierz po transpozycji\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout.width(3);
            cout << tab[j][i] << " ";
        }
        cout << endl;
    }
    /*for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << *(*(transpozycja(tab,m,n)+i)+j) << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < m; i++)
        delete [] tab[i];
    delete [] tab;*/
    return 0;
}
