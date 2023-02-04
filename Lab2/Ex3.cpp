#include <bits/stdc++.h>
using namespace std;

void callByValue(int var){
    var = 100;
}

void callByReference(int *var){
    *var = 200;
}


int main(){
    
    int var = 1;
    int var2 = 2;

    callByValue(var);
    callByReference(&var2);

    cout << var << "\n";
    cout << var2;

    return 0;
}