// Author - Harsh Dixit

// Searcjing & Sorting part - 03

// DIVIDE USING BINARY SEARCH ->

// LOGIC - SEARCH SPACE

// Quotient * divisor + remainder = Dividend

#include <iostream>
#include<cstdlib>
using namespace std;

int getQuotient(int Dividend , int divisor)
{
    int s  = 0;
    int e = Dividend;
    int mid = s + (e - s)/2;
    int ans = -1;
    
    while(s <= e)
    {
        if(mid * divisor == Dividend)
        {
            return mid;
        }
        else if(mid * divisor < Dividend)
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

int main() {
	int Dividend = 27;
	int divisor = -7;
	
	int ans = getQuotient(abs(Dividend),abs(divisor));
	
	// When either Dividend or divisor is negative
	
	if(Dividend > 0 && divisor < 0 || Dividend < 0 && divisor > 0)
	{
	    ans = 0 - ans;
	}
	cout << "Quotient is: " << ans << endl;
	return 0;
}

//---------------------------------------------------------------------------

// Find odd occuring Element

#include<iostream>
#include<vector>
using namespace std;

int findOddElement(vector<int>&v)
{
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    
    while(s <= e)
    {
        if(s == e)
        {
            return s;
        }
        else if(mid % 2 == 1)
        {
            if(mid - 1 > 0 && v[mid - 1] == v[mid])
            {
                s  = mid + 1;
            }
            else
            {
            e = mid - 1;
            }
        }
        else
        {
            if(mid + 1 < n && v[mid] == v[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        mid =  s + (e - s)/2;
    }
    return -1;
}


int main()
{
    vector<int>v = {4,4,5,5,6,6,7,7,6};
    
    int ans = findOddElement(v);
    
    cout << "Odd Occuring Element: " << v[ans] << endl;
}


//---------------------------------------------------------------------------

// Binary Search in nearly sorted array

// Nearly sorted array - The element at ith index in sorted array may be 
    // present at (i - 1)th , ith or (i + 1)th indices in the nearly sorted 
    // array.
    
    // Let a sorted array - 12,24,36,48,60,72
    // In Nearly sorted array - 24,12,48,36,72,60
    

#include<iostream>
#include<vector>
using namespace std;

int nearlySorted(vector<int>&v , int target)
{
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    
    while(s <= e)
    {
        if(mid - 1 >= 0 && v[mid - 1] == target)
        {
            return mid - 1;
        }
        else if(v[mid] == target)
        {
            return mid;
        }
        else if(mid + 1 < n && v[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (v[mid] < target)
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
    
    
    
int main()
{
    vector<int>v = {24,12,48,36,72,60};
    int target = 72;
    
    int ans = nearlySorted(v,target);
    
    if(ans == -1)
    {
        cout << "Target not found" << endl;
    }
    else{
        cout << "Target found at index: " << ans << endl;
    }
    return 0;
}














