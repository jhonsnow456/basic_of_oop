#include <iostream>
#include <array>

using namespace std;

class Point{
    array<int, 2> arr;
    public:
        Point (int x = 0, int y = 0){
            arr[0] = x;
            arr[1] = y;
        }

        void print(){
            cout << "Point: " << "(" << arr[0] << "," << arr[1] << ")" << endl;
        }

        int& operator[](int position){
            if (position == 0) return arr[position];
            else if (position == 1) return arr[position];
            else {
                cout << "Segmentation error!" << endl;
                exit(0);
            }
        }
};

int main(){
    Point p(2, 3);
        p.print();
        p[0] = 5;
        p[1] = 6;
        p.print();
    return 0;
}