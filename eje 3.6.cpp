#include<iostream>
using namespace std;
const int ARRAY_LEN = 10;
 int main () {
 int arr [ ARRAY_LEN ] = {10}; // Note implicit initialization of
 // other elements
 int * xPtr = arr ;int *yPtr = arr + ARRAY_LEN - 1;
 cout<<*xPtr <<' '<< *yPtr ; // Should output 10 0
 return 0;
}
