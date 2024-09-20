#include <iostream>
#include <iomanip>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    cout << "Template-utgave brukes." << endl;
    return a == b;
}

bool equal(double a, double b) {
    cout << "Spesialisering for double brukes." << endl;
    return abs(a - b) < 0.00001;
}

int main() {
    //Typen int
    int x = 5;
    int y = 5;
    if (equal(x, y)) {
        cout << "x og y er like." << endl;
    } else {
        cout << "x og y er ikke like." << endl;
    }

    //Typen double
    double d1 = 0.123456789;
    double d2 = 0.123456784;

    cout << setprecision(10);

    if (equal(d1, d2)) {
        cout << "d1 og d2 er like." << endl;
    } else {
        cout << "d1 og d2 er ikke like." << endl;
    }

    //Typen string
    string str1 = "hello";
    string str2 = "hello";

    if (equal(str1, str2)) {
        cout << "str1 og str2 er like." << endl;
    } else {
        cout << "str1 og str2 er ikke like." << endl;
    }

    return 0;
}