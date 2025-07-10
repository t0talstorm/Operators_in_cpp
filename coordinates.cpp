// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1 
// Expt - 3C

#include <iostream>
using namespace std;

int main() {
    float x , y;
    cout << "Please enter x cordinate : ";
    cin >> x;
    cout << "Please enter y cordinate : ";
    cin >> y;

    cout<<"Coordinates x = "<< x <<" , y = " << y << " is located in : ";
    
    if(x > 0 && y > 0){
        cout << "1st Quadrant";
    }else if(x<0 && y>0){
        cout<<"2nd Quadrant";
    }else if(x < 0 && y < 0){
        cout<<"3rd Quadrant";
    }else if(x > 0 && y<0){
        cout<<"4th Quadrant";
    }else if(x == 0 || y == 0){
        cout<<"The axis";
    }else{
        cout << "Origin";
    }
    return 0;
}
/*
Output: 

Please enter x cordinate : -2 
Please enter y cordinate : -2
Coordinates x = -2 , y = -2 is located in : 3rd Quadrant

=== Code Execution Successful ===


Please enter x cordinate : 3
Please enter y cordinate : 3
Coordinates x = 3 , y = 3 is located in : 1st Quadrant

=== Code Execution Successful ===
*/
