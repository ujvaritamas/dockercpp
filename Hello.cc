#include "Hello.hh"
#include <iostream>
using namespace std;

Hello::Hello(){
    x = 3;
}

Hello::~Hello(){
    cout << "Destructor called/n";
}

int Hello::getx(){
    return x;
}

void Hello::setx(int inpx){
    x = inpx;
}