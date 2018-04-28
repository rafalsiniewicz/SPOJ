/*
Cz�sto si� zdarza, �e pisz�c stron� internetow� piszemy tagi HTMLowe w postaci du�ych, a czasami ma�ych liter.
Powoduje, �e kod strony wygl�da nieestetycznie.
Twoim zadanie jest napisanie programu, kt�ry przerobi wszystkie tagi HTMLowe na du�e litery,
tzn, wszystkie litery pomi�dzy znakami "<" a ">" zamieni na du�e litery.

Input
Na wej�ciu znajduje si� fragment kodu HTMLowego.

Output
Na wyj�ciu znajduje si� kod HTML z wej�cia, tyle tylko, �e wszystkie tagi HTMLowe sk�adaj� si� z du�ych liter.
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
