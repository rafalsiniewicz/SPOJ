#include<iostream>
using namespace std;
void printfloat(float x) {
    unsigned char * const bytes = (unsigned char *)&x;
    cout << hex << (int)bytes[3] << " "
        << hex << (int)bytes[2] << " "
        << hex << (int)bytes[1] << " "
        << hex << (int)bytes[0] << endl;
}
int main(){
    cout << "Wejscie\n";
    int t;
    cin >> t;
    float* tab = new float[t];
    for( int i = 0; i < t; i++){
        cin >> tab[i];
    }
    cout << "Wyjscie\n";
    for( int i = 0; i < t; i++){
        printfloat(tab[i]);
    }
    delete [] tab;
    return 0;
}
