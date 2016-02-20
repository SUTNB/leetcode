/*************************************************************************
	> File Name: problem16.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月20日 星期六 19时30分25秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int threeSumClosest(vector<int> nums, int target){
    sort(nums.begin(), nums.end());
    int small=nums[0]+nums[1]+nums[nums.size()-1], now;
    for(int i = 0; i < nums.size()-2;i++){
        for(int j = i+1, k = nums.size() -1;;){
            if(k == j) break;
            now = nums[i]+nums[j]+nums[k];
            if(now < target){
                j++;
                if(target - now < abs(small-target) )
                    small = now;
            }else if(now > target){
                k--;
                if(now - target < abs(small-target))
                    small = now;
            }else{
                return target;
            }
        }
    }
    return small;
}
int main(){
    int a[4] = {-1, 2, 1, -4};
    vector<int> nums(a, a+4);
    cout<<threeSumClosest(nums, 1)<<endl;
    return 0;
}
