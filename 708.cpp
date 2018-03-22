/*Dany jest ciąg xn określony rekurencyjnie:
x0=s, 
xn+1=3*xn+1, jeśli xn jest nieparzyste i 
xn+1=xn/2, jeśli xn jest parzyste

Napisz program, który oblicza pierwsze takie n, dla którego xn=1.

Wejście
 

W pierwszej linii liczba testów t. W każdym z t kolejnych wierszy jedna liczba całkowita s, 1 <= s <= 10000.

Wyjście
W każdej linii jedna liczba - obliczona wartość n.*/
#include<iostream>
using namespace std;
int x = 0;
int f(int s)
{

    if(s == 1)
    {
        return x;
    }
    if( s % 2 != 0)
    {
        while(s != 1)
        {
            x++;
            return f(3*s+1);
        }
    }
    if( s % 2 == 0)
    {
        while(s != 1)
        {
            x++;
            return f(s/2);
        }

    }
}
int main()
{
    int t;
    cin >> t;
    int* tab = new int[t];
    for(int i = 0; i < t; i ++)
    {
        cin >> tab[i];
    }
    for(int i = 0; i < t; i ++)
    {
        cout << f(tab[i]) << endl;
        x = 0;
    }
    delete [] tab;
}
