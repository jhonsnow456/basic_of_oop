#include <iostream>

using namespace std;

class Point{
    float x;
    float y;

    public:
        Point(float x = 0, float y = 0): x{x}, y{y}{};
        
        Point operator+(const Point& p){
            this->x = this->x + p.x;
            this->y = this->y + p.y;

            return *this;
        }

        void print(){
            cout << "Point: " << "(" << x << "," << y << ")" << endl;
        }
};

int main(){
        Point p1(2, 3), p2(4, 5);
        Point p3 = p1 + p2;

        p3.print();       
    return 0;
}