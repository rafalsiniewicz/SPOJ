#include<iostream>
using namespace std;
int NWD(int a, int b){
    if( a == 1 || b == 1){
        return 1;
    }
    else if(a > b){
    for(int i = b; i >= 2; i--){
        if(b%i == 0 && a%i == 0){
            return i;
        }
    }
    }
    else{
        for(int i = a; i >= 2; i -- ){
            if(b%i == 0 && a%i == 0){
            return i;
        }
        }
    }
}

int main(){
    int t;
    cin >> t;
    int* tab = new int[t];
    int* tab2 = new int[t];
    for(int i = 0; i < t; i++ ){
        cin >> tab[i] >> tab2[i];
    }
    for(int i = 0; i < t; i++ ){
        cout << NWD(tab[i],tab2[i]) << endl;

    }

    delete [] tab;
    delete [] tab2;

    return 0;
}
