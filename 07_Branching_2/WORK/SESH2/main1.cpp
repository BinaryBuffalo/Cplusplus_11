#include <iostream>
#include <string>


using namespace std;
int oore(int a){
		bool res;
		if(a == 0){ cout<<"FAILED\n";}
		if((a % 2) == 0){		
			res = true;
		}
		return res;
}

int main(int argc, char* argv[]){
 
	int a1, a2, a3, a4;

	int evens = 0;
	int odds = 0;

	cout<<"Enter 4 Intagers"<<endl;
	cin >> a1 >>a2>>a3>>a4;
	bool k1 = oore(a1);
	bool k2 = oore(a2);
	bool k3 = oore(a3);
	bool k4 = oore(a4);
	
	cout << evens << odds;
	
	if (k1 == 1){ evens++;}
	if (k1 == 0){ odds++;}
		//
	if (k2 == 1){ evens++;}
	if (k2 == 0){ odds++;}
		//
	if (k3 == 1){ evens++;}
	if (k3 == 0){ odds++;}
		//
	if (k4 == 1){ evens++;}
	if (k4 == 0){ odds++;}

	cout << evens << " : "<< odds << endl;
	if(evens > odds){
		cout<< "More Evens\n";
	}
	else if(evens < odds){
		cout<< "More Odds\n";
	}
	else if(evens == odds){
		cout<< "The Same Nigger\n";
	}
	else{
		cout<< "Failed\n";
	}

	return 0;
}