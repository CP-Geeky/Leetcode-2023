#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count = 0;
        map<int, int> mp;
        for(int i=0 ; i<tasks.size() ; i++){
            mp[tasks[i]]++;
        }
        int minimumRounds = 0;
        for(auto i:mp){
            if(i.second == 1)
                return -1;
            minimumRounds += (i.second)/3;
            i.second %= 3;
            if(i.second)
                minimumRounds++;
        }

       return minimumRounds;
    }
};

int main(){
    vector<int> tasks;
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++)
        cin >> tasks[i];
    
    Solution obj;
    int ans = obj.minimumRounds(tasks);
    cout << ans << endl;
}