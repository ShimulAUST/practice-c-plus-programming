#include <bits/stdc++.h>

using namespace std;


int main()
{
    int number;
    cout<<"Enter an six digit number: ";
    cin>>number;

    int reverse_number = 0, sum =0;

    while (number != 0) {
        sum+=  number % 10;
        reverse_number = reverse_number * 10 + number % 10;
        number = number / 10;

    }
    cout << "Reverse of no. is " << reverse_number<<endl;
    cout << "Sum of the digits is:  " << sum<<endl;
    return 0;
}
