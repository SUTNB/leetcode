class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> ma, mp;
        int i=1;
        vector<int> v;
        for(vector<int>::iterator it=nums.begin() ; it!=nums.end() ; it++)
        {
            ma[*it]++;
            if( ma[target-(*it)] )
            {
                if(*it!=target-*it)
                {
                    v.push_back( mp[ target-(*it) ] );
                    v.push_back(i);
                    break;
                }
                else if(ma[*it]>=2)
                {
                 v.push_back( mp[ target-(*it) ] );
                 v.push_back(i);
                 break;
                }
            }
            mp[*it]=i;
            i++;
        }
        return v;
    }
};
