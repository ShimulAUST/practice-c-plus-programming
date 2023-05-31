#include <bits/stdc++.h>
using namespace std;

int modifiedNumber(int number)
{
	int arr[6],sum = 0;

	for(int i = 0;i < 6;i++)
	{
		arr[i] = number%10;
		number/=10;
	}

    sort(arr, arr + 6, greater<int>());

    for(int j = 0;j < 6;j++)
    {
        sum+= arr[5-j]*pow(10,j);
    }

    return sum;
}

int main()
{
	int num1,num2,num3;
	int num1Modified,num2Modified,num3Modified;

	cout<<"Enter three Six Digit numbers: ";
	cin>>num1>>num2>>num3;

	num1Modified=modifiedNumber(num1);
	num2Modified=modifiedNumber(num2);
	num3Modified=modifiedNumber(num3);

	cout << "Numbers and its modified numbers are : " <<endl;
    cout << "Number1:\t" << num1 << "\tModified1:\t" << num1Modified << endl;
    cout << "Number2:\t" << num2 << "\tModified2:\t" << num2Modified << endl;
    cout << "Number3:\t" << num3 << "\tModified3:\t" << num3Modified << endl;

	  if(num1Modified > num2Modified && num1Modified > num3Modified){
        cout<<"The largest modified number among 3 six digit number is num1Modified and the number is: " << num1Modified;
	  }
	  else if(num2Modified > num1Modified && num2Modified > num3Modified){
        cout<<"The largest modified number among 3 six digit number is num2Modified and the number is: " << num2Modified;
	  }
	  else{
        cout<<"The largest modified number among 3 six digit number is num3Modified and the number is: " << num3Modified;
      }

	  return 0;
}

