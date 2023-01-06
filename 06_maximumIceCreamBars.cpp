#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        // Sort the given costs array
        sort(costs.begin(), costs.end());
        //A counter for counting the maximum number of ice-cream bars
        int count = 0;

        //Iteration
        for(int i=0 ; i<costs.size() ; i++){
            //If the current cost of the ice-cream bar is less than the number of coins we have, we can take that bar into consideration, and subtract the cost of the bar from number of coins
            if(costs[i] <= coins){
                coins -= costs[i];
                count++;
            }else{
                break; // Else we can stop our process
            }
        }
        return count; //Return the maximum number of ice-cream bars
    }
};

int main(){
    vector<int> costs = {1, 3, 2, 4, 1};
    int coins = 7;

    Solution obj;
    int numberOfBars = obj.maxIceCream(costs, coins);
    cout << numberOfBars << endl;
}