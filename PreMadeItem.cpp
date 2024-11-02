#include "PreMadeItem.h"
#include "IceCreamItem.h"
#include <sstream>
#include <iomanip>  

PreMadeItem::PreMadeItem(std::string name, std::string size)
    : IceCreamItem(size), name(name) {
    this->price += 1; 
}

PreMadeItem::~PreMadeItem() {
}


std::string PreMadeItem::composeItem() {
    std::ostringstream oss;
    oss << "Pre-made Size: " << this->size << "\n";
    oss << "Pre-made Item: " << this->name << "\n";
    oss << "Price: $" << std::fixed << std::setprecision(2) << getPrice() << "\n";
    return oss.str();
}

double PreMadeItem::getPrice() {
    return this->price;
}