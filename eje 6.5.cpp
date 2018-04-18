#include<iostream>
using namespace std;
void reverse (int numbers [] , const int numbersLen ) {
	for(int i = 0; i < numbersLen / 2; ++ i ) {
		int tmp = *( numbers + i ) ;
		int indexFromEnd = numbersLen - i - 1;
		*( numbers + i ) = *( numbers + indexFromEnd ) ;
		*( numbers + indexFromEnd ) = tmp ;
	}
	for(int i = 0; i < numbersLen; ++i ){
		cout << numbers[i];
		if( i < numbersLen -1) {
		cout << ",";
		}
	}
}
int main()
{
	int A[6]={1,2,3,4,5,6};
	reverse(A,6);
}
 
