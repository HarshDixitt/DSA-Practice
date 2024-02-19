// Total occurance of element in sorted array
#include <iostream>
using namespace std;

int firstoccurance(int arr[7] , int size , int target)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start <= end)
    {
        if(target == arr[mid])
        {
            ans = mid;
            end = mid -1;
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

int lastoccurance(int arr[7] , int size , int target)
{
    int start = 0;
    int end = size -1;
    int mid = start + (end -  start)/2;
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
        else if (target < arr[mid])
        {
            end =  mid -1;
        }
        mid = start + (end -  start)/2;
    }
    return ans;
}

int main()
{
    int arr[7] = {10,20,30,30,30,30,40};
    int size = 7;
    int target = 30;
    int Ans_1 = firstoccurance(arr , size , target);
    int Ans_2 = lastoccurance(arr , size ,target);
    int TotalOccurance = Ans_2 - Ans_1 + 1;
    cout <<"Total occurances is: " << TotalOccurance <<endl;
    return 0;
}
