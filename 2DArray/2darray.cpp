#include <iostream>

using namespace std;

const int r = 2, c = 2;

void function1(int arr[r][c]){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void function2(int arr[][c], int r){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void function3(int* arr, int r, int c){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++)
            cout << *(arr + i * c +  j) << " ";
        cout << endl;
    }
}

int main(){
        int arr[][2] = {{1,2}, {3,4}};
        function1(arr);
        cout << "--------" << endl;
        function2(arr, 2);
        cout << "--------" << endl;
        function3((int*)arr, 2, 2);
    return 0;
}