#include<iostream>
using namespace std;
int* shift(int tab2[], int s)
{
    int* tab3 = new int[s];
    for(int i = 0; i < s-1; i++)
    {
        tab3[i] = tab2[i+1];
    }
    tab3[s-1] = tab2[0];
    return tab3;
}
int main()
{
    int t;
    cin >> t;
    int* tab = new int[t];
    for(int i = 0; i < t; i++)
    {
        int s =0;
        cin >> tab[i];
        int* tab2 = new int[tab[i]];
        for(int j = 0; j < tab[i]; j ++)
        {
            cin >> tab2[j];
            s++;
        }
        for(int k = 0; k < tab[i]; k++)
        {
            cout << *(shift(tab2,s)+k) << " ";
        }
        cout << endl;
    }

    delete [] tab;

    return 0;
}
