#ifndef BASECLASS_H
#define BASECLASS_H

#include <iostream>
#include <string>

using std::string;
using std::ostream;

class BaseClass{

    string name = "";
    string pathname = "";

public:

    // Constructor without arguments
    BaseClass(): name(""), pathname(""){
    }

    // Constructor with arguments
    BaseClass(string name, string pathname): name(name), pathname(pathname) {
    }

    // Destructor
    ~BaseClass(){}

    // getters
    string getName() const;
    string getPathname() const;

    // setters 
    void setName (string name);
    void setPathname (string pathname);
    
    // Display
    virtual void display(ostream & stream) const = 0;


};

#endif 