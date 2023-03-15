#include <bits/stdc++.h>
using namespace std;

void A2B(int *a, int *b){
    int tem;
    tem = *b;
    *b = *a;
    *a = tem;

}

int main(){
    
    int a = 1;
    int b = 2;
    A2B(&a,&b);
    cout << "a : " << a << "\n" << "b : " << b << "\n";

    return 0;
}