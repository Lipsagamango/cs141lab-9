/*Write a program to show implementation of strstr function in c++*/
#include <iostream>//include library
using namespace std;

// function declartion which return if both the passed value are true
int compare(const char *str1, const char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return 0;
		str1++;
		str2++;
	}

	return (*str2 == '\0');
}

//Alternative version of Function to implement strstr() function
const char* strstr(const char* str1, const char* str2)
{
	while (*str2 != '\0')
	{
		if ((*str1 == *str2) && compare(str1, str2))
			return str1;
		str2++;
	}

	return NULL;
}

// main function 
int main()
{
	char str1[50];
	cout<<"Enter string1:"<<endl;
	cin.getline(str1,50);
	char str2[50];
	cout<<"Enter string2:"<<endl;
        cin.getline(str2,50);
	cout<< strstr(str1, str2); // function calling to return the value as same as (strstr) function c++ .

	return 0;
}
