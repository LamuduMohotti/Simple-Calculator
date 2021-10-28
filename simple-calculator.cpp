#include<iostream>
#include <stdlib.h>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(){
	
	cout << "** Welcome to simple calculator **" << endl;
	cout << "1.Add" << endl;
	cout << "2.Substract" << endl;
	cout << "3.Multiply" << endl;
	cout << "4.Divide" << endl;
	cout << "5.Exit" << endl;	
		
	int option;
	cin >> option;
	
	switch(option){
		case 1:
			printf("Enter two numbers to add : ");
			int a[2];
			int i;
			for(i=0;i<2;i++){
				cin >> a[i];
			}
			cout << "Answer is : " << add(a[0],a[1]) << endl;
			break;
			
		case 2:
			printf("Enter two numbers to substract : ");
			for(i=0;i<2;i++){
				cin >> a[i];
			}
			cout << "Answer is : " << sub(a[0],a[1]) << endl;
			break;
			
		case 3:
			printf("Enter two numbers to multiply : ");
			for(i=0;i<2;i++){
				cin >> a[i];
			}
			cout << "Answer is : " << mul(a[0],a[1]) << endl;
			break;
		
		case 4:
			printf("Enter two numbers to divide : ");
			for(i=0;i<2;i++){
				cin >> a[i];
			}
			cout << "Answer is : " << div(a[0],a[1]) << endl;
			break;
		
		case 5:
			printf("Thank you");
			exit();
	}
}


int add(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mul(int a, int b){
	return a * b;
}

int div(int a, int b){
	return a / b;
}
