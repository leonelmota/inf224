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
    
    // Question 5
    BaseClass **base_class_array = new BaseClass *[3];

    base_class_array[2] = new Video("Video 1", "videos/video1", 10);
    base_class_array[0] = new Photo("Photo 1", "images/MRI_brain_sag.png", 0.1, 0.01);
    base_class_array[1] = new Photo("Photo 2", "images/peppers_gt.png", 0.2, 0.02);

    for (int i=0; i<3; i++){
        base_class_array[i]->display(cout);
        base_class_array[i]->play();
    }

    delete [] base_class_array;

    return 0;
}
