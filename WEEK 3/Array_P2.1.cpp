// Print all pairs for the elements in the array

#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10,20,30};
    int n = 3;
    
    for(int i=0; i < n; i++)
    {
        for(int j = 0;j < n;j++)
        {
            cout << arr[i] << "," << arr[j] <<endl;
        }
        cout << endl;
    }
	return 0;
}

//---------------------------------------------------------

// SORTING 0'S AND 1'S IN ARRAY

#include <iostream>
using namespace std;

void sortZeroOne(int arr[] , int n)
{
    // for counting zeros and ones
    int zerocount = 0;
    int onecount = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            zerocount++;
        }
        else if(arr[i] == 1)
        {
            onecount++;
        }
    }
    
    //for SORTING
    int index = 0;
    while(zerocount--)
    {
        arr[index] = 0;
        index++;
    }
    while(onecount--)
    {
        arr[index] = 1;
        index++;
    }
    
}

int main() {
    int arr[7] = {0,0,1,0,1,0,1};
    int n = 7;
    sortZeroOne(arr,n);
    
    
    // for printing sorted array
    
    for(int i =0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
    
    
//---------------------------------------------------------

// SHIFT ARRAY BY ONE
    
#include <iostream>
using namespace std;

void SHIFTARRAY(int arr[] , int n)
{
    // store arr[n-1]
    int temp = arr[n-1];
    
    // shift --> arr[i] = arr[i-1]
    for(int i = n-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    
    // copy temp into other index
    arr[0] = temp;
}

int main() {
    int arr[7] = {10,20,30,40,50,60,70};
    int n = 7;
    SHIFTARRAY(arr,n);
    
    for(int i =0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    