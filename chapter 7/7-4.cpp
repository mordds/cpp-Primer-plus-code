#include<iostream>
using namespace std;
int fill_array(double pd[],int count){
	int c = 0;
	do{
		cin >> pd[c];
		if(cin) c++;
		if(c >= count) break;
	}while(cin);
return c;
}
void show_array(const double pd[],int count){
	for(int i = 0;i < count;i++){
		cout << pd[i] << ' ';
	}
	cout << endl;
}
void reverse_array(double pd[],int length){
	double *p = new double [length];
	for(int i = 0;i < length;i++){
		p[length - (i + 1)] = pd[i];
	}
	for(int i = 0;i < length;i++){
		pd[i] = p[i];
	}
	delete [] p;
}
int main(){
	double array[11];
	int count = fill_array(array,10);
	show_array(array,count);
	reverse_array(array,count);
	show_array(array,count);
	double * p = new double;
	*p =array[0];
	array[0] = array[count - 1];
	array[count - 1] = *p;
	delete p;
	reverse_array(array,count);
	show_array(array,count);
	return 0;
}
