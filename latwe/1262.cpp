/*
Przesuñ elementy tablicy cyklicznie w lewo o zadan¹ liczbê miejsc.

Input
Najpierw dwie liczby n i k takie, ¿e 1 < k < n < 10000, a nastêpnie w kolejnym wierszu n liczb.

Output
W jednym wierszu n liczb w zmienionym porz¹dku (przesuniêtych cyklicznie o k miejsc).
*/
#include<iostream>
#include<vector>
using namespace std;
void przesun_lewo(vector<int>& tab,int k)
{
    vector<int> vec = tab;
    int p = k % tab.size();
    for(int i = 0; i < tab.size(); i++)
    {
        if(i + k <tab.size())
            vec[i] = tab[i+k];
        else vec[i] = tab[i+k-tab.size()];
    }
   tab = vec;
}
int main()
{
    int n,k, liczba;
    cin >> n >> k;
    vector<int> tab;
    for(int i = 0; i < n; i++)
    {
        cin >> liczba;
        tab.push_back(liczba);
    }
    przesun_lewo(tab,k);
    for(int i = 0; i < n; i++)
        cout << tab[i] << " ";

    return 0;
}

