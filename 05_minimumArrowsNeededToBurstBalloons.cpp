#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<vector<int>> mergedIntervals;
        vector< pair<int,int > > v;
        for(int i=0 ; i<points.size() ; i++){
            v.push_back(make_pair(points[i][0], points[i][1]));
        }
        std::sort(v.begin(), v.end(), [](auto &left, auto &right) {
        return left.second < right.second;
        });

        int arrows = 1; 
        int endPoint = v[0].second;
        for(int i=1 ; i<v.size() ; i++){
            if(v[i].first > endPoint){
                arrows++;
                endPoint = v[i].second;
            }else{
                //do nothing
            }
        }
        return arrows;
    }
};

int main(){
    vector<vector<int>> points = {{10, 13}, {3, 5}, {5, 7}, {1, 5}, {2, 6}, {12, 14}};
    Solution obj;
    int numberOfArrowsNeeded = obj.findMinArrowShots(points);
    cout << numberOfArrowsNeeded << endl;
}
