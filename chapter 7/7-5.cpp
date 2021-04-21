#include<iostream>
using namespace std;
long long stair(unsigned int n){
	if(n == 0)	return 1;
	return n * stair(n - 1) ;
}
int main(){
	unsigned int n;
	cout << "enter a postive number to calculate the stairs, enter 0 to exit" << endl;
	while(cin >> n){
		if(n == 0) break;
		cout << "the stair of " << n << " is " << stair(n) << endl;
		cout << "enter another number: ";
	}
	cout << "bye." << endl;
	return 0;
}

