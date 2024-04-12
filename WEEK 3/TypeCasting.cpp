/* TYPE CASTING
    Allow us to change the data type of a variable from one type to another.
    
    Crucial when we need to perform operations involving variables of different 
    data types , ansuring that the data is handled correctly.
    
    for instance, int   <---> char
                  float  <---> int
                  double  <---> int  etc.
                  
                  
                  
    TYPES OF TYPE CASTING
    
    1[ IMPLICIT TYPECASTING
    2]EXPLICIT TYPE CASTING

//---------------------------------------------------------------
    
IMPLICIT TYPE COVERSION/CASTING

Implicit Type Conversion Also known as ‘automatic type conversion’.

1] Done by the compiler on its own, without any external trigger from the user.

2] Generally takes place when in an expression more than one data type is present. 
   In such condition type conversion (type promotion) takes place to avoid lose of data.

3] All the data types of the variables are upgraded to the data type of the variable 
   with largest data type.
   
*/

#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int x = 10; // integer x 
    char y = 'a'; // character c 
  
    // y implicitly converted to int. ASCII 
    // value of 'a' is 97 
    x = x + y; 
  
    // x is implicitly converted to float 
    float z = x + 1.0; 
  
    cout << "x = " << x << endl 
         << "y = " << y << endl 
         << "z = " << z << endl; 
  
    return 0; 
}

//-----------------------------------------------------------------------------------------

/*EXPLICIT TYPE CONVERSION: This process is also called type casting and it is user-defined. 
Here the user can typecast the result to make it of a particular data type.

In C++, it can be done by two ways:

1] Converting by assignment: This is done by explicitly defining the required type in front of the 
expression in parenthesis. This can be also considered as forceful casting.

Syntax:


(type) expression
where type indicates the data type to which the final result is converted.
*/
// C++ program to demonstrate 
// explicit type casting 
  
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    double x = 1.2; 
  
    // Explicit conversion from double to int 
    int sum = (int)x + 1; 
  
    cout << "Sum = " << sum; 
  
    return 0; 
} 


/*2] Conversion using Cast operator: A Cast operator is an unary operator which forces one data type to be 
converted into another data type.
C++ supports four types of casting:

1] Static Cast
2] Dynamic Cast
3] Const Cast
4] Reinterpret Cast
*/

#include <iostream> 
using namespace std; 
int main() 
{ 
    float f = 3.5; 
  
    // using cast operator 
    int b = static_cast<int>(f); 
  
    cout << b; 
} 

//__________________________________________________________________________________________________
