#include <iostream>

using namespace std;

void Nay(int arr[], int len){
    cout << "arr = " << arr[24] << "\n";
    cout << "len = " << len << "\n";
    int out[2] = {0, 0};
    for (int i = 0; i < len; i++){
        int path = arr[i];
        switch (path)
        {
        case 1:
            out[0] = out[0] + 1;
            break;
        case 2:
            out[1] = out[1] - 1;
            break;
        case 3:
            out[0] = out[0] - 1;
            break;
        case 4:
            out[1] = out[1] + 1;
            break;
        default:
            break;
        }
    }
    cout << out[0] << ", " << out[1] << "\n";
}

int main(){
    int arr[] = {1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4};
    int len = sizeof(arr)/sizeof(arr[0]);
    Nay(arr,len);
    return 0;
}