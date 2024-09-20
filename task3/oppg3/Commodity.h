#ifndef COMMODITY_H
#define COMMODITY_H
#include "string"
using namespace std;

const double sals_tax = 0.25;

class Circle {
public:
    Circle(string name, int id, double price);
    string get_name() const;
    int get_id() const;
    double get_price(double quantity) const;
    double get_price() const;
    double set_price (double price);
    double get_price_with_sales_tax(double quantity) const;
    double get_circumference() const;
private:
    string name;
    int id;
    double price;
};



#endif //COMMODITY_H
