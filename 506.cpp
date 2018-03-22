/*Kasia niedawno poznała wszystkie literki w szkole. Z wielką pasją potrafiła całe dnie spędzać na pisaniu długich słów swoim ulubionym flamastrem. Pisała i pisała "tasiemce" tak długo, aż flamaster wypisał się. Kasia posmutniała. Z trudem, ale udało jej się uprosić swoją mamę, aby kupiła jej nowy pisak. Musiała jednak obiecać, że tym razem będzie bardziej oszczędna przy jego używaniu żeby wystarczył na dłużej. Kasia zaczęła zastanawiać się w jaki sposób będzie mogła zrealizować obietnicę daną mamie. 

Postanowiła, że aby zaoszczędzić wkład flamastra będzie wypisywała skróconą wersję wymyślanych wyrazów. Jeśli miała zamiar napisać więcej niż dwie takie same literki obok siebie w wyrazie, to teraz napisze literkę a następnie liczbę, określającą ilość wystąpień tej literki.
Zadanie
Twoim zadaniem jest dla zadanego wyrazu, który wymyśliła Kasia, podanie skróconej wersji tego wyrazu.
Wejście
W pierwszej linijce wejścia znajduje się liczba naturalna C, 1 ≤ C ≤ 50, oznaczająca ilość zestawów danych. W kolejnych C wierszach wejścia znajdują się zestawy danych. Każdy zestaw składa się z niepustego wyrazu złożonego z samych dużych liter alfabetu amerykańskiego. Długość wyrazu nie przekracza 200 znaków.
Wyjście
Dla każdego zestawu danych, dla zadanego wyrazu, na wyjściu powinna znaleźć się jego skrócona wersja.*/
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
template<typename T>
std::string to_string(const T& obj)
{
    std::stringstream ss;
    ss << obj;
    return ss.str();
}
string flam(string& s){
    for(int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}
string licz(string& s){
    int tab[s.length()];
    for( int i = 0; i < s.length(); i++){
        tab[i] = 0;
    }
    char a = 'A';
    for( int i = 0; i < s.length(); i++){
        tab[int(s[i])-65]++;
    }
    for ( int i = 0; i < sizeof(tab); i ++){
            s[i] + to_string(tab[i]);
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    string* tab = new string[n];
    for(int i = 0; i < n; i++){
        cin >> tab[i];
    }
    for(int i = 0; i < n; i++){
        flam(tab[i]);
    }
    for(int i = 0; i < n; i++){
        licz(tab[i]);
    }

    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }
    delete [] tab;
}
