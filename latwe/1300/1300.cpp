/*
 * main.cpp
 *
 *  Created on: 1 maj 2018
 *      Author: Rafa�
 */
/*
 * Szyfr Cezara jest to szyfr za pomoc�, kt�rego Juliusz Cezar szyfrowa� swoje listy do Cycerona. Jako ciekawostk� mo�na poda�, �e szyfr ten by� podobno u�ywany jeszcze w 1915 roku w armii rosyjskiej, gdy� tylko tak prosty szyfr wydawa� si� zrozumia�y dla sztabowc�w.

Ka�d� liter� tekstu jawnego zamieniamy na liter� przesuni�t� o 3 miejsca w prawo. I tak liter� A szyfrujemy jako liter� D, liter� B jako E itd. W przypadku litery Z wybieramy liter� C. W celu odszyfrowania tekstu powtarzamy operacj� tym razem przesuwaj�c litery o 3 pozycje w lewo.

Input
Na wej�ciu pojawi si� tekst zawieraj�cy jedynie wielkie litery alfabetu �aci�skiego, spacje oraz znaki nowej linii, a jego d�ugo�� nie przekracza 200 znak�w.

Output
Na wyj�ciu otrzymujemy zaszyfrowany tekst u�ywaj�c Szyfru Cezara.
 */
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
void cezar(vector<string>& tekst)
{
    cout << char(char(tekst[0][0])+3) << endl;
    for(int i = 0; i < tekst.size(); i++)
        for(int j = 0; j < tekst[i].size(); j++)
        {
            if( tekst[i][j] != ' ' && char(tekst[i][j]) < 88 )
                tekst[i][j] = char(char(tekst[i][j])+3);
            else if(tekst[i][j] != ' ' && char(tekst[i][j]) > 87)
                tekst[i][j] = char(char(tekst[i][j])-23);
        }
}

int main()
{
    fstream plik;
    string nazwa;
    vector<string> tekst;
    cout << "Podaj nazwe pliku ";
    getline(cin,nazwa);
    plik.open(nazwa);
    while(!plik.good())
    {
        cout << "Blad! Podaj nazwe pliku ";
        getline(cin,nazwa);
    }
    while(!plik.eof())
    {
        string s;
        getline(plik,s);
        tekst.push_back(s);
    }
    cout << "Input:\n";
    for(int i = 0; i < tekst.size(); i++)
        cout << tekst[i] << endl;
    cezar(tekst);
    cout << "Output:\n";
    for(int i = 0; i < tekst.size(); i++)
        cout << tekst[i] << endl;


    return 0;
}


