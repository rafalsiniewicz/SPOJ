/*
Koło Młodych Miłośników Łamania Szyfrów pracuje nad odszyfrowaniem pewnego starożytnego manuskryptu.
Jądrem systemu ma być samouczący się analizator tekstu, a jego pierwszym modułem ma być "zliczacz liter", którego opracowanie powierzono Tobie.

Opracuj program ZLI, który:
- wczyta ze standardowego wejścia tekst do analizy,
- dla każdej litery obliczy liczbę jej wystąpień w tekście,
- wypisze wynik na standardowe wyjście.

Wejście
W pierwszym wierszu N - liczba wierszy tekstu do analizy (N ≤ 150).
W każdym z następujących N wierszy ciąg złożony z maksymalnie 200 znaków spośród małych i wielkich liter alfabetu łacińskiego ('a'..'z', 'A'..'Z')
oraz spacji.

Wyjście
W kolejnych wierszach litery od 'a' do 'z' i od 'A' do 'Z' w tej kolejności, a po każdej literze spacja i liczba wskazująca,
ile razy ta litera wystąpiła w tekście.

Uwaga: Pomiń litery, które nie występują w tekście.
*/
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<cstdlib>
using namespace std;
void zliczanie(vector<string> vec)
{

    int* tab = new int[50];
    for(int i = 0; i < 52; i ++)
        tab[i] = 0;
    for(int i = 0; i < vec.size(); i++)
        for(int k = 97, l = 65; k < 123, l < 91; k++, l++)
            for(int j = 0; j < vec[i].size(); j++)
            {
                if(int(vec[i][j]) == k)
                    tab[k-97]++;
                else if(int(vec[i][j]) == l)
                    tab[l-39]++;
            }
    for(int i = 0; i < 52; i ++)
    {
        if(tab[i] != 0 && i < 26)
            cout << char(i+97) << " " << tab[i] << endl;
        else if(tab[i] != 0)
            cout << char(i+39) << " " << tab[i] << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    char tab[t][50];
    vector<string> vec;
    string s;
    cin.get();
    for(int i = 0; i < t; i++)
    {
        getline(cin,s);
        vec.push_back(s);
    }
    zliczanie(vec);
}
