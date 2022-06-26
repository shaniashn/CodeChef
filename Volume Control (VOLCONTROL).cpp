#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y, result;
	
	cin >> t;
	while(t--){
	    cin >> x >> y;
	    if(x > y){
	        result = x - y;
	        cout << result << endl;
	    }
	    else{
	        result = y - x;
	        cout << result << endl;
	    }
	}
	return 0;
}

