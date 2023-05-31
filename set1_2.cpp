#include <bits/stdc++.h>

using namespace std;


int main()
{
    int mark;

    cout<<"Enter the mark obtained: ";
    cin>>mark;

    if(mark>100 || mark<0)
    {
        cout<<"Enter your Marks Between Limit(0-100)"<<endl;
    }
    else
    {
        switch(mark/10){
            case 10:
            case 9:
                cout<<"Your mark is between 90-100 and your grade is S"<<endl;
                break;
            case 8:
                cout<<"Your mark is between 80-89 and your grade is A"<<endl;
                break;
            case 7:
                cout<<"Your mark is between 70-79 and your grade is B"<<endl;
                break;
            case 6:
                cout<<"Your mark is between 60-69 and your grade is C"<<endl;
                break;
            case 5:
                cout<<"Your mark is between 50-59 and your grade is D"<<endl;
                break;
            case 4:
                cout<<"Your mark is between 40-49 and your grade is E"<<endl;
                break;
            default:
                cout<<"Mark is below 40 and your grade is F"<<endl;

        }

    }


    return 0;
}
