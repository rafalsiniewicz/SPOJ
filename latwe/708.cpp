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
