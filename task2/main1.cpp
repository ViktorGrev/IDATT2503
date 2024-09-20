#include <iostream>

using namespace std;

int main()
{
    //a
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << i << endl;
    cout << &i << endl;

    cout << j << endl;
    cout << &j << endl;

    cout << p << endl;
    cout << &p << endl;

    cout << q << endl;
    cout << &q << endl;

    //b
    *p = 7; //setter ny verdi til p
    *q += 4; //setter ny verdi til q
    *q = *p + 1; //setter ny verdi til q
    p = q; //setter adressen til p lik q og dermed også verdien
    cout << *p << " " << *q << endl; //skriver ut "8 8"



    return 0;
}