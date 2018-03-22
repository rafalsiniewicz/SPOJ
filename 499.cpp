/*Dla danych dwóch liczb naturalnych a i b, wyznaczyć ostatnią cyfrę liczby ab.

Zadanie
Napisz program, który:
wczyta ze standardowego wejścia: podstawę a oraz wykładnik b,
wyznaczy ostatnią cyfrę liczby a^b,
wypisze wynik na standardowe wyjście.
Wejście
W pierwszej linii wejścia znajduje się jedna liczba całkowia D (1≤D≤10), oznaczjąca liczbę przypadków do rozważenia. Opis każdego przypadku podany jest w jednym wierszu, zawierającym dwie liczby naturalne a i b oddzielone pojedynczym odstępem (spacją), takie, że (1 ≤ a,b ≤ 1 000 000 000).

Wyjście
Dla każdego przypadku z wejścia Twój program powinien wypisać (w osobnej linii dla każdego przypadku z wejścia) cyfrę jedności liczby ab zapisanej dziesiętnie.
*/
#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
void Last(int a, int b){
    int w = pow(a,b);
    ostringstream ss;
    ss << w;
    string str = ss.str();
    cout << str.back();
}
int main(){
    int n;
    cout << "Podaj liczbe przypadkow do rozwazenia:\n";
    cin >> n;
    int tab[n][2];
    for ( int i = 0, j = 0 ; i < n; i++)
    {
        cout << "Podaj a i b:\n";
        cin >> tab[i][j] >> tab[i][j+1];
    }
    cout << "Wyniki:\n";
    for ( int i = 0, j = 0; i < n; i++){
        Last(tab[i][j],tab[i][j+1]);
        cout << endl;

    }


    /*string tab[n];
    for ( int i = 0; i < n; i++){
        cout << "Podaj a i b:\n";
        getline(cin,tab[i]);
        cin.get();
    }
    */

return 0;
}
