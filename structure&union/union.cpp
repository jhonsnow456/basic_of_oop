#include <iostream>

using namespace std;

// union Square{
//     float height;
//     float width;
// };

// inline float getArea(float height, float width){
//     return height * width;
// }

// int main(){
//     Square edge;
//         cout << "Enter the edge: "; cin >> edge.width;
//         cout << "Area of the square is: " << getArea(edge.height, edge.width) << endl;
//     return 0;
// }

/**
 * 1 byte = 8 bits
 * 8 bits = 0, 1, 2, ....., 255 combinatiion(+ve & -ve value)
 * 
 * char stores 1 byte 
 * int 
*/
union Bytes{
    char bytes[1];
    // char bytes[4];
    unsigned int value;
};

int main(){
    Bytes u;

        cout << "Enter the value: "; cin >> u.value;
        cout << (int)u.bytes[0] << endl;

        // cout << (int)u.bytes[0] << " " << (int)u.bytes[1] << " " << (int)u.bytes[2] << " " << (int)u.bytes[3] << endl;

    return 0;
}
