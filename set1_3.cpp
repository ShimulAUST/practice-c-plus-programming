#include<bits/stdc++.h>
using namespace std;

int main(){

    int number1,number2,input;

    cout<<"Enter the value of number1: ";
    cin>>number1;
    cout<<"\nEnter the value of number2: ";
    cin>>number2;

    cout<<"Press 1 for Addition(+)\nPress 2 for Subtraction(-)\nPress 3 for Multiplication(*)\nPress 4 for Division(/)\nPress 5 for Modulus(Remainder)(%)\nPress any other key for exit."<<endl;
    cin>>input;

    if(input == 1){
        cout<<"The summation is: "<<number1+number2<<endl;
    }
    else if(input == 2){
        cout<<"The subtraction is: "<<number1-number2<<endl;
    }
    else if(input ==3){
        cout<<"The multiplication is: "<<number1*number2<<endl;
    }
    else if(input == 4){
            if(number2>0){
                cout<<"The division is: "<<number1/number2<<endl;
            }
            else{
                cout<<"Please enter a non zero value as number2"<<endl;
            }

    }
    else if(input == 5){
        cout<<"The remainder is: "<<number1%number2<<endl;
    }
    else{
        exit(0);
    }


    return 0;
}
