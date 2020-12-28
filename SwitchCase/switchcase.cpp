#include <iostream>

using namespace std;

int main(){
    int value;
        cout << "Enter the value: "; cin >> value;

        switch (value){
            case 1:
                cout << "One: " << value << endl;
                break;
            case 2:
                cout << "Two: " << value << endl;
                break;
            default:
                cout << "Wrong choice!!" << endl;
                break;
        } 
    return 0;
}