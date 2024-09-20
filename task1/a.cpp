#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //a ------------------------------------------------------------------------------
    const int length = 5;
    double temperatures[length];

    cout << "a)" << endl;
    cout << "Du skal skrive inn 5 temperaturer." << endl;

    for(int i = 0; i < length; i++) {
        cout << "Temperatur nr " << (i + 1) << ": ";
        cin >> temperatures[i];
    }

    int under10Count = 0;
    int between10And20 = 0;
    int over20Count = 0;

    for(double temperature : temperatures) {
        if (temperature < 10) {
            under10Count++;
        }
        if (temperature >= 10 && temperature <= 20) {
            between10And20++;
        }
        if (temperature > 20) {
            over20Count++;
        }
    }

    cout << "Antallet under 10 er " << under10Count << endl;
    cout << "Antall mellom 10 og 20 er " << between10And20 << endl;
    cout << "Antall over 20 er " << over20Count << endl;
    return 0;

}

