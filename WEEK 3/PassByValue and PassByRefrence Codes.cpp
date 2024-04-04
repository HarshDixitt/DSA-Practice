// Author - Harsh Dixit
// Mail - harsh02.dixit@gmail.com


/* PASS BY VALUE
1]  When passed by value , a copy is created in the function
    that is to be called of the variable present in the main func.
    
2]  Both have diff addresses irrespective of their same variable 
    names or may be diff names.
    
3]  When we made changes in the variable that is copies in the called 
    functiom these changes will not reflect upon the variable present
    in main functiom.
*/

// Example - 01
#include<iostream>
using namespace std;

int passbyvalue(int a)
{
    a--;
    a/=7;
    cout << "Address inside function: " << &a << endl;
    cout << a << endl; // 7
}
int main()
{
    int a = 9;
    a++;
    a*=5;
    passbyvalue(a);
    cout << a << endl; //50
    cout << "Address inside main: " << &a << endl;
    return 0;
}

// Example - 02

#include<iostream>
using namespace std;

int passbyvalue(int a)
{
    a--;
    a*=10;
    cout << a << endl; //860
}
int main()
{
    int score = 86;
    score++;
    passbyvalue(score);
    cout << score << endl; //87
    return 0;
}

// NOTE: The variable score in main func is copied to 
//var a in passbyvalue func


//-------------------------------------------------------------------------

/*PASS BY REFRENCE

In case of passed by refrence , no copy is created but we are working on the actual
memory location in the called function.

Both have same address i.e the var in main function and called function whose var namespace
may or may not be same.

If we made changes in the var present in the called func these changes will reflect upon 
variable present in the main func.

'&' symbol is used for passing by refrence.

In pass by refrence diff var name is given to same mem location*/

// Example - 01 

#include<iostream>
using namespace std;

int passbyrefrence(int &a)
{
    a--;
    a/=7;
    cout << "Address inside function: " << &a << endl;//0x7fff4b5ff10c
    cout << a << endl; //7
}
int main()
{
    int x = 9;
    x++;
    x*=5;
    passbyrefrence(x);
    cout << x << endl; //7
    cout << "Address inside main: " << &x << endl;//0x7fff4b5ff10c
    return 0;
}

// Example - 02

#include<iostream>
using namespace std;

int passbyrefrence(int balak)
{
    balak--;
    cout << balak + 10<< endl; // 59
}
int main()
{
    int sundar = 9;
    sundar++;
    sundar*=5;
    passbyrefrence(sundar);
    cout << sundar << endl; // 50
    return 0;
}



