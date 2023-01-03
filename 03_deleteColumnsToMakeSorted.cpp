#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool checkIfSorted(vector<char> &A){
        for(int i=0 ; i<A.size()-1 ; i++){
            if(A[i] > A[i+1])
                return false;
        }
        return true;
    }
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        int n = strs.size();
        int m = strs[0].size();
        
        for(int row = 0 ; row<max(n, m) ; row++){
            vector<char> col;
            for(int j=0 ; j<n ; j++){
                col.push_back(strs[j][row]);
            }
             if(!checkIfSorted(col)){
                count++;
            }
            col.clear();
        }

        return count;
    }
};

int main(){
    vector<string> strs = {"zyx","wvu","tsr"};
    Solution obj;
    int ans = obj.minDeletionSize(strs);
    cout << ans << endl;
}