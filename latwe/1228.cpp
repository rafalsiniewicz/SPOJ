/*
R�wnanie liniowe jest postaci ax+b=c, gdzie a, b, c s� liczbami rzeczywistymi.
Niewiadom� jest x, kt�ra r�wnie� jest liczb� rzeczywist�.
R�wnanie to mo�e mie� jedno rozwi�zanie, brak rozwi�za� lub niesko�czenie wiele rozwi�za�.

Input
W pojedy�czej linii podane s� trzy liczby rzeczywiste zaokr�glone do drugiego miejsca po przecinku.

Output
Rozwi�zaniem problemu jest liczba rzeczywista zaokr�glona do drugiego miejsca po przecinku w przypadku, gdy r�wnanie liniowe ax+b=c posiada rozwi�zanie.
W przypadku braku rozwi�zania powinien zosta� wydrukowany napis BR, a w przypadku niesko�czenie wielu rozwi�za� napis NWR
*/
#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
void ilosc_rozwiazan(double a, double b, double c)
{
    b = b - c;
    if(a != 0)
    {
        printf("%.2f", -b/a);
    }
    else if(a == 0 && b == 0)
        cout << "NWR";
    else if(a == 0 && b != 0)
        cout << "BR";
}
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    ilosc_rozwiazan(a,b,c);

}
