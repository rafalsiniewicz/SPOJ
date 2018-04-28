#include<iostream>
#include<string>
#include<sstream>
using namespace std;
template<typename T>
std::string to_string(const T& obj)
{
    std::stringstream ss;
    ss << obj;
    return ss.str();
}
string flam(string& s){
    for(int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}
string licz(string& s){
    int tab[s.length()];
    for( int i = 0; i < s.length(); i++){
        tab[i] = 0;
    }
    char a = 'A';
    for( int i = 0; i < s.length(); i++){
        tab[int(s[i])-65]++;
    }
    for ( int i = 0; i < sizeof(tab); i ++){
            s[i] + to_string(tab[i]);
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    string* tab = new string[n];
    for(int i = 0; i < n; i++){
        cin >> tab[i];
    }
    for(int i = 0; i < n; i++){
        flam(tab[i]);
    }
    for(int i = 0; i < n; i++){
        licz(tab[i]);
    }

    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }
    delete [] tab;
}
