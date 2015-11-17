/*************************************************************************
	> File Name: problem5.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月16日 星期一 22时11分04秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s = "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth",result;
    int j, k, length, lengthest = 0, a, star=0, end=0, m, n, star_l, end_l;
    if(s.size()==2&&s[0]==s[1])
    {
        cout<<s<<endl;
        return 0;
    }
    for(int i = 0;i<s.size();i++)
    {
        k = 0, m = 1;
        j = s.size()-1-i;
        a = i;
        n = i;
        length = 0;
        cout<<i<<endl;
        while(n!=j&&n<j)
        {
            if(s[n]==s[j])
            {
                if(!k&&lengthest<j-n)
                {
                    star_l = star;
                    end_l = end;
                    star = n;
                    end = j;
                    cout<<star<<"***"<<end<<" "<<star_l<<"***"<<end_l<<endl;
                }
                k = 1;
                j--;
                n++;
                if(n!=j)
                    length += 2;
                else
                    length += 1;
            }
            else
            {
                j--;
                if(length)
                {
                    m++;
                    length = 0;
                    n = a;
                    k = 0;
                    j = s.size()-m;
                    if(star_l||end_l)
                    { 
                        star = star_l; 
                        end = end_l;
                    }   
                }
            }
        }
        if(lengthest>j-i)
            continue;
        if(length > lengthest)
            lengthest = length;
    }
    cout<<lengthest<<"----"<<star<<"----"<<end<<endl<<s<<endl;
    cout<<s.substr(star, end-star+1)<<endl;
    return 0;
}
