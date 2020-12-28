#include <iostream>

using namespace std;

int main(){
        int arr[10] = {1, 2, 3, 4, 5};

        // Output: 1 2 3 4 5 0 0 0 0 0
            for (int i = 0; i < 10; i++) cout << arr[i] << " ";
        cout << endl;

        // Output: Array at 4th position: 5
        cout << "Array at 4th position: " << arr[4] << endl;
        cout << "Array at 4th position: " << 4[arr] << endl;
        cout << "Array at 4th posiiton: " << *arr + 4 << endl;

        // Address of our array : 0x7ffc13e22a50
        cout << "Address of our array : " << arr << endl; 

        cout << "Array at 0th position: " << *arr << endl;

    return 0;
}