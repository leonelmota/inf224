#ifndef PHOTO_H
#define PHOTO_H

#include "baseclass.h"
#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Photo: public BaseClass{

private:
    double latitude = 0;
    double longitude = 0;

public:
    // Constructor without arguments
    Photo() {}

    // Constructor with arguments
    Photo(string name, string pathname, double latitude, double longitude)
        : BaseClass(name, pathname), latitude{latitude}, longitude{longitude} {}

    // getters
    double getLatitude() const{
        return this->latitude;
    }

    double getLongitude() const{
        return this->longitude;
    }

    // setters
    void setLatitude(double latitude){
        this->latitude = latitude;
    }

    void setLongitude(double longitude){
        this->longitude = longitude;
    }

    // Display
    void display(ostream & stream) const{
        BaseClass::display(stream);
        stream << "Class: Photo, Latitude: " << this->getLatitude() << ", Longitude: " << this->getLongitude() << "\n";
    }

    // Play
    void play() const override {
        string play_str = "imagej " + this->getPathname() + " &";
        system(play_str.data());
    }

};

#endif