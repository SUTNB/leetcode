/*************************************************************************
	> File Name: problem15_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月10日 星期三 21时55分28秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector< vector<int> > threeSum(vector<int> nums){
    sort(nums.begin(), nums.end());
    vector< vector<int> > result;
    vector<int> a;
    for(int i=0;i<nums.size();i++){
        while(i > 0 && i < nums.size() && nums[i] == nums[i-1])
            i ++;
        for(int j=i+1,k=nums.size()-1;j<nums.size()-1;){
            if(j>=k) break;
            if(nums[i]+nums[j]+nums[k] < 0){
                j++;
            }else if(nums[i]+nums[j]+nums[k] > 0)
            {
                k--;
            }else{
                a.clear();
                a.push_back(nums[i]);
                a.push_back(nums[j]);
                a.push_back(nums[k]);
                result.push_back(a);
                j++;
                k--;
 		while(k > j && num[k] == num[k+1])
                        k --;
            }
        }
    }
    return result;
}
int main()
{
    int a[10] = {-1, 0, 1, 2, -1, -4};
    vector<int> nums(a,a+6);
    vector<vector<int> > re;
    re = threeSum(nums);
    vector<vector<int> >:: iterator it1;
    vector<int>::iterator it2;
    for(it1=re.begin();it1!=re.end();it1++){
        for(it2=(*it1).begin();it2!=(*it1).end();it2++){
            cout<<*it2<<' ';
        }
        cout<<endl;
    }
    return 0;
}
