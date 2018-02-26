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
