/*Piotruś w klasie na lekcji matematyki bardzo się nudził i pani postanowiła dać mu dodatkowe zadanie do rozwiązania. 
Piotruś otrzymał kartkę, na której napisane były małe liczby. Piotruś ma za zadanie stwierdzić, czy dana liczba jest palindromem 
(tzn. czy czyta się ją tak samo od lewej do prawej strony, jak od prawej do lewej). 
Jeżeli nie, Piotruś powinien dodać do siebie wartość liczby czytanej od lewej do prawej oraz wartość liczby czytanej od prawej do lewej,
sprawdzić, czy suma jest palindromem, i jeżeli nie -- kontynuować proces, aż otrzyma palindrom.

Przykładowo, mając daną liczbę 28, Piotruś stwierdzi, że nie jest ona palindromem i wykona dodawanie 28 + 82 = 110. 
Liczba 110 wciąż nie jest palindromem, zatem Piotruś wykona jeszcze dodawanie 110 + 011 = 110 + 11 = 121. 
Wynik tego dodawania jest już palindromem, więc obliczenia zostaną zakończone.

Twoim zadaniem jest napisać program, który dla każdej liczby rozważanej przez Piotrusia wypisze palindrom (wynik obliczeń Piotrusia), 
oraz liczbę dodawań prowadzących do wyniku.

Wejście
Pierwsza linia wejścia zawiera liczbę t (t <= 80), określającą ile liczb znajduje się na kartce Piotrusia. 
Każda z następnych t linii zawiera dokładnie jedną liczbę naturalną n (1 <= n <= 80), dla której Piotruś musi wykonać obliczenia.

Wyjście
Dla kolejnych liczb podanych na kartce wypisz po jednej linijce zawierającej dwie liczby całkowite oddzielone spacją. 
Pierwsza oznacza palindrom otrzymany przez Piotrusia, druga -- liczbę dodawań wykonanych, by go otrzymać.*/
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
