/*
Pewna stacja telewizyjna ogłosiła konkurs.
Aby przyciągnąć widza, konkurs musiał mieć w sobie coś wyjątkowego.
Szefowie stacji długo zastanawiali się nad tym, co to może być, ale im dłużej myśleli, tym bardziej stwierdzali, że wszystko już było.
Wreszcie pewien pracownik wymyślił coś, czego jeszcze z pewnością nie było, a co było (przynajmniej według szefów stacji) genialne!

Pomysł polegał na tym, że w ciągu całego dnia na antenie, co jakiś czas, będą pokazywały się skomplikowane zadania matematyczne.
Będą wśród nich do obliczania rozmaite całki, granice, szeregi itp.
Widzowie będą musieli równania te rozwiązywać, a wyniki przesyłać smsami do siedziby stacji.
Wygrywa oczywiście ten, kto rozwiąże poprawnie najwięcej zadań.

Konkurs miał już startować, kiedy prezes, po zapoznaniu się z zadaniami, stwierdził, że tak być nie może.
Okazało się, że nie umiał on samodzielnie rozwiązać zadań, musiał prosić o pomoc swoich informatyków, którzy też męczyli się z nimi niemiłosiernie.
Stwierdził, że zbyt wiele już zmienić nie można, bo za daleko posunęły się przygotowania,
ale chociaż nagradzać można nie tylko według kryterium liczby rozwiązanych zadań.
Żeby zasady były jak najprostsze, jak najbardziej zrozumiałe dla ludzi, a zarazem promujące humanistów,
prezes zadecydował arbitralnie, że wygra, owszem, osoba, która rozwiąże najwięcej zadań,
ale kolejne miejsca będą zajmowały te osoby, które rozwiążą zadań jak najmniej.

Nie trzeba chyba mówić, co o ignoranckiej decyzji prezesa myśli pomysłodawca konkursu...

Niemniej, co szef, to szef, i będzie właśnie tak, jak on chce. Jedyne, co udało się jeszcze wyprosić to to,
że jeśli więcej niż jedna osoba rozwiąże najwięcej zadań prawidłowo, to zajmą one ex equo pierwsze miejsce.

Znając wyniki po zakończeniu konkursu, przygotuj dla prezesa ranking zawodów, aby mógł się on w nim umiejscowić
(czyli interesuje go tylko liczba punktów poszczególnych miejsc).

Wejście
Pierwsza linia wejścia zawiera liczbę całkowitą D (1 ≤ D ≤ 500) oznaczającą liczbę zestawów danych.
W pierwszej linii zestawu znajduje się jedna liczba całkowita N (1 ≤ N ≤ 200) oznaczająca liczbę uczestników konkursu.
W drugiej linii znajduje się N nieujemnych liczb całkowitych pooddzielanych spacjami,
oznaczających liczby punktów zdobywanych przez kolejnych uczestników konkursu.
Maksymalną liczbą punktów do zdobycia był 1000.

Wyjście
Dla każdego zestawu danych należy wypisać w osobnej linii, uszeregowane w kolejności zgodnej z rankingiem, liczby punktów zdobyte przez zawodników.
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void ranking(vector<int>& tab2)
{
    int s = 0;
    sort(tab2.begin(),tab2.end());
    for(int i = tab2.size()-1; i-1 != 0; i--)
        if(tab2[i] == tab2[i-1])
            s++;
    for(int i = 0; i <= s; i++)
        tab2.insert(tab2.begin()+i,tab2[tab2.size()-1]);
    for(int i = 0; i <= s; i++)
        tab2.pop_back();
}
int main()
{
    int t;
    cin >> t;
    vector <int> tab;
    int n;
    for(int i = 0; i < t; i++)
    {

        vector <int> tab2;
        cin >> n;
        tab.push_back(n);
        for(int j = 0; j < tab[i]; j++)
        {
            cin >> n;
            tab2.push_back(n);
        }
        ranking(tab2);
        for(int k = 0; k < tab2.size(); k++)
            cout << tab2[k] << " ";
        cout << endl;
    }

}
