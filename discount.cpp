#include <iostream>
using namespace std;
int main()
{
    int n, arr[1000], i, j, a;
    cin >> n;
    for(i = 0;i < n;i++)
        cin >> arr[i];
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n - 1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(i = a = 0;i < n;i++)
    {
        if((i+1)%3)
        {
            a += arr[i];
        }
    }
    cout << a << endl;
    return 0;
}
