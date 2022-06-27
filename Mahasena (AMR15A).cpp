#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, n;
	int even = 0;
	
	cin >> n;
	for(int i = 0; i < n; i++){
	    cin >> a;
	    if(a % 2 == 0){
	        even++;
	    }
	}
	
	if(even > n-even){
	        cout << "READY FOR BATTLE";
	    }
	    else{
	        cout << "NOT READY";
	    }
	return 0;
}

