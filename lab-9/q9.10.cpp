//Write a function revString(char*) which reverses the parameter cstring.  The function returns nothing.
#include <iostream>//include library
using namespace std;
void revtString(char* p)
{
    int end;
    int count=0;
    for(int i=0;(*(p+i))!='\0';i++)//Loop to determine the array size 
    {
        count++;
    }
    end=count-1;
    for(int i=end;i>=0;i--)//printing the value in reverse way
    {
        cout<<*(p+i);
    }
}
int main()
{
    int size;
    cout<<"Enter max size"<<endl;
    cin>>size;
    char arr[size];//declaration of the array with maximum size
    cout<<"Enter input to array"<<endl;
    cin>>arr;
    
    char* p=&arr[0];
    revtString(p); // function call to reverse the input
    return 0;
}
