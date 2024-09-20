//
// fraction/main.cpp
//
#include "fraction.h"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
    cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
    Fraction a(10, 20);
    Fraction b(3, 4);
    Fraction c;
    c.set(5);
    Fraction d = a / b;

    print("a = ", a);
    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    b += a;
    ++c;
    d *= d;

    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    c = a + b - d * a;
    c = -c;

    print("c = ", c);

    if (a + b != c + d)
        cout << "a + b != c + d" << endl;
    else
        cout << " a + b == c + d" << endl;
    while (b > a)
        b -= a;
    print("b = ", b);

    //a
    Fraction e = a - 2;
    Fraction f = 5 - a;

    print("e = ", e);
    print("f = ", f);

    //b
    //((((5 - 3) - fraction1) - 7) - fraction2)
    //1. I det første leddet vil det det utføres en standard operasjon for Integers
    //2. For neste ledd vill ikke medlemsfunksjonen bli utført
    //3. Det tredde leddet vil medlemsfunksjonen bli utført
    //4. I det fjernde leddet er det medlemsfunksjonen bare at med fraction istedenfor med en int
    Fraction fraction1(10, 20);
    Fraction fraction2(3, 4);
    Fraction fraction3;
    fraction3 = 5 - 3 - fraction1 - 7 - fraction2;
    print("fraction3 = ", fraction3);
}

// Utskrift:
// a = 1 / 2
// b = 3 / 4
// c = 5 / 1
// d = 2 / 3
// b = 5 / 4
// c = 6 / 1
// d = 4 / 9
// c = -55 / 36
// a + b != c + d
// b = 1 / 4