#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> myVector;

    myVector.push_back(3.14);
    myVector.push_back(2.71);
    myVector.push_back(1.61);
    myVector.push_back(1.41);
    myVector.push_back(1.0);

    std::cout << "First element: " << myVector.front() << std::endl;
    std::cout << "Last element: " << myVector.back() << std::endl;

    myVector.emplace(myVector.begin() + 1, 1.77);

    std::cout << "New first element after emplace: " << myVector.front() << std::endl;

    double valueToFind = 1.61;

    auto it = find(myVector.begin(), myVector.end(), valueToFind);

    // Sjekk om verdien ble funnet
    if (it != myVector.end()) {
        std::cout << "Value found: " << *it << std::endl;
    } else {
        std::cout << "Value not found." << std::endl;
    }
    return 0;
}

