#include<iostream>

using namespace std;

int main(){
	double a = 20.0;
	double b = 1.5;
	a = a + b; // tentsuugiin zuun taliin a-giin utgiig b-eer ihesgene
	a +=b;
	
	b = a*b;
	b*=a;
	
	a = a-b;
	a-=b;
	
	cout<<a;
	
	
	return 0;
}
