/*
Wczytaj ci¹g liczb. Nastêpnie wypisz wczytane liczby w taki sposób, aby najpierw pojawi³y siê te, które wyst¹pi³y na pozycjach parzystych,
a nastêpnie te, które wyst¹pi³y na pozycjach nieparzystych; z zachowaniem pierwotnej kolejnoœci w obrêbie obu grup. Numerujemy od 1.

Wejœcie
Najpierw t - liczba testów. Nastêpnie dla ka¿dego testu liczba n i n liczb, n <= 100.

Wyjœcie
Dla ka¿dego testu n liczb w opisanym porz¹dku.
*/
#include<iostream>
using namespace std;
int* kolejnosc(int* tab, int n)
{
    int* tab2 = new int[n];
    for(int i = 0,j = 0; i < n; i++,j+=2)
    {
        if(j+1 < n)
            tab2[i] = tab[j+1];
        else
        {
            if(n % 2)
                tab2[i] = tab[j+1-n];
            else tab2[i] = tab[j-n];
        }
    }
    /*for(int i = 0; i < n; i++)
        cout << tab2[i] << " ";
    cout << endl;
    */
    return tab2;
}
int main()
{
    int t,n;
    cin >> t;
    int** tab = new int*[t];
    int* tab2 = new int[t];
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        tab2[i] = n;
        tab[i] = new int[n];
        int* tab3 = new int[n];
        for(int j = 0; j < n; j++)
            cin >> tab3[j];
        for(int k = 0; k < n; k++)
            tab[i][k] = *(kolejnosc(tab3,n)+k);
        delete [] tab3;
    }
    cout << "Output\n";
    for(int i = 0; i < t; i++)
    {
        for(int j = 0; j < tab2[i]; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < t; i++)
    delete [] tab[i];
    delete [] tab2;
    return 0;
}
