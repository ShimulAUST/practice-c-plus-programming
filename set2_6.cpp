#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int vowelCount=0,nonAlphabeticCount = 0;

    getline(cin,str);


    for(int i=0;i<str.length();i++){
        if(str[i]=='a'|| str[i]=='A' || str[i]=='e'|| str[i]=='E' || str[i]=='i'|| str[i]=='I'|| str[i]=='o'|| str[i]=='O'|| str[i]=='u'|| str[i]=='U'){
            vowelCount++;
            if(vowelCount == 1){
                cout<<"Vowel Found at index : "<<i<<" and the vowel is : "<<str[i]<<endl;
            }
        }
        if(!(str[i]>='a' && str[i]<='z') && !(str[i]>='A' && str[i]<='Z')){
                cout<<str[i];
                nonAlphabeticCount++;
            }
    }

   cout<<"Total vowel count is : "<<vowelCount<<" and \nTotal non alphabetic char count is : "<<nonAlphabeticCount<<endl;


    return 0;
}
