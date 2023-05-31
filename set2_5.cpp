#include<bits/stdc++.h>
using namespace std;


 int fibonacci(int num)
 {

    int a = 0,b = 1,c;
    if(num == 0){
       return 1;
      }
    else{
       for(int i=0;i<num;i++){
            c=a+b;
            a=b;
            b=c;
        }
        }

    return c;
 }

int factorial(int num)
 {
	 int fact=1;
	 if(num == 0){
        return 1;
	 }
     else{
        for(int i=num ;i>0;i--){
            fact=fact*i;
        }
        return fact;
     }
 }

 int main()
 {
     int n;
     int fact, fibo;
     cout<<"Enter length of series: ";
     cin>>n;
     cout<<"Number(n)\t\tfactorial(n!)"<< endl;
     for(int i=0;i<n;i++)
     {
         fibo=fibonacci(i);
         fact=factorial(fibo);

         cout <<fibo<<"\t\t\t"<<fact<<endl;

     }
     return 0;
 }
