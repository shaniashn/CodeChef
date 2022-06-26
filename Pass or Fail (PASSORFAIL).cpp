//
//input T
//while(T--){
//input N, X, P
//if((X * 3) + ((N-X) * -1) ) >= P maka pass
//else maka fail
//}

#include <iostream>
using namespace std;

int main(){
	int t, x, n, p;
	
	cin >> t;
	
	while(t--){
		cin >> n >> x >> p;
		if((x * 3) + ((n - x) * -1) >= p){
			cout << "PASS" << endl;
		}
		
		else{
			cout << "FAIL" << endl;
		}
	}
}
