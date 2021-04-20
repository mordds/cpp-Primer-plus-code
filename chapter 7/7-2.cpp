#include<iostream>
using namespace std;
int input(double tar[],int lim){
	int c = 0;
	while(c < lim){
		cin >> tar[c];
		if(!cin) break;
		c++;
	}
	return c;
}
double average(double in[],int count){
	double a;
	for(int i =0;i < count;i++){
		a += in[i] / count;
	}
	return a;
}
void display(double in[],int lim){
	cout << "here is your result:";
	for(int i = 0;i < lim;i++){
		cout << ' ' <<in[i] << ' ';f
	}
	cout << "average point:" << average(in,lim) << endl;
}
int main(){
	double result[11];
	int count = input(result,10);
	display(result,count);
	return 0;
}
