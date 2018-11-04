/*Write a function that returns a pointer to the maximum value of an array of double's. 
If the array is empty, return NULL.*/
#include <iostream>//include library
using namespace std;
double* maximum(double* a, int size) // declaration of the function
{
   
    int x;
    //loop to sort the array in descending order
    for(int i=0;i<size;i++)
    {
	    for(int j=i+1;j<size;j++)
	    {
		    if(*(a+i)<*(a+j))
		    {
			    x=*(a+i);
			    *(a+i)=*(a+j);
			    *(a+j)=x;
		    }
	    }
    }
    return a;
}
int main()
{
    //variable and declaration
    int size;
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    
    double arr[size];
    if(size!=0) // assinging value to the array if the size of the array is not zero
    {
        cout<<"Enter input(charcter by character)to array"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        double* p=&arr[0];
        cout<<"Max:"<<*maximum(p,size);//function call
    }
    else
    {
        cout<<"Size of the array is zero"<<endl;
        cout<<"Max=NULL";
    }
    return 0;
}
