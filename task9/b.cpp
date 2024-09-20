#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    vector<int> v2 = {2, 3, 12, 14, 24};

    bool equal1 = equal(v1.begin(), v1.begin() + 5, v2.begin(), [](int a, int b) {
        return abs(a - b) <= 2;
    });

    bool equal2 = equal(v1.begin(), v1.begin() + 4, v2.begin(), [](int a, int b) {
        return abs(a - b) <= 2;
    });

    cout << "Er de første 5 elementene omtrent like? " << (equal1 ? "Ja" : "Nei") << endl;
    cout << "Er de første 4 elementene omtrent like? " << (equal2 ? "Ja" : "Nei") << endl;

    return 0;
}

