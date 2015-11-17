#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s = "abcba";
        bool stable[1000][1000] = {false};
        int longest = 1, star = 0;
        for(int i =0;i<1000;i++)
        {
            stable[i][i] = true;
        }
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i] == s[i+1])
            {
                stable[i][i+1] = true;
                star = i;
                longest = 2;
            }
        }
        for(int len = 3;len<=s.length();len++)
        {
            for(int j = 0;j<=s.length()-len;j++)
            {
		cout<<s.substr(star, longest)<<"**"<<len<<"**"<<stable[j+1][j+len-2]<<endl;
                if(s[j] == s[j+len-1] && stable[j+1][j+len-2])
                {
                    stable[j][j+len-1] = true;
                    star = j;
                    longest = len;
		    cout<<s.substr(star, longest)<<"--"<<len<<"**"<<endl;
                }
            }
		
        }
        cout<<s.substr(star, longest)<<endl;
    }
