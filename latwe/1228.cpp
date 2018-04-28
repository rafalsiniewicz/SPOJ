/*
Równanie liniowe jest postaci ax+b=c, gdzie a, b, c s¹ liczbami rzeczywistymi.
Niewiadom¹ jest x, która równie¿ jest liczb¹ rzeczywist¹.
Równanie to mo¿e mieæ jedno rozwi¹zanie, brak rozwi¹zañ lub nieskoñczenie wiele rozwi¹zañ.

Input
W pojedyñczej linii podane s¹ trzy liczby rzeczywiste zaokr¹glone do drugiego miejsca po przecinku.

Output
Rozwi¹zaniem problemu jest liczba rzeczywista zaokr¹glona do drugiego miejsca po przecinku w przypadku, gdy równanie liniowe ax+b=c posiada rozwi¹zanie.
W przypadku braku rozwi¹zania powinien zostaæ wydrukowany napis BR, a w przypadku nieskoñczenie wielu rozwi¹zañ napis NWR
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
