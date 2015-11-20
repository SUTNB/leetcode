/*************************************************************************
	> File Name: problem8.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月19日 星期四 11时13分09秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s ="-y13y52hjhj";
    int i = 0, k = 0;
    int result = 0;
    while(1)
    {
        if(i == s.size())
            break;
        //result = s[i] - '0';
        //cout<<result<<endl;
        if(!result && s[i] == '-')
        {
            k = 1;
            i++;
            continue;
        }
        if(!result && s[i] == '+')
        {
            i++;
            continue;
        }
        if(!result && s[i]==' ')
        {
            i++;
           continue;
        }
        if(s[i]<'0' || '9'<s[i])
            break;
        if('0'<=s[i] && s[i]<='9')
            result = result * 10 + s[i]-'0';
        i++;
    }
    if(k)
        result = -result;
    cout<<result<<endl;
    return 0;
}
