#include<iostream>
using namespace std;
struct Dane
{
    int zwrot;
    int kroki;
};
struct Mapa
{
    int x = 0;
    int y = 0;
};
void droga(int a, int b)
{
    if(a == 0 && b == 0)
    {
        cout << "studnia" << endl;
    }
    if(a == 0 && b > 0)
    {
        cout << "0 " << b << endl;
    }
    if(a == 0 && b < 0)
    {
        cout << "1 " << b << endl;
    }
    if(b == 0 && a < 0)
    {
        cout << "2 " << a << endl;
    }
    if(b == 0 && a > 0)
    {
        cout << "3 " << a << endl;
    }
    if(a > 0 && b > 0)
    {
        cout << "0 " << a << endl;
        cout << "3 " << b << endl;
    }
    if(a < 0 && b > 0)
    {
        cout << "0 " << a << endl;
        cout << "2 " << b << endl;
    }
    if(a < 0 && b < 0)
    {
        cout << "1 " << a << endl;
        cout << "2 " << b << endl;
    }
    if(a > 0 && b < 0)
    {
        cout << "1 " << a << endl;
        cout << "3 " << b << endl;
    }
}
int main()
{
    int d;
    cin >> d;
    int* tab = new int[d];
    Mapa mapa;
    for(int i = 0; i < d; i++)
    {
        cin >> tab[i];
        //int** tab2 = new int*[tab[i]];
        //int tab2[tab[i]][tab[i]];
        Dane tab2[tab[i]];
        for(int j = 0; j < tab[i]; j ++)
        {
            //for(int k = 0; k < 2; k ++){
            cin >> tab2[j].zwrot >> tab2[j].kroki;
            switch(tab2[j].zwrot)
            {
            case 0:
                //mapa.x = 0;
                mapa.y += tab2[j].kroki;
                break;
            case 1:
                //mapa.x = 0;
                mapa.y -= tab2[j].kroki;
                break;
            case 2:
                mapa.x -= tab2[j].kroki;
                break;
            //mapa.y = 0;
            case 3:
                mapa.x += tab2[j].kroki;
                //mapa.y = 0;
                break;
            }
        }
        //cout << mapa.x << " " << mapa.y << endl;
        droga(mapa.x,mapa.y);
        mapa.x = mapa.y = 0;

    }

    /*for( int l = 0; l < tab[i]; l++){
        delete [] tab2[l];
    }*/
    return 0;
}
