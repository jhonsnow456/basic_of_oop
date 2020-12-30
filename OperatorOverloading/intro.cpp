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

        Point operator-(const Point& p){
            this->x = this->x - p.x;
            this->y = this->y - p.y;

            return *this;
        }

        Point operator*(const Point& p){
            this->x = this->x * p.x;
            this->y = this->y * p.y;

            return *this;
        }

        Point operator/(const Point& p){
            if (!p.x and !p.y){
                this->x = this->x / p.x;
                this->y = this->y / p.y;

                return *this;
            } 
            else{
                cout << "Run time error!!" << endl;
                exit(0);
            }
        }

        void print(){
            cout << "Point: " << "(" << x << "," << y << ")" << endl;
        }
};

int main(){
        Point p1(2, 3), p2(4, 5);
        Point p3 = p1 + p2;
        Point p4 = p1 * p2;
        Point p5 = p1 - p2;
        // Point p6 = p2 / p1;

        p3.print();     
        p4.print();
        p5.print();
        // p6.print();

    return 0;
}