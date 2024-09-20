#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    vector<int> v1_copy(v1.size());

    replace_copy_if(v1.begin(), v1.end(), v1_copy.begin(), [](int x) {
        return x % 2 != 0;
    }, 100);

    cout << "v1 etter replace_copy_if: ";
    for (int n : v1_copy) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}

