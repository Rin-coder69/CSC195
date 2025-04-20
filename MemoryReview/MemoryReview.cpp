#include <iostream>
using namespace std;
struct Person
{
    char name[32];
    int id;
};

void Square(int& x)
{
    x = x * x;
}
void Double(int* y)
{
    y = y * 2;
}
int main()
{
    //  REFERENCE 
    //
    // declare an int variable and set the value to some number (less than 10)
    int num = 4;
    // declare a int reference and set it to the int variable above
    int& number = num;
    // output the int variable
    std::cout << number << endl;
    // set the int reference to some number
    number = 8;
    // output the int variable
    std::cout << number << endl;
    // what happened to the int variable when the reference was changed? (it changed the value from 4 to 8)
    // output the address of the int variable
    std::cout << &num << endl;
    // output the address of the int reference
    std::cout << &number << endl;
    // are the addresses the same or different? (same)
    //  REFERENCE PARAMETER 


    // create a function above main() called Square that takes in an int
    //parameter
    // in the function, multiply the int
    
        //to the parameter(i = i * i)
        // call the Square function with the int variable created in the REFERENCE
       // section
        Square(number);
    // output the int variable to the console
    std::cout << number << endl;
    // !! notice how the variable has not changed, this is because we only passed
    //the value to the function !!
    // change the Square function to take a int reference
    // !! notice how the calling variable has now changed, this is because we
    //'passed by reference' !!
    // !! when a function takes a reference parameter, any changes to the
   // parameter changes the calling variable ""
    //  POINTER VARIABLE 
    //
    // declare an int pointer, set it to nullptr (it points to nothing)
    int* p = nullptr;
    // set the int pointer to the address of the int variable created in the
    //REFERENCE section
    p = &number;
    // output the value of the pointer
    std::cout << p << endl;
    // what is this address that the pointer is pointing to? (00000031980FF8A4)
    // output the value of the object the pointer is pointing to (dereference the
    //pointer)
    std::cout << p << endl;
    //  POINTER PARAMETER 
    //
    // create a function above main() called Double that takes in an int pointer
    //parameter
    // in the function, multiply the int pointer parameter by 2 and assign it
    //back to the parameter(i = i 2)
    // !! make sure to dereference the pointer to set the value and not set the
   //address !!
    // call the Double function with the pointer created in the POINTER VARIABLE
   // section
    Double(p);
    // output the dereference pointer
    std::cout << *p << endl;

    // output the int variable created in the REFERENCE section
    std::cout << number << endl;
    // did the int variable's value change when using the pointer? 
    //no
}