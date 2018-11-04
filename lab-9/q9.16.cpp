/* Write a program to show string repeatedly by shifting top character of string right to left.  */

#include <iostream>//include library
using namespace std;
int main()
{
    char arr[20];char* p;
    cout<<"Input about 10 characters of string"<<endl;
    cin>>arr;
    p=&arr[0];
    //Descending way of printing the value of the array
    for(int i=9;i>=0;i--)
    {
        //printing the value of the array till the last term
        for(int j=i;j<10;j++)
        {
            cout<<*(p+j);
        }
        cout<<endl;//changing the row
    }
    return 0;
}
