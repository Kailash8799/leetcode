//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i = 0; i < n; i++){
            if(i == 0 || i == n-1){
            for(int j = 0; j < n; j++){
                cout << "*";
            }
            }else{
                cout << "*";
                for(int i = 0; i < n-2; i++){
                    cout << " ";
                }
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends