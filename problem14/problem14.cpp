/*************************************************************************
	> File Name: problem14.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月23日 星期一 23时33分02秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string> strs;
    string str;
    strs.push_back("abc");
    strs.push_back("abcd");
    strs.push_back("abcde");
    str = strs[0];
    int j;
    for(int i = 1;i<strs.size();i++)
    {
        if (str.length() == 0 || strs[i].length() == 0)
        {
            cout<<""<<endl;
            return 0;  
        }
        int len = strs[i].length() < str.length() ? strs[i].length() : str.length();
        for(j = 0;j < len;j++)
        {
            if( strs[i][j] != str[j])
                break;
        }
        str = str.substr(0, j);
    }
    cout<<str<<endl;
    return 0;
}
