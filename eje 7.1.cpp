#include<iostream>
#include<stdlib.h>
#include <math.h>
#include <string>
using namespace std;
int stringLength ( const char * str ) {
	int length = 0;
	while (*(str+length)!= (’\0’)) {
		++length ;
	}
	return length ;
}
int main(){
	char A[]="hola";
	stringLength("hola");
}
