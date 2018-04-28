#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand( time( NULL ) );
    int n = (rand() % 10 ) + 0 ;
    cout << "Wylosowana liczba " << n << endl;
    int* tab = new int[n];
    int sum = 0;
    for(int i = 0; i < n; i++ )
    {
        cin >> tab[i];
    }
    cout << endl;
    for(int i = 0; i < n; i++ )
    {
        sum += tab[i];
        cout << sum << endl;
    }
    delete [] tab;
    return 0;
}
