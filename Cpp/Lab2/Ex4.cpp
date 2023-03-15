#include <bits/stdc++.h>
using namespace std;

tuple<int,int> A2B(int a, int b){
    return make_tuple(b,a);
}

int main(){
    
    int a = 1;
    int b = 2;

    tie(b,a) = A2B(a,b);

    cout << "a : " << a << "\n" << "b : " << b << "\n";

    return 0;
}