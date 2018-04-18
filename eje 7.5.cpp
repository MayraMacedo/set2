#include<iostream>
using namespace std;
int main(){
	char *oddOrEven = "abcdefghijk";
	char *nthCharPtr = &oddOrEven[5];
	nthCharPtr -= 2;
//	cout<<*nthCharPtr<<endl;
	nthCharPtr = oddOrEven + 3;
//	cout<<*nthCharPtr<<endl<<*oddOrEven<<endl;
	cout <<"primero :"<<*nthCharPtr<<endl;
	char **pointerPtr = &nthCharPtr;
	cout <<"segundo :"<<pointerPtr<<endl;
	cout <<"tecero :"<<**pointerPtr<<endl;
	nthCharPtr++; //to point to the next character in oddOrEven (i.e. one character pastthe location it currently points to)
	cout <<"4to :"<<nthCharPtr - oddOrEven;
}
