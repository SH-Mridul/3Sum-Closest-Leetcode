#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int minValue = INT_MAX;
    int result = nums[0] + nums[1] + nums[2];
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i<nums.size()-2; i++){
        int l = i+1;
        int r = nums.size()-1;
        
        while(l<r){
            int sum = nums[i]+nums[l]+nums[r];
            
            if(sum == target){
                return sum;
            }else if(sum<target){
                l++;
            }else{
                r--;
            }
            
            int diffTarget = abs(sum-target);
            
            if(diffTarget<minValue){
               result = sum;
               minValue = diffTarget; 
            }
        } 
    }
    
    return result;
}

int main() {
    vector<int> v = {0,0,0};
    int ans = threeSumClosest(v, 1);
    cout<<ans<<endl;
    return 0;
}