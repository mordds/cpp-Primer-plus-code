#include<iostream>
using namespace std;
struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void display(box x){
	cout << "the information of the box object:\n";
	cout << "maker: " << x.maker << '\n';
	cout << "height: " << x.height << '\n';
	cout << "width: " << x.width << '\n';
	cout << "length: " << x.length << '\n';
	cout << "volume: " << x.volume << endl;
}
void calculate(box *x){
	x -> volume = x -> width * x -> length * x -> height;
}
int main(){
	box x = {"mordd",1.8f,2.4f,0.6f};
	calculate(&x);
	display(x);
	return 0;
}
