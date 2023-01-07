#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //Find the totalGas
        int totalGas = accumulate(gas.begin(), gas.end(), 0);

        //Find the totalCost
        int totalCost = accumulate(cost.begin(), cost.end(), 0);

        //Check if the totalCost is greater than the totalGas or not
        //If yes, then there is no way to complete the circuit
        //return -1
        if(totalCost > totalGas)
            return -1;
        
        //'start' pointer for holding the current position
        //current_gas will have the current gas value in the vehicle
        int start = 0, current_gas = 0;


        for(int i=0 ; i<gas.size() ; i++){
            //Calculate the difference of gas[i] with cost[i]
            
            current_gas += (gas[i] - cost[i]);
            //if this value is less than zero,
            //So there is no way to go to the next station, so
            //We have to update the position and set the current_gas = 0 
            if(current_gas < 0){
                start = i + 1;
                current_gas = 0;
            }
        }

        //return the position
        return start;
    }
};

int main(){
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    Solution obj;

    int position = obj.canCompleteCircuit(gas, cost);
    cout << position << endl;
}