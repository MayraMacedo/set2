#include<iostream>
#include <string>
using namespace std;
	int largo;
void transpose ( const int input [][largo],int output [][anchura]) {
	for(int i = 0; i < anchura ; ++ i ) {
		for (int j = 0; j < largo ; ++ j ) {
			output [ j ][ i ] = input [ i ][ j ];

		}

	}
}
int main()
{
	int largo,anchura;
	int A[2][2]={{1,2},{3,4}}
	int C[2][2]={{0,0},{0,0}}
	transpose(A[2][2],C[2][2])
}
