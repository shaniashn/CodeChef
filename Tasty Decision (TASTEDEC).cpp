#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test, chocolate, candy;
	
	cin >> test;	
	while(test--){
	    cin >> chocolate >> candy;
	    chocolate = chocolate*2;
	    candy = candy*5;
	    
	    if(chocolate == candy){
	        cout << "Either" << endl;
	    }
//	    else if( chocolate > candy){
//	        cout << "Chocolate" << endl;
//	    }
//	    else{
//	        cout << "Candy" << endl;
//	    }
	    else{
	    	chocolate > candy ? cout << "Chocolate\n" : cout << "Candy\n";
		}
	}
	
	return 0;
}

