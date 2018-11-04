/*Write a function countEven(int*, int) which receives an integer array and its size,
and returns the number of even numbers in the array.*/
#include <iostream>
using namespace std;
int countEven(int* ptr,int size)
{
    int count=0;
    for(int i=0;i<size;i++) // call of the loop for iteration
    {
        if(*(ptr+i)%2==0)// condition check for even filtration
        {
            count++;// increment count for counting the number of even number
        }
    }
    return count;
}
int main()
{
    
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter input to array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int* p=&arr[0];//Point to array
    cout<<"No. of even numbers:"<<countEven(p,size);//call the function
}
