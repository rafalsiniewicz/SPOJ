/*#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
void Last(int a, int b){
    int w = pow(a,b);
    ostringstream ss;
    ss << w;
    string str = ss.str();
    cout << str.back();
}
int main(){
    int n;
    cout << "Podaj liczbe przypadkow do rozwazenia:\n";
    cin >> n;
    int tab[n][2];
    for ( int i = 0, j = 0 ; i < n; i++)
    {
        cout << "Podaj a i b:\n";
        cin >> tab[i][j] >> tab[i][j+1];
    }
    cout << "Wyniki:\n";
    for ( int i = 0, j = 0; i < n; i++){
        Last(tab[i][j],tab[i][j+1]);
        cout << endl;

    }


    string tab[n];
    for ( int i = 0; i < n; i++){
        cout << "Podaj a i b:\n";
        getline(cin,tab[i]);
        cin.get();
    }


return 0;
}
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void f(vector<int> v)
{
    vector<int> v2;
    for(int i = 0; i < v.size(); i++)
        v2.push_back(v[v.size()-i-1]);
    for(int i = 0; i < v.size(); i++)
        cout << v2[i] << " ";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, d;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> d;
        v.push_back(d);
    }
    f(v);
    //for(int i = 0; i < n; i++)
        //cout << v[i] << " ";
    return 0;
}
