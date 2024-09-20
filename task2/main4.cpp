#include <iostream>

using namespace std;


int main()
{
    /*
     *Opprinnelig oppgave
        int a = 5;
        int &b; referanse må initialiseres når den deklareres --> initialisere referansen 'b' med 'a'
        int *c;
        c = &b;
        *a = *b + *c;  Denne linjen gir en kompileringsfeil fordi vi forsøker å dereferere en variabel som ikke er en peker --> fjerner pekerderefereringen av 'a' og 'b'
        &b = 2; 'b' er allerede bundet til en annen variabel og kan ikke endres
    */

    int a = 5;
    int &b = a;
    int *c;
    c = &b;
    a = b + *c;
    b = 2;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << *c << endl;

    return 0;
}
