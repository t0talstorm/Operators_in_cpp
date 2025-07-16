// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1 
// Expt - 3A

#include <iostream>
using namespace std;

int main() {
    float a;
    cout << "Please enter a number : ";
    cin >> a;
    if (a > 0){
        cout <<"The number "<< a <<" is positive";
    }else if(a <0){
        cout << "The number "<< a << " is negative";
    }else{
        cout << "The number is zero. ";
    }
    
    return 0;
}
/*
OUTPUT:

Please enter a number : -45
The number -45 is negative

=== Code Execution Successful ===    

Please enter a number : 22
The number 22 is positive

=== Code Execution Successful ===
*/
