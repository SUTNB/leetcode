#include<iostream>
#include<string.h>
/*
* 中心展开法
*/
using namespace std;
string searchpalind(string s, int star, int end)
    {
        while(star>=0&&end<s.length()-1&&s[star] == s[end])
        {
            star --;
            end ++;
        }
        return s.substr(star+1, end-star-1);
    }
int main(){
	string s= "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
        string lengthest = "", p1, p2;
        for(int i = 0;i<s.length()-1;i++)
        {
            p1 = searchpalind(s, i, i);
	    cout<<p1<<"+++"<<" "<<i<<endl;
            if(p1.length() > lengthest.length())
            {
                lengthest = p1;
		cout<<lengthest<<"***"<<" "<<i<<endl;
            }
            p2 = searchpalind(s, i, i+1);
            if(p2.length() > lengthest.length())
            {
                lengthest = p2;
		cout<<lengthest<<"---"<<" "<<i<<endl;
            }
        }
cout<<lengthest<<endl;
        return 0;
}
