#include<iostream>
using namespace std;
void swap (int ** x , int ** y ) {
	int * tmp = * x ;
	* x = * y ;
	* y = tmp ;
}
int main()
{	
	int a,b;
	a=5;b=6;
	int *ptr1=&a,*ptr2=&b;
	swap(&ptr1,&ptr2);
	cout<<"Ap"<<*ptr1<<"Bp"<<*ptr2<<endl;
}
