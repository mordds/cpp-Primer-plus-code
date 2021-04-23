#include<iostream>
using namespace std;
double * fill_array(double db[],int max){
	double temp;
	for(int i = 0;i < max;i++){
		cout << "enter a value #" << i << ": ";
		cin >> temp;
		if(!cin){
			cin.clear();
			cout << "bad input entered." << endl;
			return (db + i);
			}
			if(temp < 0) return (db + i);
			db[i] = temp;
		} 
		return (db + max);
	}
void show_array (double db[],const double * pd){
	double * temp = db;
	int tmp = 0;
	while(temp != pd){
		cout << "Property #" << tmp + 1 << ": $" << *temp << endl;
		temp++;
		tmp++;
	}
}
void revalue(double r,double db[],double * pd){
	cout << "the array revalued " << r << " times" << endl;h  
	for(double * p = db;p != pd;p++){
		*p *= r;
	}
}
int main(){
	double db[7];
	double *p = fill_array(db,7);
	show_array(db,p);
	revalue(1.2,db,p);
	show_array(db,p);
	return 0;
}
