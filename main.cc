#include <iostream>
#include "Hello.hh"
using namespace std;


void test(){
    Hello* h = new Hello();
    cout << h->getx()<< std::endl;
    h->setx(5);
    cout << h->getx()<< std::endl;
    delete h;
}


int main(int argc, char const *argv[])
{
    std::cout << "Hello Docker container i am here!" << std::endl;

    //Hello h;
    test();

    cout << "bye" << std::endl;
    return 0;
}