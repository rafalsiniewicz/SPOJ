/*
Dla zadanej liczby n wyznaczy� jej ostatni� cyfr�.
Zadanie jest oczywi�cie stosunkowo proste, z tym �e jedynym dost�pnym j�zykiem jest brainf**k :D
Tutaj znajduj� si� podstawowe informacje dotycz�ce tego j�zyka.

Wej�cie
Wej�cie sk�ada si� tylko z jednego wiersza, w kt�rym znajduje si� dok�adnie jedna liczba ca�kowita n (1<=n<=2000000000),
a po niej znak ko�ca linii: '\n' (ASCII 10).

Wyj�cie
Na wyj�ciu ma si� znale�� dok�adnie jedna liczba ca�kowita oznaczaj�ca ostatni� cyfr� liczby n.
*/
#include<iostream>
#include<sstream>
using namespace std;
char ostatnia(int n)
{
    ostringstream ss;
    ss << n;
    string str = ss.str();
    return str[str.length()-1];
}
int main()
{
    int n;
    cin >> n;
    cout << ostatnia(n);
    return 0;
}
