#include<iostream>
#define SECONDS_IN_DAY 86400
using namespace std;
int ilosc(int tab[], int liczba_ciastek, int uczestnicy){
    int suma = 0;
    int liczba;
    for ( int i = 0; i < uczestnicy; i++ ){
        suma += SECONDS_IN_DAY/tab[i];
        }
    if(!(suma%liczba_ciastek)){
        return suma/liczba_ciastek;
    }
    else return suma/liczba_ciastek +1;
}
int main()
{
    int t;
    cin >> t;
    int uczestnicy, liczba_ciastek;

    for(int i = 0; i < t; i++){
            cin >> uczestnicy >> liczba_ciastek;
            int tab[uczestnicy];
            for(int j = 0; j < uczestnicy; j++){
                cin >> tab[j];
            }
        cout << ilosc(tab, liczba_ciastek, uczestnicy) << endl;
    }
    return 0;
}
