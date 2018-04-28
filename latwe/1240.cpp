/*
Input
Najpierw zostaje podana liczba t (1 < t ≤ 100) wykonywanych testów.
W każdej następnej linii podawane są współrzędne trzech punktów będącymi liczbami całkowitymi z przedziału [-1000, 1000].
Kolejne współrzędne oddzielone są znakiem tabulacji.

Output
Jako wydruk otrzymujemy słowo TAK, gdy podane trzy punkty są współliniowe albo słowo NIE, gdy nie są współliniowe.
Każda odpowiedź zapisywana jest w osobnej linii.
*/
#include<iostream>
#include<vector>
using namespace std;
bool wspoliniowe(vector<double> tab)
{
    if(tab[0] == tab[2] && tab[2] == tab[4] && tab[0] == tab[4])
    {
        return true;
    }
    else if(tab[1] == tab[3] && tab[1] == tab[5] && tab[3] == tab[5])
    {
        return true;
    }
    else if(((tab[3]-tab[1])/(tab[2]-tab[0])) == ((tab[5]-tab[3])/(tab[4]-tab[2])))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t, n;
    cin >> t;
    string* tab2 = new string[t];
    for(int i = 0; i < t; i++)
    {
        vector<double> tab;
        for(int j = 0; j < 6; j++)
        {
            cin >> n;
            tab.push_back(n);
        }
        if(wspoliniowe(tab) == true)
            tab2[i] = "TAK";
        else tab2[i] = "NIE";
    }
    cout << "Output:\n";
    for(int i = 0; i < t; i++)
        cout << tab2[i] << endl;
    delete [] tab2;
    return 0;
}
