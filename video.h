#ifndef VIDEO_H
#define VIDEO_H

#include "baseclass.h"
#include <string>
#include <iostream>

using std::ostream;
using std::string;

class Video: public BaseClass{

private:
    int duration = 0;

public:
    // Constructor without arguments
    Video() {}

    // Constructor with arguments
    Video(string name, string pathname, int duration)
        : BaseClass(name, pathname), duration{duration} {}

    // getter
    int getDuration() const{
        return this->duration;
    }

    // setter
    void setDuration(int duration){
        this->duration = duration;
    }

    // Display
    void display(ostream & stream) const{
        BaseClass::display(stream);
        stream << "Class: Video, Duration: " << this->getDuration() << "\n";
    }

    // Play
    void play() const override {
        string play_str = "mpv " + this->getPathname() + " &";
        system(play_str.data());
    }

};

#endif