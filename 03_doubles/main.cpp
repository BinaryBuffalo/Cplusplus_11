#include <iostream>
#include <cmath>

	using namespace std;
int main(int argc, char* argv[]){

	double radius, total;

	cout <<"Radius : ";
	cin>>radius;
	total = 3.14 * (radius*radius);
	cout<<"Total Radius : " << total<<endl;

	return 0;
}