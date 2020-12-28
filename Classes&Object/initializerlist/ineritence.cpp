#include <iostream>

using namespace std;

class Base{
    int _x;
    public:
        Base(int x):_x{x}{}
};

class Child: public Base{
    int _y;
    public:
        Child(int x, int y):Base {x}, _y{y} {}
};

int main(){
        Child c(1, 2);
    return 0;
}