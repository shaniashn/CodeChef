#include <iostream>
using namespace std;

int main(){
	int x, y, t;
	
	cin >> t;
	
	while(t--){
	cin >> x >> y;
	
		if(x == y){
		    cout << "ANY" << endl;
		}
		else if(x > y){
		    cout << "SECOND" << endl;
		}
		else{
		    cout << "FIRST" << endl;
		} 
	}
}
