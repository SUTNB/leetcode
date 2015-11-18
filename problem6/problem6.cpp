/*************************************************************************
	> File Name: problem6.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月18日 星期三 22时21分55秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s = "AB", result;
    int numRows = 2, l = numRows - 2, num = (numRows - 1)*2, m;
    if(numRows == 1)
    {
        cout<<s<<endl;
        return 0;
    }
    for(int i = 0;i<numRows;i++)
    {
        for(int j = i,k=1;j<s.size();k++)
        {   result += s[j];
            m = (l-i+1)*2;//4 0
            if(((i!=numRows-1)&&k%2) || i==0)
                j = j + m;
            else if(i==numRows-1)
                j = j + num;
            else
                j = j + num - m;
        }
    }
    cout<<result<<endl;
    return 0;
}
