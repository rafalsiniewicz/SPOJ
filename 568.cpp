#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int pal(int n, bool (f)(int), int (g)(int)){
    int s = 0;
    if(f(n)==true){
        cout << n << " ";
        return s;
    }
    else {
        while(f(n)!=true){
            n = g(n);
            s++;
        }
        cout << n << " ";
        return s;
    }
}
bool ifis(int n){
    stringstream ss;
    ss << n;
    string str = ss.str();
    for(int i = 0; i < str.length(); i ++){
        if(str[i]!=str[str.length()-i-1])
        {
            return false;
        }
    }
    return true;
}
int rev(int n){
    int m = n;
    stringstream ss;
    ss << n;
    string str = ss.str();
    string str2 = str;
    for(int i = 0; i < str.length(); i++){
        str[i] = str2[str.length()-i-1];
    }
    istringstream iss(str);
    iss >> n;
    n = m + n;
    //cout << n;
    return n;
}
int main(){
    //rev(123);
    int t;
    cin >> t;
    int* tab = new int[t];
    for( int i = 0; i < t; i++){
        cin >> tab[i];
    }
    for( int i = 0; i < t; i++){

        cout << pal(tab[i],ifis,rev) << endl;
    }
    delete [] tab;

return 0;
}
