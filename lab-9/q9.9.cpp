/*Write a function contains(char*, char)
which returns true if the 1st parameter cstring contains the 2nd parameter char, or false otherwise.*/
#include <iostream>//include library
using namespace std;
bool contains(char* p,char c)
{
    char t='\0';
    for(int i=0;*(p+i)!='\0';i++)//check of each character of the string
    {
        if(*(p+i)==c)//matching checkation of the array's character with that of the given character
        t=*(p+i);//Assign the value to new variable
    }
    if(t!='\0')//to check whether the value of teh variable is null or not
    return true;
    else
    return false;
}
int main()
{
    int size;
    cout<<"Enter max size of array"<<endl;
    cin>>size;
    char ar[size];//Declaration of the array size
    cout<<"Enter input to array"<<endl;
    cin>>ar;
    char c;
    cout<<"Enter the you want to find in the array"<<endl;
    cin>>c;
    char* p=&ar[0];//Point to the array
    cout<<contains(p,c);//Call the function
    return 0;
}
