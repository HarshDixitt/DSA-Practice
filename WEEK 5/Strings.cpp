/* 
    STRINGS - sequence of characters.Unlike array, where size is static,
             the size of strings can be changed at runtime i.e they are 
             dynamic in nature.
             
             
    CREATION: string name;
    
    ACCESS:   name[index];
    
    INPUT:   cin >> name; this input will not read '_'
    
             getline(cin,name); this will read '_' & '\t'
            
	OUTPUT:  cout << name;
----------------------------------------------------------------------------------------------
*/		 

#include<iostream>
using namespace std;

int main()
{
	string name;
	getline(cin,name);
	cout << "Printing String: " << name << endl;
	cout << "Printing first charater: " << name[0] << endl;
	cout << "Printing first character ASCII value: " << (int)name[0] << endl;
	
	cout << "Using loop for printing characters: " << endl;
	int index = 0;
	while(name[index] != 0)
	{
		cout << "index: " << index << "character: " << name[index] << endl;
		index++;
	}
	
	cout << "Print 5th character: " << name[5] << endl;
	cout << "Printing 5th character ASCII value: " << (int)name[5] << endl;
}


//------------------------------------------------------------------------------------------------------

/* INBUILT FUNCTIONS IN STRINGS

1] name.length() => to find string length.

2] name.empty() => to check whether string is empty or not.

3] name.at[index] => to access particular index of string.

4] name.front() => to find front character.

5] name.back() => to find back character.
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string name;
	getline(cin,name);
	
	cout << name.length() << endl;
	cout << name.empty() << endl;
	cout << name.at(4) << endl;
}

//------------------------------------------------------------------------------------------------------

// APPEND STRING -> to concatenate two strings

// str1.append(str2)

#include<iostream>
using namespace std;
int main()
{
	string str1 = "Harsh";
	string str2 = "Dixit";
	cout << "Before append" << endl;
	cout << str1 << endl;
	cout << str2 << endl;
	
	cout << "After append" << endl;
	str1.append(str2);
	cout << str1 << endl;
	cout << str2 << endl;
}

//------------------------------------------------------------------------------------------------------

// ERASE STRING CHARACTERS

#include<iostream>
using namespace std;
int main()
{
	string str = "This is an example sentence";
	str.erase(10,8);
	cout << str << endl;
	
	str.erase(str.begin() + 9);
	cout << str << endl;
	
	str.erase(str.begin() + 5 , str.end() - 8);
	cout << str << endl;
}


//------------------------------------------------------------------------------------------------------

// INSERT

#include<iostream>
using namespace std;
int main()
{
	string str1 = "Touch sky with glory";
	string str2 = "the";
	str1.insert(6,str2);
	
	cout << str1 << endl;
	return 0;
}


//------------------------------------------------------------------------------------------------------

// PUSH AND POP BACK

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1 = "Harsh";
	str1.push_back('r');
	cout << str1 << endl;
	str1.pop_back();
	cout << str1 << endl;
	return 0;
}


//------------------------------------------------------------------------------------------------------

// FIND

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1 = "Harsh Dixit is learning DSA";
	string str2 = "is";
	
	if(str1.find(str2) == string::npos)
	{
		cout << "not found" << endl;
	}
	else
	{
		cout << "found" << endl;
	}

	return 0;
}

//------------------------------------------------------------------------------------------------------

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1 = "Harsh";
	string str2 = "Harsh";
	
	if(str1.compare(str2) == 0)
	{
		cout << "Matching" << endl;
	}
	else
	{
		cout <<"Not matching" << endl;
	}
    return 0;
}

//------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;
int main()
{
	string str = "What are you playing";
	cout << str.substr(9,3) << endl;
}




