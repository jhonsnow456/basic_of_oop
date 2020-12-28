#include <iostream>

using namespace std;

// note one class can inherit another class but it doesn't mean that if the former class contain 
// some friend function or class then the derived class also get acess to friend function
class Base{
    int x;
    public:
        Base(){}
        Base(int a):x{a}{}

        friend class GetSet;
};

class GetSet{
    public:
        void set(Base& o, int value){ o.x = value; }
        int get(Base& o) {return o.x;}
};
int main(){
        Base k(5);
        GetSet gs;

            gs.set(k, 20);
            cout << gs.get(k) << endl;

    return 0;
}