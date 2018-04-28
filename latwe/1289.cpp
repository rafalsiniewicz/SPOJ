/*
Czêsto siê zdarza, ¿e pisz¹c stronê internetow¹ piszemy tagi HTMLowe w postaci du¿ych, a czasami ma³ych liter.
Powoduje, ¿e kod strony wygl¹da nieestetycznie.
Twoim zadanie jest napisanie programu, który przerobi wszystkie tagi HTMLowe na du¿e litery,
tzn, wszystkie litery pomiêdzy znakami "<" a ">" zamieni na du¿e litery.

Input
Na wejœciu znajduje siê fragment kodu HTMLowego.

Output
Na wyjœciu znajduje siê kod HTML z wejœcia, tyle tylko, ¿e wszystkie tagi HTMLowe sk³adaj¹ siê z du¿ych liter.
*/
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
void Tagi(vector<string>& tab)
{
    for(int i = 0; i < tab.size(); i++)
    {
        for(int j = 0; j < tab[i].size(); j++)
        {
            if(tab[i][j] == '<')
            {
                for(int k = j; tab[i][k] != '>'; k++)
                    tab[i][k] = toupper(tab[i][k]);
            }
        }
    }
}
int main()
{
    fstream plik;
    vector<string> tab;
    int i = 0;
    string s;
    cout << "Podaj nazwe pliku\n";
    cin >> s;
    plik.open(s);
    while(!plik.good())
    {
        cout << "Blad przy otwieraniu pliku\n";
        cout << "Podaj nazwe pliku\n";
        cin >> s;
        plik.open(s);
    }
    while(true)
    {
        getline(plik,s);
        tab.push_back(s);
        i++;
        if(!plik.good())
            break;
    }
    Tagi(tab);
    for(int i = 0; i < tab.size(); i++)
        cout << tab[i] << endl;

    return 0;
}
