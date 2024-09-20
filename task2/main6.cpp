#include <iostream>

using namespace std;

int find_sum(const int *table, int length);

int main()
{
    int table[20];
    int *ptr = table;

    for(int i = 0; i < 20; i++){
        table[i] = i + 1;
    }

    cout << find_sum(ptr, 10) << endl;
    ptr = &table[10];
    cout << find_sum(ptr, 5) << endl;
    ptr = &table[15];
    cout << find_sum(ptr, 5) << endl;
    return 0;
}

int find_sum(const int *table, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += *(table + i);
    }
    return sum;
}

