/*************************************************************************
	> File Name: probelm13.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月22日 星期日 20时11分38秒
 ************************************************************************/

#include<iostream>
#include<string.h>
#include <map>
using namespace std;
int main()
{
    string s = "", str1, str2;
    while(cin>>s){
    map<string, int> map1;
    map<string, int>::iterator a1, a2;
    map1.insert(pair<string, int>("I", 1));
    map1.insert(pair<string, int>("V", 5));
    map1.insert(pair<string, int>("X", 10));
    map1.insert(pair<string, int>("L", 50));
    map1.insert(pair<string, int>("C", 100));
    map1.insert(pair<string, int>("D", 500));
    map1.insert(pair<string, int>("M", 1000));
    str1 = s[0];
    a1 = map1.find(str1);
    cout<<str1<<"**"<<a1->second<<endl;
    int sum = a1->second;
    for(int i = 1;i<s.length();i++)
    {
        str2 = s[i];
        cout<<str2<<"-----"<<endl;
        a2 = map1.find(str2);
        if(a1->second < a2->second)
        {
            sum -= 2*a1->second;
            sum += a2->second;
        }
        else
            sum += a2->second;
        a1 = a2;
        cout<<sum<<endl;
    }
    cout<<sum<<endl;
    }
    return 0;
}
