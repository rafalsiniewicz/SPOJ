#include<iostream>
#include<cstdlib>
#include<ctime>
#include<sstream>
using namespace std;
struct data
{
    char znak;
    int liczba1;
    int liczba2;

};
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
data* zamiana(data tab[],int s, int n)
{
    for( int i = n - s - 1; i < n; i++)
        for( int j = 0; j < s; j++)
        {
            if(tab[i].liczba1 == tab[j].liczba1)
            {
                tab[i].liczba1 = tab[j].liczba2;
            }
            if(tab[i].liczba2 == tab[j].liczba1)
            {
                tab[i].liczba2 = tab[j].liczba2;
            }
        }
    return tab;
}
int main()
{
    srand( time( NULL ) );
    const int n = (rand() % 20 ) + 0 ;
    //int n = 9;
    cout << "Wylosowana liczba " << n << endl;
    data* tab = new data[n];
    int s = 0;
    for( int i = 0; i < n; i++)
    {
        cin >> tab[i].znak;
        if(int(tolower(tab[i].znak)) == 122)
        {
            s++;
        }
        cin >> tab[i].liczba1 >> tab[i].liczba2;
    }
    zamiana(tab,s,n);
    cout << endl;
    for(int i = n - s-1; i < n; i++)
    {
        cout << calc(tab[i].znak,tab[i].liczba1,tab[i].liczba2) << endl;
    }
    return 0;
}
