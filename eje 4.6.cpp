#include<iostream>
using namespace std;
int sum( const int numbers [], const int numbersLen ) {
	return numbersLen == 0 ? 0 : numbers [0] + sum ( numbers + 1 ,numbersLen - 1) ;//operador ternario 
}
int main(){
	int N[]={1,1,1,1,1,1,1};
	cout<<sum(N,7);
}
