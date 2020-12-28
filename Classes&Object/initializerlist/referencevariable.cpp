#include <iostream>

using namespace std;

class Base{
    int& _x;
    public:
        Base(int k): _x{k}{cout << "_x:" << _x << endl;}

        // Base(int k){_x = k;} -> error
};

int main(){
        Base b(50);
    return 0;
}