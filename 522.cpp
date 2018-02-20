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
