#include<iostream>
#include<string>
using namespace std;
struct Batonik{
    string _marka;
    double _waga;
    int _kalorie;
    //Batonik(string marka,double waga,int kalorie):_marka(marka),_waga(waga), _kalorie(kalorie){}
};
struct Pizza{
    string _nazwa;
    double _srednica;
    double _waga;
    //Pizza(string nazwa,double srednica,double waga):_nazwa(nazwa),_srednica(srednica),_waga(waga){}
};
int main(){
    /*string imie;
    string nazwisko;
    int ocena;
    int wiek;
    string pytanie = "Jak masz na imie? ";
    cout << pytanie ;
    getline(cin,imie);
    cout << "Jak sie nazywasz? ";
    cin >> nazwisko;
    error:
    cout << "Na jaka ocene zaslugujesz? ";
    cin >> ocena;
    if(ocena < 2 || ocena >6){
        cout << "Podaj ocene w zakresie od 2 do 6" << endl;
        goto error;
    }
        cout << "Ile masz lat? ";
        cin >> wiek;
        cout << "Nazwisko: " << nazwisko << ", " << imie << endl;
        cout << "Ocena: " << ocena -1 << endl;
        cout << "Wiek: " << wiek;
        */
    /*string imie;
    string nazwisko;
    string napis;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    napis = nazwisko + ", " + imie;
    cout << "Oto informacje zestawione w jeden napis: " << napis;
    */
    /*Batonik snack("Mocha Munch",2.3,350);
    //cout << "marka: " << snack._marka << ", waga: " << snack._waga << ",kalorie: " << snack._kalorie ;
    Batonik tab[3] = {{"snickers",14.3,124},{"mars",21.3,124},{"bounty",123.3,133}};
    for(int i = 0; i<sizeof(tab)/sizeof(Batonik);i++){
        cout << tab[i]._marka << tab[i]._waga << tab[i]._kalorie << endl;
    }
    */
    /*Pizza pizza;
    cout << "Podaj nazwe: ";
    getline(cin,pizza._nazwa);
    cout << "Podaj srednice: ";
    cin >> pizza._srednica;
    cout << "Podaj wage: ";
    cin >> pizza._waga;
    cout << "Nazwa: " << pizza._nazwa << endl;
    cout << "Srednica: " << pizza._srednica << endl;
    cout << "Waga: " << pizza._waga << endl;
    */

    /*Pizza* pizza = new Pizza;
    cout << "Podaj nazwe: ";
    getline(cin,pizza->_nazwa);
    cout << "Podaj srednice: ";
    cin >> pizza->_srednica;
    cout << "Podaj wage: ";
    cin >> pizza->_waga;
    cout << "Nazwa: " << pizza->_nazwa << endl;
    cout << "Srednica: " << pizza->_srednica << endl;
    cout << "Waga: " << pizza->_waga << endl;
    */
    /*Batonik* tab = new Batonik[3];
    tab[0]._marka = "snickers ";
    tab[0]._kalorie = 234;
    tab[0]._waga = 12.32;
    tab[1]._marka = "mars";
    tab[1]._kalorie = 435;
    tab[1]._waga = 123.543;
    tab[2]._marka = "bounty";
    tab[2]._kalorie = 567;
    tab[2]._waga = 12.243;
    for(int i = 0; i < 3; i++){
        cout << tab[i]._marka << " " << tab[i]._waga << " " << tab[i]._kalorie << endl;
    }
    */
}
