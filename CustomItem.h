#ifndef CUSTOMITEM_H  
#define CUSTOMITEM_H

#include <string>
#include <iostream>
#include <map>
#include "IceCreamItem.h"


class CustomItem : public IceCreamItem {
protected: 
    std::map<std::string, int> toppings;
    int numToppings;

public: 
    CustomItem(std::string size);
    ~CustomItem(); 
    void addTopping(std::string topping);
    std::string composeItem() override;
    double getPrice() override;
}; 


#endif