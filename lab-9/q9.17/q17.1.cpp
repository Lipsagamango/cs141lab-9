/* Implement your versions for the following function: 
Strcpy  */

#include <iostream>//include library
using namespace std;

char* copy(char* str2,char* str) //function declaration for the alternative way of Strcpy
{
	if (str==NULL)
		return NULL;
	char* ptr=str2;
	while(*str!='\0')
	{
		*str2=*str;
		str2++;
		str++;
	}
	*str2='\0';
	return ptr;
}

int main()
{
    //Declaring intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
    //Implementation of strcpy function and calling the function made here
    char str2[20];
    cout<<"Output of str2:"<<copy(str2,str)<<endl;
    return 0;
}
