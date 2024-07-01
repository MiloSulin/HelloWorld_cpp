#ifndef __HELLO_H__
#define __HELLO_H__
#include <string>
using namespace std;

class Hello{
    private:
        const string message;
    public:
        Hello();
        void print();
};

#endif