#include <iostream>

using namespace std;

void update1(int arr[], int size){
    for (int i = 0; i < size; i++) 
        cout << arr[i] + 10 << " ";
    cout << endl;
}

void update2(int* arr, int size){
    for (int i = 0; i < size; i++) 
        // cout << arr[i] + 10 << " ";
        cout << i[arr] + 10 << ' ';
    cout << endl;
}

void update3(int* arr, int size){
    for (int i = 0; i < size; i++) 
        cout << *arr + i + 10 << " ";
    cout << endl;
}

int main(){
        int arr[] = {1, 2, 3, 4, 5}, size;

        size = sizeof(arr)/sizeof(arr[0]);

        for (int i = 0; i < size; i++) 
            cout << arr[i] << " ";
        cout << endl;

            update1(arr, size);
            update2(arr, size);
            update3(arr, size);
        
        for (int i = 0; i < size; i++) 
            cout << arr[i] << " ";
        cout << endl;
    return 0;
}