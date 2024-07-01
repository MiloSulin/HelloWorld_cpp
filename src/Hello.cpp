#include <iostream>
#include "Hello.h"
using namespace std;

Hello::Hello() : message("Hello world!"){}

void Hello::print(){
    cout << message << "\n";
}