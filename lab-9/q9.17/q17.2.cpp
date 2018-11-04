/* Implement your versions for the following function: 
Strcat */

#include <iostream>//include library
using namespace std;


char* cat(char* str,char* str3) // Creation of the function
{
	int size1=0;//size2=0;
	char* z=str;
	while(*z!='\0')
	{
		size1++;
		z++;
	}
	char* p=str+size1;
	while(*str3!='\0')
	{
		*p++=*str3++;
	}
	*p='\0';
	return str;
}

int main()
{
    //Making intial string
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
    //Calling the cat function(which is similar to embeded Strcat function available in C++) here
	char str3[20];
	cout<<"Enter other string"<<endl;
	cin.getline(str3,20);
    cout<<"Output after strcat function:"<<cat(str,str3)<<endl;
    return 0;
}
