//!
//Program to find the sizes of int,float,double and char in your system.
include <iostream>
using namespace std;

int main()  //main function
{    
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;    //sizeof() unary operator is used to find the size of specific datatype
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;    //cout is used to print text on the screen 
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;   
    cout << "Size of char: " << sizeof(char) << " byte" << endl;

    return 0;
}

Output:
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 byte
