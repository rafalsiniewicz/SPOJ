#include<iostream>
using namespace std;
int* rev(int* tab, int n){
    int* tab2 = new int[n];
    for(int i = 0; i < n; i++){
        tab2[i] = tab[n-i-1];
    }
    return tab2;
    delete [] tab2;
}
int main(){
    int t,n;
    cin >> t;
    for( int i =0; i < t; i++){
        cin >> n;
        int* tab = new int[n];
            for ( int j =0; j < n; j++){
                cin >> tab[j];
            }
        int* tab2 = rev(tab,n);
            for ( int k = 0; k < n; k++){
                cout << tab2[k] << " ";
            }
        cout << endl;
        }
    return 0;
}
