/* Write a program to declare two variables a,b and a pointer variable p (all integer type). 
Point p to a. And store the value pointed by p in b. Print the values of a, b and *p. 
Assign values a=2 and b = 3. Print the values of a, b and *p. 
Now point p to b. Print the values of a, b and *p. */

#include <iostream>//include library

using namespace std;

int main()
{
    //Declare variables and pointer
    int k,l;int* p=&k;   // assining k to to a pointr named p
    l=*p;//Assigning value of *p to l
    cout<<"k="<<k<<" l="<<l<<" *p="<<*p<<endl;//Print
    k=2,l=3;//Assigning value to variables
    cout<<"k="<<k<<" l="<<l<<" *p="<<*p<<endl;//Print
    p=&l;//Pointing to l
    cout<<"k="<<k<<" l="<<l<<" *p="<<*p;//Print
    return 0;
}
