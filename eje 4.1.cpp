#include<iostream>
using namespace std;
int sum ( const int x , const int y ) {
 return x + y ;
}
double sum ( const double x , const double y ) {
 return x + y ;
}
int main()
{
	cout<<sum(2,4)<<endl;
	cout<<sum(2.5,4.5)<<endl;
}
 
