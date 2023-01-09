#include "baseclass.h"
#include <string>
#include <iostream>

using std::string;
using std::ostream;

// getters
string BaseClass::getName() const{
    return this->name;
}
string BaseClass::getPathname() const{
    return this->pathname;
}

// setters 
void BaseClass::setName (string name){
    this->name = name;
}
void BaseClass::setPathname (string pathname){
    this->pathname = pathname;
}

// Display
void BaseClass::display (ostream & stream) const{
    stream << "Name: " << this->name << ", Pathname: " << this->pathname << ", ";
}