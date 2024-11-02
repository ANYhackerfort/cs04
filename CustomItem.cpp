#include "CustomItem.h"
#include "IceCreamItem.h"
#include <sstream>
#include <iomanip> 

CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
    numToppings = 0;
}

CustomItem::~CustomItem() {
}

void CustomItem::addTopping(std::string topping) {
    toppings[topping]++;
    numToppings++; 
}

std::string CustomItem::composeItem() {
    std::ostringstream oss;
    oss << "Custom Size: " << size << "\n";
    oss << "Toppings:\n";
    for (const auto& topping : toppings) {
        oss << topping.first << ": " << topping.second << " oz" << std::endl;
    }
    oss << "Price: $" << std::fixed << std::setprecision(2) << getPrice() << std::endl;  
    return oss.str();
}

double CustomItem::getPrice() {
    double toppingPrice = 0.40; 
    return price + (toppingPrice * numToppings);
}
