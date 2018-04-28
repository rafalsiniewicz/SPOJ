/*
Pan Stefan, powszechnie znany piosenkarz, planuje swoją największą trasę koncertową.
Starannie wybrał miasta, w których chciałby zagrać oraz ustalił kolejnośc ich odwiedzania.
Niestety badania rynku wykazały, że nie we wszystkich miastach zarobi (być może koszty organizacji koncertu będą większe niż zyski z biletów).
Pan Stefan wydrukował już plakaty z listą planowanych koncertów, więc jedyne zmiany, na jakie mógłby sie zgodzić,
to rozpoczęcie trasy być może później niż w pierwszym mieście na liście oraz zakończenie być może wcześniej niż w ostatnim mieście na liście.

Zadanie
Wyznacz, jaki jest największy możliwy zysk Pana Stefana na trasie otrzymanej w opisany powyżej sposób.

Wejście
Pierwsza linia wejścia zawiera jedną liczbę naturalną n (1≤n≤100 000) oznaczającą liczbę miast na trasie.
W każdej z kolejnych n linii znajduje się jedna liczba całkowita z przedziału [-100 000,100 000]
 oznaczająca całkowity zysk lub stratę z organizacji koncertu w danym mieście.

Wyjście
Należy wypisać maksymalny możliwy zysk Pana Stefana.
*/
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int zysk(vector<long int> tab)
{
    int l = 0;
    for(int i = 0; i < tab.size(); i++)
        if(tab[i] > 0)
            l++;
    if(l == tab.size())
        return accumulate(tab.begin(),tab.end(),0);
    l = 0;
    for(int i = 0; i < tab.size(); i++)
        if(tab[i] < 0)
            l++;
    if(l == tab.size())
        return 0;

    int maks = tab[0];
    int k;
    for(int i = 0; i < tab.size(); i++)
        if(tab[i] > maks)
            maks = tab[i];
    for(k = 0; k < tab.size(); k++)
        if(tab[k] == maks)
            break;
    if(k < tab.size())
    {
        int maks2 = tab[k+1];
        for(int j = k+1; j < tab.size()+1; j++)
            if(accumulate(tab.begin()+k+1,tab.begin()+j,0) > maks2)
                maks2 = accumulate(tab.begin()+k+1,tab.begin()+j,0);
        maks = maks + maks2;
    }

    if( k > 0)
    {
        int maks3 = tab[k-1];
        for(int j = 0; j < k; j++)
            if(accumulate(tab.begin(),tab.begin()+j,0) > maks3)
                maks3 = accumulate(tab.begin(),tab.begin()+j,0);
        maks = maks + maks3;
    }

    return maks;
}
int main()
{
    int n, d;
    cin >> n;
    vector<long int> tab;
    for(int i = 0; i < n; i++)
    {
        cin >> d;
        tab.push_back(d);
    }
    cout << "Output:\n";
    cout << zysk(tab);

    return 0;
}
