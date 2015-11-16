/*************************************************************************
	> File Name: problem3.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月11日 星期三 19时59分04秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s = "", a;
    int slong = 0, longest = 0, along;
    cout<<s.size()<<" "<<s[1]<<" "<<s.substr(0,4)<<endl;
    for(int i = 0;i < s.size(); i++)
    {
        for(int j = 1;j <= (s.size()-i)/2;j++)
        {
            a = s.substr(i, j);
            cout<<a<<"---"<<a.size()<<endl;
            cout<<s.substr(i+a.size(), j)<<endl;
            if(a == s.substr(i + a.size(), j))
            {
                cout<<"!!!"<<endl;
                slong = a.size();
                cout<<"slong:"<<slong<<endl;
            }
            if(slong > longest)
                longest = slong;
        }
        cout<<"***************"<<endl;
    }
    cout<<longest<<endl;
    return 0;
}
