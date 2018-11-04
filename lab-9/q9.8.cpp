/*Write a function myStrLen(char*) which returns the length of the parameter cstring. 
Write the function without using the C++ function strlen.*/
#include <iostream>// include library
using namespace std;
int myStrLen(char* p) // creating the function for calculating the string length
{
    int count=0;
    for(int i=0;*(p+i)!='\0';i++)//Loop to count the length
    {
        count++;
    }
    return count;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<< endl; // asking user for the array size
    char arr[size];//Declaration of the array
    cout<<"Enter the string:"<<endl;
    cin>>arr;
    char* p=&arr[0];//a pointer to the array
    cout<<"Length of the string:"<<myStrLen(p);//function call to the array to calculate the length
    return 0;
}
