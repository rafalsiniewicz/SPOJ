/*
Jan Kowalski musi wpisa� do systemu szpitalnego dane osobowe pacjenta, opr�cz imienia i nazwiska musi r�wnie� wpisa� PESEL pacjenta.
Jakie� by�o jego zdziwienie, gdy spostrzeg�, �e pewnych pacjent�w system nie przyjmowa� z powodu wadliwego PESELu.

Twoim zadaniem jest sprawdzenie, czy podana liczba 11-cyfrowa jest poprawnym PESELem.

Aby sprawdzi� czy dany PESEL jest prawid�owy nale�y wykona� nast�puj�ce dzia�ania:

Pierwsz� cyfr� mno�ymy przez 1,
drug� cyfr� mno�ymy przez 3,
trzeci� cyfr� mno�ymy przez 7,
czwarta cyfr� mno�ymy przez 9,
pi�t� cyfr� mno�ymy przez 1,
sz�st� cyfr� mno�ymy przez 3,
si�dm� cyfr� mno�ymy przez 7,
�sm� cyfr� mno�ymy przez 9,
dziewi�t� cyfr� mno�ymy przez 1,
dziesi�t� cyfr� mno�ymy przez 3,
jedenast� cyfr� mno�ymy przez 1.

Tak uzyskane 11 iloczyn�w dodajemy do siebie. Je�li ostatnia cyfra tej sumy jest zerem to podany PESEL jest prawid�owy.
Przyk�ad dla numeru PESEL 44051401458

4*1 + 4*3 + 0*7 + 5*9 + 1*1 + 4*3 + 0*7 + 1*9 + 4*1 + 5*3 + 8*1 = 4 + 12 + 0 + 45 + 1 + 12 + 0 + 9 + 4 + 15 + 8 = 110

�r�d�o: www.wikipedia.pl

Je�li suma jest wi�ksza od zera, wtedy sprawdzamy jej poprawno��. W przeciwnym przypadku nr PESEL jest b��dny.
Poniewa� ostatnia cyfra liczby 110 jest zerem wi�c podany PESEL jest prawid�owy.

Na wej�ciu podana jest w pojedy�czej linii ilo�� t<=100 numer�w PESEL do sprawdzenia. W kolejnych t liniach s� 11-cyfrowe liczby.

Output
W pojedy�czej linii powinna zosta� wy�wietlona litera D, je�li numer PESEL jest poprawny lub N, gdy nie.
*/
#include<iostream>
#include<vector>
#include<iomanip>
#include<sstream>
using namespace std;
bool czy_poprawny(int s)
{
    ostringstream ss;
    ss << s;
    string str = ss.str();
    if(str[str.size()-1] == '0')
        return true;
    else return false;
}
int suma(vector<string> tab, int i)
{
    int suma;
    suma = int(tab[i][0]) + 3*(int(tab[i][1]) + int(tab[i][5]) + int(tab[i][9]) - 144) + 7*(int(tab[i][2]) + int(tab[i][6]) - 96) + 9*(int(tab[i][3]) + int(tab[i][7]) - 96) + int(tab[i][4]) + int(tab[i][8]) + int(tab[i][10]);
    return suma - 192;
}
int main()
{
    int t;
    cin >> t;
    string n;
    vector<string> tab;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        tab.push_back(n);
    }

    for(int i = 0; i < t; i ++)
    {
        if(czy_poprawny(suma(tab,i)))
            cout << "D" << endl;
        else cout << "N" << endl;
    }
    return 0;
}




















