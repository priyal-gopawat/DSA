//reverse of array.
#include <bits/stdc++.h>
using namespace std;
void reversearr(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>> arr[i];
    reversearr(arr,n);
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";


    return 0;
}
