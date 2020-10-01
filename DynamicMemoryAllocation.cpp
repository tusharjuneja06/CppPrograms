#include<iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;
    cout<<"Enter no. of values you want to store (size of array):\n";
    cin>>size;

    ptr=new int[size];  //dynamically allocating memory
    cout<<"Enter values to be stored in the array\n";
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"Values of Array are:\n";
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}