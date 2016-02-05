/*************************************************************************
	> File Name: problem15.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年02月05日 星期五 23时35分14秒
 ************************************************************************/

#include<iostream>
using namespace std;
class Solution {  
    public:  
    vector<vector<int> > threeSum(vector<int> &num) {    
            vector<vector<int> >  result;    
      
            sort(num.begin(), num.end());    
              
            /*Call 2 sum*/  
            for(int i = 0; i < num.size(); i++){    
                        if(i > 0 && num[i] == num[i-1]) continue;    
                        twoSum(num, result, i);  
                    }   
            return result;    
        }  
      
    /*2 sum algorithm. different from the other one is that the other one return index not value*/  
    void twoSum(vector<int> &num, vector<vector<int>> &res, int targetIndex) {  
            /*starting from targetIndex + 1 is because the numbers before have been used*/  
                int i = targetIndex + 1;     
                int j = num.size()-1;    
                  
                while(i < j){    
                                if(num[targetIndex] + num[i] + num[j] < 0)   i++;    
                                else if(num[targetIndex] + num[i] + num[j] > 0)   j--;    
                                else{    
                                                    vector<int> v;    
                                                    v.push_back(num[targetIndex]);    
                                                    v.push_back(num[i]);    
                                                    v.push_back(num[j]);    
                                                    res.push_back(v);    
                                                    i++; j--;    
                                                    while(i < num.size() && num[i]==num[i - 1]) i++;    
                                                    while(j >= 0 && num[j] == num[j + 1]) j--;    
                                                }    
                            }  
                  
        }  
};  

