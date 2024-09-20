#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Set {
private:
    vector<int> elements;

public:
    Set() = default;

    Set(const vector<int>& elems) {
        for (int elem : elems) {
            add(elem);
        }
    }

    void add(int elem) {
        if (find(elements.begin(), elements.end(), elem) == elements.end()) {
            elements.push_back(elem);
        }
    }

    Set& operator=(const Set& other) {
        if (this != &other) {
            elements = other.elements;
        }
        return *this;
    }

    Set operator+(const Set& other) const {
        Set result(*this);
        for (int elem : other.elements) {
            result.add(elem);
        }
        return result;
    }

    void print() const {
        cout << "{ ";
        for (size_t i = 0; i < elements.size(); ++i) {
            cout << elements[i];
            if (i < elements.size() - 1) {
                cout << ", ";
            }
        }
        cout << " }" << endl;
    }
};

int main() {
    Set set1;
    Set set2;

    set1.add(1);
    set1.add(4);
    set1.add(3);

    set2.add(4);
    set2.add(7);

    cout << "Set1: ";
    set1.print();

    cout << "Set2: ";
    set2.print();

    Set unionSet = set1 + set2;
    cout << "Union of Set1 and Set2: ";
    unionSet.print();

    set1 = set2;
    cout << "After setting Set1 = Set2, Set1: ";
    set1.print();

    return 0;
}
