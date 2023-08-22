//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        for(int i = 0; i < n; i++){
            for(int j = n; j > i; j--){
                cout << "*";
            }
            for(int j = 0; j < (2*i); j++){
                cout << " ";
            }
            
            for(int j = n; j > i; j--){
                cout << "*";
            }
            
            cout << "\n";
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i+1; j++){
                cout << "*";
            }
            for(int j = 0; j < (2*n - 2*i - 2); j++){
                cout << " ";
            }
            
            for(int j = 0; j < i+1; j++){
                cout << "*";
            }
            
            cout << "\n";
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends