//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include "baseclass.h"
#include "video.h"
#include "photo.h"

using std::cout;
using std::endl;

// Test
int main(int argc, const char* argv[])
{
    // Question 1
    std::cout << "Hello brave new world" << std::endl;
    
    // // Question 3
    // BaseClass *b1 = new BaseClass("Base Class 1", "test");
    // BaseClass *b2 = new BaseClass("Base Class 2", "test");

    // cout << b1->getName() << ", " << b1->getPathname() << endl;
    // cout << b2->getName() << ", " << b2->getPathname() << endl;

    // b1->setName("New Base class 1");
    // b2->setName("New Base class 2");

    // cout << b1->getName() << ", " << b1->getPathname() << endl;
    // cout << b2->getName() << ", " << b2->getPathname() << endl;

    // Question 4
    Video *v = new Video("Video 1", "test", 10);
    Photo *p = new Photo("Photo 1", "test", 10.1, 10.2);

    cout << v->getDuration() << endl;
    v->setDuration(11);
    cout << v->getDuration() << endl;

    cout << p->getLatitude() << " " << p->getLongitude() << endl;
    p->setLatitude(10.3); p->setLongitude(10.4);
    cout << p->getLatitude() << " " << p->getLongitude() << endl;
    

    return 0;
}
