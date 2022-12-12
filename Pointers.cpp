#include<iostream>
using namespace std;


int main()
{
	int age = 26 ;
	int *pAge = &age ;
	double gpa = 7.1 ;
	double *pGpa = &gpa ;
	string name = "Kusum" ;
	string *pName = &name ;
	
	cout << &gpa ;
	

	return 0;
}
