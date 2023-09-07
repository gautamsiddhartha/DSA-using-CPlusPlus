#include<iostream>
using namespace std;
int main()
{
    int arr[10], i, num;
    bool flag = 0;
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        cout<< "Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}