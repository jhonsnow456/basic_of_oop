#include <iostream>

using namespace std;

class Base{
    const int _x = 10;
    public:
        Base():_x{20} {cout << "_x:" << _x << endl;}
        Base(int k): _x{k}{cout << "_x:" << _x << endl;}

        // Base() { _x = 30; cout << "_x:" << _x << endl;} -> error
};

int main(){
        Base b1, b2(50);
    return 0;
}