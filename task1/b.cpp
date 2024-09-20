#include <iostream>
#include <cstdlib>
#include <fstream>
#include <filesystem>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main () {
    const int length = 5;
    double temperatures[length];

    cout << "b)" << endl;

    read_temperatures(temperatures, length);

    cout << "Temperaturer fra filen:" << endl;
    for(int i = 0; i < length; i++) {
        cout << "Temperatur nr " << (i + 1) << ": " << temperatures[i] << endl;
    }

    return 0;
}

void read_temperatures(double temperatures[], int length) {
    fstream file("C:/CodeProjects/Cpp/task1/list");
    if (!file.is_open()) {
        cerr << "could not open file" << endl;
        exit(1);
    }

    int sum = 0;
    for(int i = 0; i < length; i++) {
        file >> temperatures[i];
        sum += temperatures[i];
    }
    cout << "Summen av tallene i filen er " << sum << endl;
    file.close();
}