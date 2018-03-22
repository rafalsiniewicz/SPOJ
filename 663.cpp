/*Dana jest lista punktów na płaszczyżnie. Posortuj je względem odległości od środka układu współrzędnych w metryce euklidesowej.

Wejście
W pierwszej linii liczba testów t (t < 100). 
Dla każdego testu najpierw n (1 ≤ n ≤ 1000) - liczba punktów i w kolejnych n liniach opis każdego punktu w formacie: 
nazwa x y
gdzie nazwa jest unikalnym dla każdego testu ciągiem co najwyżej 10 liter alfabetu łacińskiego, a x i y są współrzędnymi punktu. 
Obie współrzędne są całkowite oraz -1000 ≤ x, y ≤ 1000. Kolejne testy oddzielone są jednym pustym wierszem. 
Żadne 2 punkty nie leżą w tej samej odległości od środka układu współrzędnych.

Wyjście
Dla każdego przypadku testowego w kolejnych n liniach posortowane punkty. Po każdym przypadku testowym jedna linia odstępu.*/
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct Point{

    //friend ostream & operator <<(ostream & s, const Point & p );
    string s;
    int x, y;
};
float odleglosc(int x, int y){
    return pow(pow(x,2) + pow(y,2),0.5);
}
Point* sortowanie_odleglosc(Point tab[], int rozmiar){
    float* tab2 = new float[rozmiar];
    Point* tab3 = new Point[rozmiar];
    for(int i = 0; i < rozmiar; i ++){
        tab2[i] = odleglosc(tab[i].x,tab[i].y);
    }
    sort(tab2,tab2+rozmiar);

    for(int i = 0; i < rozmiar; i++){
        for(int j = 0 ; j < rozmiar; j++){
            if(tab2[i] == odleglosc(tab[j].x,tab[j].y)){
                tab3[i].x = tab[j].x;
                tab3[i].y = tab[j].y;
                tab3[i].s = tab[j].s;
        }
        }

    }
    return tab3;
    delete [] tab2;
}
int main(){
    int t;
    cin >> t;
    int n;
    for( int i = 0; i < t; i ++){
        int s = 0;
        cin >> n;
        Point tab[n];
        for(int j = 0; j < n; j++){
            cin >> tab[j].s >> tab[j].x >> tab[j].y;
            s++;
       }
       cout << endl;
            for(int k = 0; k < s; k++){
        cout << (*(sortowanie_odleglosc(tab,s)+k)).s << " "
        << (*(sortowanie_odleglosc(tab,s)+k)).x << " "
        << (*(sortowanie_odleglosc(tab,s)+k)).y << endl;
     }
     cout << endl;
    }

return 0;
}
