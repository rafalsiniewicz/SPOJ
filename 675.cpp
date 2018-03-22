/*Opis
Pewien bardzo znany poszukiwacz skarbów, pan Skardfinder, 
właśnie odkrył kolejną w swoim życiu tajemniczą mapę określającą położenie skarbu. 
Mapa jest bardzo specyficzna, zawiera jedynie szereg liczb, po dwie w wierszu, których jest bardzo dużo. 
Po wielu miesiącach uważnego studiowania mapy i okoliczności jej zdobycia, pan Skardfinder wreszcie odkrył, co liczby te oznaczają. 
Otóż każda para jest pojedynczą wskazówką, gdzie pierwsza liczba w wierszu oznacza kierunek, w którym należy iść, 
a druga ilość kroków, które trzeba wykonać w tym kierunku. Kierunki te są zakodowane następująco:

        0 - północ
        1 - południe
        2 - zachód
        3 - wschód
      
Kolejnym odkryciem było to, że liczenie kroków trzeba rozpocząć od pewnej studni. 
Teraz nie pozostało nic innego, jak tylko pojechać tam i zacząć chodzić, jak mapa wskazuje, a potem odkopać skarb. 
Ale... tych wskazówek może być nawet 100000, a kroków w każdej z nich nawet do 10000. 
Nikt rozsądny oczywiście nie będzie chodził tyle pieszo, a na pewno nie tak znany poszukiwacz skarbów, jak pan Skardfinder. 
Dał Ci więc zadanie napisania dla niego programu, który wskaże, jak osiągnąć skarb robiąc jak najmniej kroków 
(oczywiście poruszając się tylko zgodnie z etykietą poszukiwaczy skarbów tzn. tylko w kierunkach północ-południe, lub wschód-zachód), 
lub powie, że skarb znajduje się we wspomnianej studni (jeśli kroki zaprowadzą nas do punktu, z którego zaczynaliśmy liczyć). 
Teren, na którym szukamy skarbu jest pustym polem i w zasięgu mapy nie ma na nim żadnych przeszkód, 
które uniemożliwiałyby robienie kroków w którymkolwiek z kierunków.

Specyfikacja wejścia
Pierwsza linia wejścia zawiera liczbę całkowitą D (1 ≤ D ≤ 50), oznaczającą liczbę zestawów danych. 
Pierwsza linia każdego zestawu zawiera jedną liczbę całkowitą N (0 ≤ N ≤ 100000), 
oznaczającą liczbę wskazówek - par określających kierunek i ilość kroków do wykonania. 
Kolejnych N linii składa się z liczb a i b (0 ≤ a ≤ 3; 1 ≤ b ≤ 10000), które oznaczają pojedynczą wskazówkę.

Specyfikacja wyjścia
Dla każdego zestawu danych należy wypisać najkrótszą drogę zgodną z zasadami etykiety poszukiwaczy skarbów, 
lub słowo studnia, jeśli skarb znajduje się w studni. 
Drogę oznaczamy tak samo jak na mapie, przez pary kierunek i ilość kroków w tym kierunku wypisanych w jednej linii. 
Jeśli do skarbu prowadzi prosta droga, należy wypisać tylko jedną linię z kierunkiem i ilością kroków. 
Jeśli droga musi skręcać, to wtedy pan Skardfinder po przeprowadzeniu na miejscu wizji lokalnej prosił, 
aby najpierw kroki wykonywać w orientacji północ-południe, a dopiero gdy znajdziemy się na odpowiedniej wysokości w tej orientacji, 
zacząć robić kroki w orientacji wschód-zachód.*/
#include<iostream>
using namespace std;
struct Dane
{
    int zwrot;
    int kroki;
};
struct Mapa
{
    int x = 0;
    int y = 0;
};
void droga(int a, int b)
{
    if(a == 0 && b == 0)
    {
        cout << "studnia" << endl;
    }
    if(a == 0 && b > 0)
    {
        cout << "0 " << b << endl;
    }
    if(a == 0 && b < 0)
    {
        cout << "1 " << b << endl;
    }
    if(b == 0 && a < 0)
    {
        cout << "2 " << a << endl;
    }
    if(b == 0 && a > 0)
    {
        cout << "3 " << a << endl;
    }
    if(a > 0 && b > 0)
    {
        cout << "0 " << a << endl;
        cout << "3 " << b << endl;
    }
    if(a < 0 && b > 0)
    {
        cout << "0 " << a << endl;
        cout << "2 " << b << endl;
    }
    if(a < 0 && b < 0)
    {
        cout << "1 " << a << endl;
        cout << "2 " << b << endl;
    }
    if(a > 0 && b < 0)
    {
        cout << "1 " << a << endl;
        cout << "3 " << b << endl;
    }
}
int main()
{
    int d;
    cin >> d;
    int* tab = new int[d];
    Mapa mapa;
    for(int i = 0; i < d; i++)
    {
        cin >> tab[i];
        //int** tab2 = new int*[tab[i]];
        //int tab2[tab[i]][tab[i]];
        Dane tab2[tab[i]];
        for(int j = 0; j < tab[i]; j ++)
        {
            //for(int k = 0; k < 2; k ++){
            cin >> tab2[j].zwrot >> tab2[j].kroki;
            switch(tab2[j].zwrot)
            {
            case 0:
                //mapa.x = 0;
                mapa.y += tab2[j].kroki;
                break;
            case 1:
                //mapa.x = 0;
                mapa.y -= tab2[j].kroki;
                break;
            case 2:
                mapa.x -= tab2[j].kroki;
                break;
            //mapa.y = 0;
            case 3:
                mapa.x += tab2[j].kroki;
                //mapa.y = 0;
                break;
            }
        }
        //cout << mapa.x << " " << mapa.y << endl;
        droga(mapa.x,mapa.y);
        mapa.x = mapa.y = 0;

    }

    /*for( int l = 0; l < tab[i]; l++){
        delete [] tab2[l];
    }*/
    return 0;
}
