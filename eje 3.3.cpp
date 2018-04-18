#include<iostream>
using namespace std;
 int doubleNumber (int num )
 {num = num * 2;
 return num;
 };
 int main () {
 int num = 35;
 //doubleNumber (num) ;
 cout <<doubleNumber (num);// Should print 70
 return 0;
}
