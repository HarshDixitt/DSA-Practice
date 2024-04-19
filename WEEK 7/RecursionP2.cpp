// RECURSION PART 02

// Array printing using recursion

#include<iostream>
using namespace std;

void printArray(int arr[] , int size , int index)
{
	//Base case
	if(index >= size)
	{
		return;
	}
	//Processing
	cout << *(arr + index) << " ";
	
	//Recursive Call
	printArray(arr,size,index+1);
}

int main()
{
	int arr[] = {1,2,4,5,6};
	int size = 5;
	int index = 0;
	printArray(arr,size,index);
}

//--------------------------------------------------------------

// Search target in Array -->

#include<iostream>
using namespace std;

bool FindTarget(int arr[] , int size , int target ,int index)
{
	//Base case
	if(index >= size)
	{
		return 0;
	}
	if(arr[index] == target)
	{
		return 1;
	}

	// Recursive call -- rest array traverse recursion krdega
    bool aagekaans = FindTarget(arr,size,target,index+1);
    return aagekaans;
}

int main()
{
	int arr[] = {10,20,40,50,60};
	int size = 5;
	int index = 0;
	int target = 50;
	int answer = FindTarget(arr,size,target,index);
	if(answer == 1)
	{
		cout << "Target Found..";
	}
	else{
		cout << "Not Found..";
	}
}

//-------------------------------------------------------------

// Find Minimum in array using recursion

#include <iostream> 
using namespace std; 

// function to print Minimum element using recursion 
int findMinRec(int A[], int n) 
{ 
	// if size = 0 means whole array has been traversed 
	if (n == 1) 
		return A[0]; 
	return min(A[n-1], findMinRec(A, n-1)); 
} 

// driver code to test above function 
int main() 
{ 
	int A[] = {1, 4, 45, 6, -50, 10, 2}; 
	int n = sizeof(A)/sizeof(A[0]); 
	cout << findMinRec(A, n); 
	return 0; 
} 


//-------------------------------------------------------

// Recursive C++ program to find maximum 

#include <iostream> 
using namespace std; 

// function to return maximum element using recursion 
int findMaxRec(int A[], int n) 
{ 
	// if n = 0 means whole array has been traversed 
	if (n == 1) 
		return A[0]; 
	return max(A[n-1], findMaxRec(A, n-1)); 
} 

// driver code to test above function 
int main() 
{ 
	int A[] = {1, 4, 45, 6, -50, 10, 2}; 
	int n = sizeof(A)/sizeof(A[0]); 
	cout << findMaxRec(A, n); 
	return 0; 
} 

//-------------------------------------------------------

// Find even in the array

#include<iostream>
#include<vector>
using namespace std;

void findEven(int *arr,int size,int index,vector<int>&ans)
{
	//Base case
	if(index >= size)
	{
		return;
	}
	//Processing 
	if((arr[index] & 1) == 0)
	{
		ans.push_back(arr[index]);
	}
	//Recursive call
	findEven(arr,size,index+1,ans);
}

int main()
{
	int arr[] = {1,3,5,6,7};
	int size = 5;
	int index = 0;
	vector<int>ans;
	findEven(arr,size,index,ans);
	for(auto num:ans)
	{
		cout << num << " ";
	}
}

//-------------------------------------------------------

// Double the array  --->

#include<iostream>
using namespace std;

void doubleArray(int arr[] , int size , int index)
{
	//Base case
	if(index >= size)
	{
		return;
	}
	//Processing
	arr[index] *= 2;
	//Recursive call
	doubleArray(arr,size,index+1);
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int size = 5;
	int index = 0;
	doubleArray(arr,size,index);
	for(auto num: arr)
	{
		cout << num << " ";
	}
}

//-------------------------------------------------------

// Find occurance of target element

#include<iostream>
#include<vector>
using namespace std;

void searchTarget(int *arr,int size,int index,int target,vector<int>&ans)
{
	//Base case
	if(index >= size)
	{
		return;
	}
	//Processing 
	if(arr[index] == 0)
	{
		ans.push_back(index);
	}
	//Recursive call
	searchTarget(arr,size,index+1,target,ans);
}

int main()
{
	int arr[] = {1,3,6,6,7};
	int size = 5;
	int index = 0;
	int target = 6;
	vector<int>ans;
	searchTarget(arr,size,index,target,ans);
    cout << "Indices where target found: ";
    for(auto num:ans)
    {
    	cout << num << " ";
	}
}

//-------------------------------------------------------
