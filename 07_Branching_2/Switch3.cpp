#include <iostream>

	using namespace std;
int main(int argc, char* argv[]){
	double ar1, ar2, res;
	char op;

	cout<<"Enter an expression -> ";
	cin>>ar1>>op>>ar2;

	switch(op){
		case '+':
			res = ar1 + ar2;
			break;
		
		case '-':
			res = ar1 - ar2;
			break;

		case '/':
			res = ar1 / ar2;
			break;

		case '*':
			res = ar1 * ar2;
			break;
		default:
			cout<<"Enter a valid expression { * / + -} \n";
	}
		cout<<"Value: "<<ar1<<" "<<op<<" "<<ar2<<" = "<<res<<endl;

	return 0;
}