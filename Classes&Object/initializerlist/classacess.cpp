#include <iostream>

using namespace std;

class One{
    int _x;
    public:
        One(int x): _x{x}{ cout << "_x: " << _x << endl;}
        int getX(){ return _x;}
};

class Two{
    One a;
    public:
        Two(One x): a{x}{cout << "_x: " << a.getX() << endl; }
        
        // Two(One x) {cout << "_x: " << a.getX() << endl;} -> err
};

int main(){
        One o(10);
        Two t(o);
    return 0;
}