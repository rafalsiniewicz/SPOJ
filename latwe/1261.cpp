/*
Jan Kowalski musi wpisaæ do systemu szpitalnego dane osobowe pacjenta, oprócz imienia i nazwiska musi równie¿ wpisaæ PESEL pacjenta.
Jakie¿ by³o jego zdziwienie, gdy spostrzeg³, ¿e pewnych pacjentów system nie przyjmowa³ z powodu wadliwego PESELu.

Twoim zadaniem jest sprawdzenie, czy podana liczba 11-cyfrowa jest poprawnym PESELem.

Aby sprawdziæ czy dany PESEL jest prawid³owy nale¿y wykonaæ nastêpuj¹ce dzia³ania:

Pierwsz¹ cyfrê mno¿ymy przez 1,
drug¹ cyfrê mno¿ymy przez 3,
trzeci¹ cyfrê mno¿ymy przez 7,
czwarta cyfrê mno¿ymy przez 9,
pi¹t¹ cyfrê mno¿ymy przez 1,
szóst¹ cyfrê mno¿ymy przez 3,
siódm¹ cyfrê mno¿ymy przez 7,
ósm¹ cyfrê mno¿ymy przez 9,
dziewi¹t¹ cyfrê mno¿ymy przez 1,
dziesi¹t¹ cyfrê mno¿ymy przez 3,
jedenast¹ cyfrê mno¿ymy przez 1.

Tak uzyskane 11 iloczynów dodajemy do siebie. Jeœli ostatnia cyfra tej sumy jest zerem to podany PESEL jest prawid³owy.
Przyk³ad dla numeru PESEL 44051401458

4*1 + 4*3 + 0*7 + 5*9 + 1*1 + 4*3 + 0*7 + 1*9 + 4*1 + 5*3 + 8*1 = 4 + 12 + 0 + 45 + 1 + 12 + 0 + 9 + 4 + 15 + 8 = 110

ród³o: www.wikipedia.pl

Jeœli suma jest wiêksza od zera, wtedy sprawdzamy jej poprawnoœæ. W przeciwnym przypadku nr PESEL jest b³êdny.
Poniewa¿ ostatnia cyfra liczby 110 jest zerem wiêc podany PESEL jest prawid³owy.

Na wejœciu podana jest w pojedyñczej linii iloœæ t<=100 numerów PESEL do sprawdzenia. W kolejnych t liniach s¹ 11-cyfrowe liczby.

Output
W pojedyñczej linii powinna zostaæ wyœwietlona litera D, jeœli numer PESEL jest poprawny lub N, gdy nie.
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




















