#include <iostream>
#include <iomanip>

using namespace std;

template <typename Type1, typename Type2>
class Pair {
public:
    Type1 first;
    Type2 second;

    Pair(Type1 f, Type1 s) {
        first = f;
        second = s;
    }

    Pair<Type1, Type2> operator+(const Pair<Type1, Type2>& other) const {
        return Pair<Type1, Type2>(this->first + other.first, this->second + other.second);
    }

    bool operator>(const Pair<Type1, Type2>& other) const {
        return (this->first + this->second) > (other.first + other.second);
    }
};

int main() {
    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);

    std::cout << "p1: " << p1.first << ", " << p1.second << std::endl;
    std::cout << "p2: " << p2.first << ", " << p2.second << std::endl;

    if (p1 > p2)
        std::cout << "p1 er storst" << std::endl;
    else
        std::cout << "p2 er storst" << std::endl;

    auto sum = p1 + p2;
    std::cout << "Sum: " << sum.first << ", " << sum.second << std::endl;

    return 0;
}

//Forusettninger
/*For å sammenligne to Pair<double, int> objekter, må double og int støtte både + og > operatorene.*/

