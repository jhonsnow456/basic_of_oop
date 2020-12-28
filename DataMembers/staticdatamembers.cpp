#include <iostream>

using namespace std;

// Note a static member function can only acess static data member but a non static data member 
// function can acess both static and non static data member 

struct Base{
    int x;
    static int y;

    void printB1() { cout << "x: " << x << " " << "y: " << y << endl;}
    static void printstaticY() { 
        //cout << x << " " << y << endl;
        cout << "staic-y: " << y << endl;
    }
};

// since it is an static data memeber for all objects we need to 
// create the memory outside the class 

int Base::y;

int main(){
        Base b1;
        b1.x = 10; 
        b1.y = 20;

        b1.printB1(); // note that staic member are mutable but are common to all object and 
        // depends on last update by any object

        Base b2;
        b2.x = 20; 
        b2.y = 40;

        cout << "b1-x:" << b1.x << " " << "b2-x:" << b2.x << endl;
        cout << "b1-y:" << b1.y << " " << "b2-y:" << b2.y << endl;

        // --------------------------------------------------------

        b1.printB1();

        b2.printstaticY();
        Base::printstaticY(); // static member function can be ccalled in this way to it's 
        // do not require an object
    return 0;
}