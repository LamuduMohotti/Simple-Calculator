#include<iostream>
using namespace std;

int add(int a, int b);

int main(){
	
	cout << "** Welcome to simple calculator **" << endl;
	cout << "1.Add" << endl;
	cout << "2.substract" << endl;
	
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
	}
}


int add(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}
