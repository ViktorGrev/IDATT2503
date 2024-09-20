#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};

    auto it = find_if(v1.begin(), v1.end(), [](int x) { return x > 15; });

    if (it != v1.end()) {
        cout << "Første element i v1 større enn 15 er: " << *it << endl;
    } else {
        cout << "Ingen elementer i v1 er større enn 15." << endl;
    }

    return 0;
}

