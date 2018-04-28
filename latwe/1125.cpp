/*
Dla zadanej liczby n wyznaczyæ jej ostatni¹ cyfrê.
Zadanie jest oczywiœcie stosunkowo proste, z tym ¿e jedynym dostêpnym jêzykiem jest brainf**k :D
Tutaj znajduj¹ siê podstawowe informacje dotycz¹ce tego jêzyka.

Wejœcie
Wejœcie sk³ada siê tylko z jednego wiersza, w którym znajduje siê dok³adnie jedna liczba ca³kowita n (1<=n<=2000000000),
a po niej znak koñca linii: '\n' (ASCII 10).

Wyjœcie
Na wyjœciu ma siê znaleŸæ dok³adnie jedna liczba ca³kowita oznaczaj¹ca ostatni¹ cyfrê liczby n.
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
