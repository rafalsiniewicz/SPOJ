#include<iostream>
#include<cstdlib>
#include<ctime>
#include<sstream>
using namespace std;
int calc(const char znak, const int liczba1, const int liczba2)
{
    switch(znak)
    {
    case '+':
        return liczba1 + liczba2;
    case '-':
        return liczba1 - liczba2;
    case '*':
        return liczba1 * liczba2;
    case '/':
        return liczba1 / liczba2;
    case '%':
        return liczba1 % liczba2;

    }
}
int main()
{
    srand( time( NULL ) );
    const int n = (rand() % 20 ) + 0 ;
    cout << "Wylosowana liczba " << n << endl;
    char* tab = new char[n];
    int* tab2 = new int[2*n];
    for(int i = 0, j = 0; i < 2*n, j < n; i+=2, j++)
    {
        cin >> tab[j] >> tab2[i] >> tab2[i+1];
    }
    cout << endl;
    for(int i = 0, j = 0; i < 2*n, j < n; i+=2, j++)
    {
        cout << calc(tab[j],tab2[i],tab2[i+1]) << endl;
    }

    delete [] tab;
    delete [] tab2;

    return 0;
}
