#include<iostream>
#include<cmath>
using namespace std;

int main (void){
	int N;
	cin >> N;
	
	for(int i = 1;i<=N;i++){
		if(i%2==0)
			cout << i <<"^2 = "<<i*i<< endl;
	}
	return 0;
}
