/*
W celu zaoszcz�dzenia ilo�ci znak�w w kr�tkich wiadomo�ciach tekstowych (SMS) nie pisze si� spacji, a ka�dy wyraz rozpoczyna si� wielk� liter�.
Twoim zadaniem jest otrzymany tekst przerobi� zgodnie z powy�szym trendem.

Input
Na wej�ciu znajduje si� dowolny tekst bez polskich znak�w.

Output
Tekst wprowadzony z wej�cia, ale bez spacji. Ponadto ka�dy wyraz poprzedzony na wej�ciu spacj� zaczyna si� wielk� liter�.
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
