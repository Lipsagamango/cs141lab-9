/* Implement your versions for the following functions: 
Strchr*/

#include <iostream>//include library
using namespace std;


char* char_occurence(char* str,char c) // function declaration 
{
	char* p=str;
	if(str==NULL) // if else condition implementation
	return NULL;
	
	else
	{
		for(int i=0;*(p+i)!='\0';i++)
		{
			if(*(p+i)==c)
			{
				return p+i;
			}
		}
	}
}
int main()
{
    //Initialzation of the string
    char str[20];
    cout<<" Please Enter string"<<endl;
    cin.getline(str,20);
    
  //Implementation of strchr function
   cout<<"Use of strchr function"<<endl;
    char c;
    cout<<"Enter the character you want to find in the string"<<endl;
    cin>>c;
	char* p=str;
	if(char_occurence(p,c)==NULL)
	{
		cout<<"The character is absent in the string"<<endl;
	}
	else
	{
		while(char_occurence(p,c)!=NULL)
		{
			cout<<"Found at:"<<(char_occurence(p,c)-str+1)<<endl;
			p=char_occurence(p,c)+1;
		}
	}
    return 0;
}
