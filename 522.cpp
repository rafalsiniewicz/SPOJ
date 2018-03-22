/*Treść 
W ostatnim czasie przedszkole opanowała nietypowa epidemia. Nie dotknęła ona przedszkolaków, tylko panie opiekujące się dziećmi. 
Pośród nielicznych zdrowych pozostała, ulubiona przez wszystkie maluchy, pani Agnieszka. 
Postanowiła osłodzić podopiecznym nieobecność wychowawczyń i rozdać im trochę cukierków. 
Przedszkolanka wie, że następnego dnia będzie się zajmowała jedną z dwóch grup. 
Zna też liczbę dzieci w każdej z nich. 
Chce teraz dobrać taką liczbę słodyczy, by można nią było obdarować wszystkie dzieci, niezależnie od grupy, którą będzie prowadziła. 
Musi przy tym spełnić kilka warunków. 
Po pierwsze, każdy z przedszkolaków powinien otrzymać jednakową (oczywiście niezerową) liczbę cukierków. 
Po drugie, liczba słodyczy powinna być taka, by można było rozdać je wszystkie. 
Po trzecie, ponieważ budżet przedszkola jest ograniczony, 
pani Agnieszka musi kupić minimalną liczbę cukierków spełniającą dwa wcześniejsze warunki. 
Pomóż sympatycznej przedszkolance i napisz program, który obliczy, ile cukierków powinna kupić. 


Wejście 
Dane podawane są na standardowe wejście. W pierwszym wierszu podana jest liczba N (1<=N<=20) zestawów danych. 
Dalej podawane są zestawy danych zgodnie z poniższym opisem: 

Jeden zestaw danych 
W pierwszym i jedynym wierszu zestawu danych znajdują się dwie liczby całkowite a i b (10<=a,b<=30), 
oddzielone pojedynczą spacją, oznaczające odpowiednio liczbę przedszkolaków w grupach, 
z których jedna zostanie przydzielona pani Agnieszce. 

Wyjście 
Wyniki programu powinny być wypisywane na standardowe wyjście. 
W kolejnych wierszach należy podać odpowiedzi obliczone dla kolejnych zestawów danych. 
Wynikiem dla jednego zestawu jest liczba cukierków, jaką powinna zakupić przedszkolanka. 
*/
#include <iostream>
#include <cstdlib>
#include <stdafx.h>
#include <windows.h>
using namespace std;
int nww(int a, int b){
    int iloczyn = a*b;
    do
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    while(a!=b);
    return iloczyn/a;
}
int main()
{
    int a, b, n;
    cin >> n;
    int **tab = new int*[2];
    for ( int i =0; i < n; i++){
        tab[i] = new int[n];
    }
    for( int i = 0; i < n; i++){
                cin >> tab[i][0] >> tab[i][1];
                cout << "\b";

    }
    for( int i = 0; i < n; i++){
            for(int j = 0; j < 1; j++){
                cout <<  nww(tab[i][j],tab[i][j+1]) << endl;
            }
    }
    for ( int i =0; i < n; i++){
        delete [] tab[i];
    }




    return 0;
}
