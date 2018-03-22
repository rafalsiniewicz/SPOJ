/*Napisz funkcję:

char* string_merge(char *, char *);
która sklei ze sobą dwa łańcuchy biorąc na przemian po jednym znaku z każdego łańcucha i 
umieści w nowej dynamicznie alokowanej tablicy znaków, do której zwróci wskaźnik. 
Należy wziąć po tyle znaków ile jest w krótszym łańcuchu.

Input
 

W pierwszej linii liczba testów t, w kolejnych liniach po dwa łańcuchy znaków odzielone spacją.

Output
W każdej linii jeden łańcuch, wynik działania funkcji string_merge.*/
#include<iostream>
using namespace std;
char* string_merge(char* s1, char* s2, int a, int b){
    int x;
    a < b ? x = a : x = b;
    char* tab = new char[x];
    for(int i = 0, k =0; i< 2*x && k<2*x; i++, k+=2){
        tab[k] = s1[i];
        tab[k+1] = s2[i];
    }
    return tab;
}
int len(char* s){
    int a = 0;
    for( int i = 0; s[i]!='\0'; i++){
                a++;
            }
  return a;
}
int main(){
    int t;
    cin >> t;
    const int C = 100;
    char S1[C];
    char S2[C];
    char* S;
    cin.getline(S1,C);
        while(t--){
            cin.getline(S1,C,' ');
            cin.getline(S2,C);
            S = string_merge(S1,S2,len(S1),len(S2));
            cout << S << endl;
            delete[] S;
    }
    return 0;
}



