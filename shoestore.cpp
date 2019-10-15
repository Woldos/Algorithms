#include <iostream>
using namespace std;

int main(){
    int n,r,q = 0;
    bool x = false;
    cin >> r >> n;
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int j = 0; j < n - 1 - j; j++){
        for (int i = 0; i < n - 1; i++){
            if (arr[i] > arr[i+1])
                swap (arr[i], arr[i+1]);
        }
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[j] >= r && x == false){
                q++;
                r = arr[j];
                x = true;
            }
            if(arr[j] >= r+3){
                q++;
                r = arr[j];
            }
        }
        break;
    }
    cout << q;
    return 0;
}
