#include <iostream>

using namespace std;

class Phone{
    string model;
    float price;

    public:
        inline Phone(string model, float price){
            this->model = model;
            this->price = price;
        }
        inline float get_price(){
            return price;
        }

        inline string get_model(){
            return model;
        }
};

int main(){
        Phone iphoneX("IphoneX", 120000.36f);
        Phone Xiomi("Xiomi", 12000.36f);

            cout << "American smart phone model: " << iphoneX.get_model() << endl;
            cout << "American phone " << iphoneX.get_model() << " price: " << iphoneX.get_price() << endl;

            cout << "Chinese smart phone model: " << Xiomi.get_model() << endl;
            cout << "Chinese phone " << Xiomi.get_model() << " price: " << Xiomi.get_price() << endl;

    return 0;
}