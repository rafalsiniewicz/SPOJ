/*
W celu zaoszczêdzenia iloœci znaków w krótkich wiadomoœciach tekstowych (SMS) nie pisze siê spacji, a ka¿dy wyraz rozpoczyna siê wielk¹ liter¹.
Twoim zadaniem jest otrzymany tekst przerobiæ zgodnie z powy¿szym trendem.

Input
Na wejœciu znajduje siê dowolny tekst bez polskich znaków.

Output
Tekst wprowadzony z wejœcia, ale bez spacji. Ponadto ka¿dy wyraz poprzedzony na wejœciu spacj¹ zaczyna siê wielk¹ liter¹.
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void Sms(vector<string>& tab)
{
    for(int i = 0; i < tab.size(); i++)
    {
        for(int j = 0; j < tab[i].length(); j++)
        {
            if(tab[i][j] == ' ')
            {
                tab[i][j+1] = toupper(tab[i][j+1]);
                tab[i].erase(j,1);
            }
        }
    }
    for(int i = 0; i < tab.size(); i++)
        tab[i][0] = toupper(tab[i][0]);
}
int main()
{
    vector<string> tab;
    string s;
    int i = 0;
    getline(cin,s);
    tab.push_back(s);
    while(tab[i][tab[i].length()-1]!= '.')
    {
        i++;
        getline(cin,s);
        tab.push_back(s);
    }
    Sms(tab);
    for(int i = 0; i < tab.size(); i++)
        cout << tab[i] << endl;
    return 0;
}
