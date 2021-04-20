#include<iostream>
using namespace std;

double a,b;
double average(double a,double b){
	return 2 * a * b / (a + b);
}
int main(){
	do{
		cin >> a >> b;
		if(a != 0 || b != 0) cout << average(a,b) << endl;
	}while(a !=0 && b != 0);
	return 0;
}
