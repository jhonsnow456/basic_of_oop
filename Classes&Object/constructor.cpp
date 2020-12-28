#include <iostream>

using namespace std;

class Point{
    double x, y;

    public:
        Point(){ x = 0, y = 0; cout << "Default Constructor! " << endl;}
        Point(double X, double Y){ x = X, y = Y; cout << "Parametrized Constructor! " << endl; }
        Point(const Point& p){ x = p.x, y = p.y; cout << "Copy Constructor!" << endl;}

        // getter function
        inline double getX() { return x; }
        inline double getY() { return y; }
    
        ~Point() { cout << "Destructor" << endl; }
};

int main(){
        Point p0;
        Point p1(1.3, 2.5);

        // Copy constructor
        // Point p2(p1); // method 1:
        Point p2 = p1; // method 2:

            cout << "x:" << p0.getX() << "\ty: " << p0.getY() << endl;
            cout << "x:" << p1.getX() << "\ty: " << p1.getY() << endl;
            cout << "x:" << p2.getX() << "\ty: " << p2.getY() << endl;

    return 0;
}