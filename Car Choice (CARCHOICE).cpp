#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	float x, y, a, b, car1, car2;
	
	cin >> t;
	while(t--){
	    cin >> x >> y >> a >> b;
	        car1 = a/x;
	        car2 = b/y;
	  
	  if(car1 == car2){
	    cout << 0 << endl;
      }
	  else if(car1 > car2){
	    cout << 1 << endl;
	  }
	  else{
	    cout << -1 << endl;
	  }
	}
	
	
	
	return 0;
}

