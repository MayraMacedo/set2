#include<iostream>
using namespace std;
int sum( const int a, const int b, const int c = 0 , const int d = 0)
{
	return a + b + c + d ;
}
int main()
{
	cout<<sum(1,1)<<endl;
	cout<<sum(1,1,1)<<endl;
	cout<<sum(1,2,3,1)<<endl;
}
