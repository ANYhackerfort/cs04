#include "IceCreamItem.h"

IceCreamItem::IceCreamItem(std::string size) : price(0.0), size(size) {
    if (size == "small") {
        this->price = 3.00;
    } else if (size == "medium") {
        this->price = 5.00;
    } else if (size == "large") {
        this->price = 6.50;
    } 
}