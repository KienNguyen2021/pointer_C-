
#include <iostream> 
using namespace std; 
int main() 
{     
  int a = 5; //Declare and initialize a variable

  // int * b = 0;
  // int* b = 0 ;                
  // int *b = 0;
  // int *b; 
  int *b = 0; // Create a new pointer of type int and initialize it with 0
  cout << "\"b\" is initialized and now pointing to memory-address:  " << b << endl << endl;

//Now make the pointer "point" to the address of a
  b = &a; //"b" now points to the address of "a"

  cout << "\"a\" is stored at memory-address:  " << &a << endl;
  cout << "\"b\" is stored at memory-address:  " << &b << endl;
  cout << "\"b\" is pointing to memory-address now:  " << b << endl << endl;

  cout << "The value of \"a\" is: " << a << endl;  // returns the value of a

  //the "*b" will get the value from the address b points to (the value of a)
  cout << "The value of the area \"b\" is pointing to is: " << *b << endl << endl << endl;

//Now modify the value of the address "b" is pointing to...effectively changing the value of "a"     
  *b=10;

  cout << "\"a\" is still stored at memory-address:  " << &a << endl;
  cout << "\"b\" is still stored at memory-address:  " << &b << endl;
  cout << "\"b\" is still pointing to memory-address:  " << b << endl << endl;

  cout << "The value of \"a\" is now: " << a << endl;  // returns the value of a
  cout << "The value of the area \"b\" is pointing to is now: " << *b << endl << endl;
return 0;

}