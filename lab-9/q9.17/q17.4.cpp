/* Implement your versions for the following function: 
Strcmp */

#include <iostream>//include library
using namespace std;


int compare(char* a,char*b) // My verstion of function to (Strcmp) function
{
//function body
int result=0;
	for (int i = 0;*(a+i)!='\0' || *(b+i)!='\0' ; i++)
	{
		if (*(a+i) != *(b+i))
		{
		    result= *(a+i)-*(b+i);
			break;
		}
	}
return result;

}
int main()
{
    //declaration and initialization of the array
    char str[20];
    cout<<"Enter string"<<endl;
    cin.getline(str,20);
    
    
    
    cout<<"Use of strcmp function"<<endl;
	char str4[20];
	cout<<"Enter other string"<<endl;
	cin.getline(str4,20);
    int result=compare(str,str4);// string comparision by the function
    if(result==0)
    cout<<"both the string are same"<<endl;
    else if(result>0)
    cout<<"The ascii value of the character of str after 1st mismatch is more than that of str2 with ascii difference:"<<result<<endl;
    else
    cout<<"The ascii value of the character of str after 1st mismatch is less than that of str2 with ascii difference:"<<result<<endl;
    
    return 0;
}

