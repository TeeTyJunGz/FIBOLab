#include <iostream>

using namespace std;

int main(){

    int month = 30;
    float price = 0;
    float last_price = 0;
    float all_price = 0;

    cout << "input how much P'Pun eat on 1st day : ";
    cin >> price;
    last_price = price;

    for (int i = 1; i <= month; i++){
        if (i == 15){
            last_price = last_price;
        }
        else if (i%2 == 0){
            last_price = last_price * 1.2;
            all_price = all_price + last_price;
        }
        else if (i%2 != 0){
            last_price = last_price * 0.8;
            all_price = all_price + last_price;
        }
        
        cout << "Day " << i << " ";
        printf("%.2f\n", all_price);
    }

    return 0;
}