/*
 * main.cpp
 *
 *  Created on: 1 maj 2018
 *      Author: Rafa³
 */
/*
 * Szyfr Cezara jest to szyfr za pomoc¹, którego Juliusz Cezar szyfrowa³ swoje listy do Cycerona. Jako ciekawostkê mo¿na podaæ, ¿e szyfr ten by³ podobno u¿ywany jeszcze w 1915 roku w armii rosyjskiej, gdy¿ tylko tak prosty szyfr wydawa³ siê zrozumia³y dla sztabowców.

Ka¿d¹ literê tekstu jawnego zamieniamy na literê przesuniêt¹ o 3 miejsca w prawo. I tak literê A szyfrujemy jako literê D, literê B jako E itd. W przypadku litery Z wybieramy literê C. W celu odszyfrowania tekstu powtarzamy operacjê tym razem przesuwaj¹c litery o 3 pozycje w lewo.

Input
Na wejœciu pojawi siê tekst zawieraj¹cy jedynie wielkie litery alfabetu ³aciñskiego, spacje oraz znaki nowej linii, a jego d³ugoœæ nie przekracza 200 znaków.

Output
Na wyjœciu otrzymujemy zaszyfrowany tekst u¿ywaj¹c Szyfru Cezara.
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


