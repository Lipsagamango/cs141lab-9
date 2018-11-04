/* Implement your versions for the following function: 
Strlen */

#include <iostream>//include library
using namespace std;

int len(char* str) // function to find the length of the function
{
	int size=0;
	while(*str!='\0')
	{
		size++;
		str++;
	}
	return size;
}
int main()
{
    //Declaration and assingment of the initial array
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
   //function call to find the length of the string
    cout<<"Use of strlen function"<<endl;
	char* p=str; // storing the adress of array declared above
    cout<<"Length of str:"<<len(p)<<endl; // passing the adress to for the function implementation
    
    return 0;
}
