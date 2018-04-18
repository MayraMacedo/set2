#include<iostream>
using namespace std;
void printArray ( const int arr [], const int len ) {
	for(int i = 0; i < len; ++i ) {
		cout << arr [i];
		if( i < len -1) {
		cout << ",";
		}
	}
}
int main()
{
	int A[5]={1,2,3,4,5};
	printArray(A,5);
}
