/*
Bajtelek syn króla Bajtazara bardzo lubi uk³adaæ zagadki i pastwiæ siê nad drukark¹ swojego ojca.
Dzisiaj postanowi³ po³¹czyæ te dwa zainteresowania. Przygotowa³ seriê rysunków na komputerze i wydrukowa³ je.
Jego tata zadzwoni³ ze szczytu Unii Bajtockiej i koniecznie chcia³ siê dowiedzieæ co jego syn namalowa³ i ile posz³o na to cennego tuszu.
Bajtelek poda³ taki opis swoich rysunków:
- wszystkie sk³adaj¹ siê z dwóch obszarów, czarnego otoczonego w ca³oœci szarym.
- brzeg czarnego i szarego obszaru jest ³aman¹ zamkniêt¹ bez samoprzeciêæ
nastepnie poda³ opis dwóch ³amanych dla ka¿dego rysunku.

Bajtazar uzna³, ¿e masz za ma³o pracy podczas szczytu i zleci³ ci napisanie programu, ktory obliczy iloœæ zu¿ytego tuszu.
Na zakolorowanie jednego centymetra kwadratowego na czarno zu¿ywa siê dziesiêæ bitokul tuszu,
a na zakolorowanie jednego centymetra kwadratowego na szaro potrzeba szeœæ bitokul tuszu.
Bitokula jest tak dobran¹ jednostk¹, ¿e iloœæ zu¿ytego tuszu zawsze wychodzi ca³kowita.

Wejœcie
W pierwszym wierszu jest podana jedna liczba ca³kowita n - liczba rysunków.
W 2n kolejnych wierszach s¹ opisy brzegów czarnego i szarego obszaru
Opis brzegu czarnego obszaru sk³ada sie z ci¹gu par liczb ca³kowitych -100000 <= x , y <=100000 - wspó³rzêdnych kolejnych wierzcho³ków ³amanej (w cm).
Opis zaczyna siê i koñczy t¹ sam¹ par¹ liczb. Opis zewnêtrznego brzegu szarego obszaru jest analogiczny.
£amana otaczaj¹ca szary obszar znajduje siê zawsze na zewn¹trz ³amanej otaczaj¹cej czarny obszar.
Wierzcho³ki podane s¹ w takiej kolejnoœci, ¿e id¹c wzd³u¿ ³amanej wed³ug opisu mamy ciemniejszy obszar po lewej stronie.
Po ka¿dym teœcie nastêpuje pusta linia.

Wyjœcie
Wypisz n liczb ca³kowitych równych iloœci zu¿ytego tuszu w bitokulach.
*/
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<cmath>
#include"355_funkcje.h"
using namespace std;
int main()
{
    const int czarny = 10;
    const int szary = 6;
    string nazwa;
    fstream plik;
    vector<string> tab;
    int i = 0;
    cout << "Podaj nazwe pliku: ";
    cin >> nazwa;
    plik.open(nazwa);
    while(!plik.good())
    {
        cout << "Blad! Podaj nazwe pliku: ";
        cin >> nazwa;
        plik.open(nazwa);
    }
    while(plik.good())
    {
        string s;
        getline(plik,s);
        if(!s.empty())
            tab.push_back(s);
    }
    cout << "Input:\n";
    for(int i = 0; i < tab.size(); i++)
        cout << tab[i] << endl;
    cout << endl;
    srodek(string_to_double(tab),minimum,maksimum);
    dlugosc_boku(string_to_double(tab), srodek(string_to_double(tab),minimum,maksimum));
    cout << "Output:\n";
    vector<double> wynik = pole_figury(dlugosc_boku(string_to_double(tab), srodek(string_to_double(tab),minimum,maksimum)),string_to_double(tab));
    for(int i = 0; i < string_to_double(tab).size(); i+=2)
    {
        cout << wynik[i]*czarny + szary*(wynik[i+1]-wynik[i]) << endl;
    }
    return 0;
}
