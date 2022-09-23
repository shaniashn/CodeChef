#include <iostream>
using namespace std;

int main() {
    int n, x, k, t, cost;
    
    cin >> t;
    while(t--){
        cin >> n >> x >> k;
        
        if(k >= n*x){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    
	return 0;
}
