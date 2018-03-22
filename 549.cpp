/*Twoim zadaniem jest dodać wszystkie liczby całkowite podane na wejściu.

Wejście
W pierwszym wierszu znajduje się liczba t testów (0 < t < 100)
Każdy test opisany jest w następujący sposób. W pierwszym wierszu dana jest liczba n - liczba liczb do zsumowania. 
Następnie podanych jest n liczb pooddzielanych spacją.*/
#include<iostream>
using namespace std;
int sum(int n, int tab[]){
    int s = 0;
    for(int i = 0; i < n; i++){
        s += tab[i];
    }
    return s;
}
int main(){
    int n;
    cin >> n;
    int* result = new int[n];
    int *tab = new int[n];
    for(int i = 0; i < n; i++ ){
        cin >> tab[i];
        int x = tab[i];
        int *tab2 = new int[tab[i]];
        for(int j = 0; j < tab[i]; j++){
            cin >> tab2[j];
        }
        result[i] = sum(x, tab2);
        delete [] tab2;

    }
    cout << "Wyniki:" << endl;
     for(int i = 0; i < n; i++ ){
            cout << result[i] << endl;

    }
    delete [] tab;
    return 0;
}
