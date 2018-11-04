/* Create an array of size 10. 
Use a loop to print array using the normal index method as well as the pointer method. */

#include <iostream>//include library
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};// declaration and direct assingment of value to the array
    //general way of printing the array
    cout<<"Using normal index method"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Using pointer method"<<endl;
    //Output of by using the array
    int* p=&arr[0];
    for(int i=0;i<10;i++)
    {
        cout<<*(p+i)<<" ";
    }
    return 0;
}
