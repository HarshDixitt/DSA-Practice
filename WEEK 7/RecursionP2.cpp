AUTHOR - HARSH DIXIT
MAIL - harsh02.dixit@gmail.com


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

#include<iostream>
#include <climits>
using namespace std;

void minimum(int *arr , int size , int index , int &mini)
{
	//Base case
	if(index >= size)
	{
		return;
	}
	//Processing
	mini = min(min,arr[index]);
	
	//Recursive call
	minimum(arr,size,++index,mini);
}

int main()
{
	int arr[] = {1,6,9,45,34,23};
	int size = 6;
	int index = 0;
	int mini = INT_MAX;
	minimum(arr,size,index,mini);
	cout << mini << endl;
}

//-------------------------------------------------------

