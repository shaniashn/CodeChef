#include <iostream>
using namespace std;

int main() {
	int t, r, i;
	int x = 4;
	cin >> t;
	
	while(t--){
	   int sum = 0;
	   for(int i = 4; i > 0; i--){
	        cin >> r;
	        sum = sum + r;
	    }
	    
	    if(sum == 0){
	        cout << "IN" << endl;
	    }
	    else{
	        cout << "OUT" << endl;
	    }
    }
	
	return 0;
}
