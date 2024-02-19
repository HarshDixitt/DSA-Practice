#include <iostream>
using namespace std;

int lastOccurance(int arr[8] , int n , int target)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start <= end)
    {
        if(target == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if(target > arr[mid])
        {
            start = mid + 1;
        }
        else if(target < arr[mid])
        {
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int arr[8] = {10,20,40,40,40,40,80,90};
    int n = 8;
    int target = 40;
    int ansIndex = lastOccurance(arr , n , target);
    if(ansIndex == -1)
    {
        cout << "Element not found....";
    }
    else
    {
        cout<< "Element last occurance found at: " <<ansIndex << endl;
    }
    return 0;
}
