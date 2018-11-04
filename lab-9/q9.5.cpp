// qustion no 5 >>>Write a piece of code which prints the characters in a cstring in a reverse order.
#include <iostream> // including the library
using namespace std;
int main()
{
   char array[10] ="abcde";//Declaration and assignment of the array
   cout<<"Given array:"<<array<<endl;
   char* ptr;//declare a pointer
   ptr=array;//point to array
   cout<<"Reverse:";
   for(int i=10;i>=0;i--)//Use loop to print characters in reverse order
   {
       cout<<*(ptr+i);
   }
   return 0;
}
