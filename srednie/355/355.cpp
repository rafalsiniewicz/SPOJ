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
using namespace std;
vector<double> pole_figury(vector<vector<double>> dlugosci, vector<vector<double>> tab)
{
    //Ze wzoru Herona na pole trojkata
    vector<double> pole;
    int k = 0;
    double p; // p- polowa obwodu, P-pole
    for(int i = 0; i < dlugosci[0].size(); )
    {
        double P = 0;
        if(k == 0)
        {
            int q = i;
            for(int j = i; j < q + tab[k].size()/2-1; j++, i++)
            {
                p = (dlugosci[0][i] + dlugosci[1][j] + dlugosci[1][j+1])/2;
                P = P+sqrt(p*(p-dlugosci[0][i])*(p-dlugosci[1][j])*(p-dlugosci[1][j+1]));
            }
        }
        else
        {
            int q = i+k;
            for(int j = i+k; j < q + tab[k].size()/2-1; j++, i++)
            {
                p = (dlugosci[0][i] + dlugosci[1][j] + dlugosci[1][j+1])/2;
                P = P+sqrt(p*(p-dlugosci[0][i])*(p-dlugosci[1][j])*(p-dlugosci[1][j+1]));
            }
        }
        pole.push_back(P);
        k++;
    }
    return pole;
}
vector<vector<double>> string_to_double(vector<string> tab)
{
    vector< vector<double> > tab2;
    for(int j = 1; j < 2*(int(tab[0][0])-48)+1; j++)
    {
        vector<double> tab3;
        for(int i = 0; i < tab[j].size(); i++)
        {
            if(tab[j][i] != '\n' && tab[j][i] != ' ')
                tab3.push_back(double(tab[j][i])-48);
        }
        tab2.push_back(tab3);
    }
    return tab2;
}
vector<double> srodek(vector< vector<double> > tab, int (*f)(vector<double>, int), int (*g)(vector<double>, int))
{
    vector<double> tab2;
    for(int i = 0; i < tab.size(); i++)
    {
        tab2.push_back((double(f(tab[i], 0)) + double(g(tab[i], 0)))/2);
        tab2.push_back((double(f(tab[i], 1)) + double(g(tab[i], 1)))/2);
    }
    return tab2;
}
int minimum(vector<double> tab, int p)
{
    int mini = tab[0];
    for(int i = p; i < tab.size(); i+=2)
        if(tab[i] < mini)
            mini = tab[i];
    return mini;
}
int maksimum(vector<double> tab, int p)
{
    int maksi = tab[0];
    for(int i = p; i < tab.size(); i+=2)
        if(tab[i] > maksi)
            maksi = tab[i];
    return maksi;
}
vector<vector<double>> dlugosc_boku(vector<vector<double>> tab, vector<double> tab2)
{
    vector<vector<double>> dlugosci;
    vector<double> miedzy_srodkiem;
    vector<double> miedzy_wierzcholkami;
    for(int i = 0, k = 0; i < tab2.size(); i+=2, k++)
        for(int j = 0; j < tab[k].size(); j+=2)
            miedzy_srodkiem.push_back(sqrt(pow(tab2[i]-tab[k][j],2)+pow(tab2[i+1]-tab[k][j+1],2)));

    for(int i = 0; i < tab.size(); i++)
        for(int j = 0; j < tab[i].size()-2; j+=2)
            miedzy_wierzcholkami.push_back(sqrt(pow(tab[i][j]-tab[i][j+2],2)+pow(tab[i][j+1]-tab[i][j+3],2)));

    dlugosci.push_back(miedzy_wierzcholkami);
    dlugosci.push_back(miedzy_srodkiem);

    return dlugosci;
}
/*void puste(vector<string>& tab)
{
    for(int i = 0; i < 3*int(tab[0][0]-48); i++)
        if(tab[i].empty())
        {
            cout << tab[i].size();
            tab[i].erase(tab[i].begin(),tab[i].end());
        }
    for(int i = 0; i < tab.size(); i++)
        cout << tab[i] << endl;
}*/
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
