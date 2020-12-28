#include <iostream>

using namespace std;

struct Base{
    int x;
    int y;
};

int main(){
        Base b1, b2;
            b1.x = 10; b1.y = 20;
            b2.x = 20; b2.y = 30;
        
        cout << b1.x << " " << b1.y << endl;
        cout << b2.x << " " << b2.y << endl;

    return 0;
}
