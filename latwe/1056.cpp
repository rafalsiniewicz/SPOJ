/*
Przesuñ elementy w tablicy w taki sposób, jak pokazano w przyk³adzie (obróæ ramkê w lewo).

Wejœcie
Najpierw t - liczba testów. Nastêpnie dla ka¿dego testu dwie liczby l i k - odpowiednio liczba wierszy i kolumn w tablicy
- nastêpnie l wierszy po k liczb ca³kowitych, 3 <= l, k <= 100.

Wyjœcie
Dla ka¿dego testu l wierszy po k liczb w zmienionym porz¹dku.

Przyk³ad 1
Wejœcie:
1
3 3
1 2 3
4 5 6
7 8 9

Wyjœcie:
2 3 6
1 5 9
4 7 8
*/
#include<iostream>
using namespace std;
int** obrot(int** tab, int m, int n)
{
    int** tab2 = new int*[m];
    for(int i = 0; i < m; i++)
        tab2[i] = new int[n];
    for(int i = 0; i+1 < n; i++)
    {
        tab2[0][i] = tab[0][i+1];
        tab2[m-1][i+1] = tab[m-1][i];
    }
    for(int i = 0; i+1 < m; i++)
    {
        tab2[i+1][0] = tab[i][0];
        tab2[i][n-1] = tab[i+1][n-1];
    }
    for(int i = 1; i < m -1 ; i++)
        for(int j = 1; j < n-1; j++)
            tab2[i][j] = tab[i][j];
    return tab2;
}
int main()
{
    int t,m,n;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < t; j++)
        {
            cin >> m >> n;
            int** tab = new int*[m];
            for(int i = 0 ; i < m; i++)
                tab[i] = new int[n];
            for(int k = 0; k < m; k++)
                for(int l = 0; l < n; l++)
                    cin >> tab[k][l];
            cout << "Tablica\n";
            for(int k = 0; k < m; k++)
            {
                for(int l = 0; l < n; l++)
                {
                    cout.width(4);
                    if(l == 0)
                        cout << "\r";
                    cout << tab[k][l];
                }
                cout << endl;
            }
            cout << "Obrocona tablica\n";
            for(int k = 0; k < m; k++)
            {
                for(int l = 0; l < n; l++)
                {
                    cout.width(4);
                    if(l == 0)
                        cout << "\r";
                    cout << *(*(obrot(tab,m,n)+k)+l);
                }
                cout << endl;
            }
        }
    }


    return 0;
}
