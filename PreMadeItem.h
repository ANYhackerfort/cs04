#ifndef PREMADEITEM_H  
#define PREMADEITEM_H

#include <string>
#include <iostream>
#include <vector> 
#include "IceCreamItem.h"


class PreMadeItem : public IceCreamItem {
public: 
    PreMadeItem(std::string name, std::string size);
    ~PreMadeItem(); 
    std::string composeItem() override;
    double getPrice() override;

private:
    std::string name;

}; 

#endif