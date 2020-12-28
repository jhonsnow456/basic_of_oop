#include <iostream>
#include <vector>

using namespace std;

void print(int value) {
    cout << "Value: " << value << endl;
}

void for_each(const vector<int>& arr, void (*func)(int)){
    for (int i: arr) 
        func(i);
}

int main(){
        vector<int> arr = {5, 6, 7, 8, 9};
            for_each(arr, print);
        cout << "--------------" << endl;
        // Aplication of lambda function
        for_each(arr, [](int value){cout << "value: " << value << endl;});

    return 0;
}