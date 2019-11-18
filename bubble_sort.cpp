#include <iostream>
using namespace std;

int main(){
    int n,q = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int j = 0; j < n - 1; j++){
        for (int i = 0; i < n - 1 - j; i++){
            if (arr[i] > arr[i + 1]){
                swap (arr[i],arr[i+1]);
                q++;
            }
        }
    }
    cout << q;
    return 0;
    }
