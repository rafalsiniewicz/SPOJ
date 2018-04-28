#include<iostream>
using namespace std;
long double dwumian(int a, int b, double (f)(int)){
    return f(a)/(f(a-b)*f(b));
}
double silnia(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else return n*silnia(n-1);
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
        cout << dwumian(tab[i],tab[i+1],silnia) << endl;
    }

    delete [] tab;

    return 0;
}
