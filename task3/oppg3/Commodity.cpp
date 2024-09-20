#include "Commodity.h"

Circle::Circle(string name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

string Circle::get_name() const {
    return name;
}

int Circle::get_id() const {
    return id;
}

double Circle::get_price(double quantity) const {
    return price * quantity;
}

double Circle::get_price() const {
    return price;
}

double Circle::set_price(double price_) {
    price = price_;
    return price;
}

double Circle::get_price_with_sales_tax(double quantity) const {
    return price * quantity * (1 + sals_tax);
}