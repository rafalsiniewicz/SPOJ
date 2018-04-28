#include<iostream>
using namespace std;
int amount(int a, int b)
{
    while( a != b)
    {
        if(a < b)
        {
            b = b - a;
        }
        if( a > b)
        {
            a = a - b;
        }
    }
    return a + b;
}
int main()
{
    int t;
    cin >> t;
    int* tab = new int[2*t];
    for(int i = 0; i < 2*t; i++)
    {
        cin >> tab[i];
    }
    for(int i = 0; i < 2*t; i+=2)
    {
        cout << amount(tab[i],tab[i+1]) << endl;
    }
    delete [] tab;
    return 0;
}
