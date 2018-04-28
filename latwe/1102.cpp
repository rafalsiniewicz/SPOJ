/*
W tablicy n liczb ca³kowitych dodatnich znajdŸ tê, której wartoœæ jest najbli¿sza waroœci œredniej z wszystkich liczb.

Input
Najpierw t < 101 - liczba testów. W kolejnych liniach, dla ka¿dego testu, liczba 0 < n < 100 i n liczb ca³kowitych dodatnich nie wiêkszych ni¿ 100.

Output
Dla ka¿dego testu, w kolejnych liniach, jedna liczba - pierwszy element tablicy, którego wartoœæ jest najbli¿sza wartoœci œredniej.
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
double srednia(int** tab, const int n, const int i)
{
    double s = 0;
    for(int j = 0; j < n; j++)
        s += tab[i][j];
    return s/n;
}
int nearest(int** tab, double s, const int n,const int i)
{
    double mini = abs(tab[i][0]-s);
    int najmniejsza;
    for(int j = 0; j < n; j++)
    {
        if( abs(tab[i][j]- s) < mini)
        {
            mini = abs(tab[i][j]- s);
            najmniejsza = tab[i][j];
        }
    }
    return najmniejsza;
}
int main()
{
    int t;
    int m;
    cin >> t;
    int** tab = new int*[t];
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        m = n;
        if(n > 0 && n < 100)
        {
            tab[i] = new int[n];
            for(int j = 0; j < n; j++)
            {
                cin >> tab[i][j];
            }
        }
        else
        {
            cout << "Blad\n";
            exit(1);
        }
    }
    cout << "Output\n";
    for(int i = 0; i < t; i++)
    {
        cout << nearest(tab,srednia(tab,m,i),m,i) << endl;
    }

    return 0;
}
