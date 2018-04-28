#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

int main()
{
    srand( time( NULL ) );
    char znak;
    int n = (rand() % 20 ) + 0 ;
    cout << "Wylosowana liczba " << n << endl;
    vector<char> tab;
    int sum = 0;
    vector<char> vec;
    string* tab2 = new string[n];
    for(int i = 0; i < n; i++ )
    {
        cin >> znak;
        tab.push_back(znak);
    }
    for(int i = 0; i < n; i++ )
    {
        if(int(tab[i]) == 43)
        {
            vec.push_back(tab[i+1]);
            if(vec.size() == 1)
            cout << ":)"<< endl;
            for(int j = 0; j < vec.size()-1; j++)
            {
                if(tab[i+1] == vec[j])
                {
                    cout << ":(" << endl;
                    vec.erase(vec.end()-1);
                    break;
                }
            if(j == vec.size()-2)
            cout << ":)"<< endl;
            }

        }
        else if(int(tab[i]) == 45){
            if(vec.size() > 0){
            cout << vec[vec.size()-1] << endl;
            vec.erase(vec.end()-1);
            }
            else cout << ":(" << endl;
            }
    }
return 0;
}
