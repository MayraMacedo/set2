#include<iostream>
using namespace std;
int sum( const int numbers [], const int numbersLen ) {
	int sum = 0;
	for(int i = 0; i < numbersLen ; ++i ) {
		sum += numbers [ i];
	}
	return sum;
}
int main(){
	int N[]={1,2,3,4};
	cout<<sum(N,4);
}
