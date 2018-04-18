#include<iostream>
using namespace std;
void swap (int *x , int * y ) {
	int tmp = * x ;
	* x = * y ;
	* y = tmp ;
}
int main()
{	
	int a,b;
	a=2;b=3;
	cout<<"AP"<<a<<"BP"<<b<<endl;
	swap(a,b);
	cout<<"AP"<<a<<"BP"<<b<<endl;
}
 
