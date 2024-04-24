// Author - harsh Dixit

// Program Pivot index

#include<iostream>
using namespace std;

int PivotIndex(int arr[],int size)
{
    int s = 0;
    int e = size - 1;
    int n = size;
    int mid = s + (e - s)/2;
    
    while(s <= e)
    {
        if(s == e)
        {
            return s;
        }
        else if(mid + 1 < n && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if(mid - 1 > 0 && arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }
        else if(arr[s] > arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    mid = s +(e - s)/2;
    }
    return -1;
}


int main()
{
    int arr[] = {12,14,16,2,4,6,8,10};
    int size = 8;
    int pivot = PivotIndex(arr,size);
    cout << "Pivot index is: " << pivot << endl;
    return 0;
}

//----------------------------------------------------------------------


// 2D ARRAY TO 1D ARRAY COVERSION -> c * i + j
// ID TO 2D ARRAY CONVERSION - RowNo = index/col , ColNo = index % col

#include <iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<vector<int>>&v,int target)
{
    int row = v.size();
    int col = v[0].size();
    int n = row * col;
    int s  = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    
    while( s <= e)
    {
        int rowIndex = mid/col;
        int colIndex = mid%col;
        int currNumber = v[rowIndex][colIndex];
        
        if(currNumber == target)
        {
            return true;
        }
        else if(currNumber > target)
        {
            e =  mid - 1;
        }
        else 
        {
            s =  mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}


int main()
{
    vector<vector<int>>v = {{1,2,3},{4,5,6},{7,8,9}};
    int target = 7;
    
    int ans = binarySearch(v,target);
    if(ans == 1)
    {
        cout << "Target found";
    }
    else
    {
        cout << "Not found.";
    }

	return 0;
}


//---------------------------------------------------------------------

// Square root of a number (return only integer)

#include<iostream>
using namespace std;

int sqRoot(int &num)
{
    int s = 0;
    int e = num;
    long long int mid = s + (e - s)/2;
    int ans;
    
    while( s<= e)
    {
        if(mid * mid == num)
        {
            return mid;
        }
        else if(mid * mid < num)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main()
{
    int num = 124;
    int sq_root = sqRoot(num);
    
    cout << "Square root is: " << sq_root;
    return 0;
}

//---------------------------------------------------------------------

