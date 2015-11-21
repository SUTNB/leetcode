/*************************************************************************
	> File Name: problem12.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年11月21日 星期六 17时05分02秒
 ************************************************************************/

#include<iostream>
#include<string.h>
using namespace std;
string intTostring(int num, int m)
{
    string str = "", s;
    switch(m){
        case 1000 : s = "M";break;
        case 500  : s = "D";break;
        case 100  : s = "C";break;
        case 50   : s = "L";break;
        case 10   : s = "X";break;
        case 5    : s = "V";break;
        case 1    : s = "I";break;
        default:  s = "0";
    }
    int n = (num / m)-1;
    str = s;
    while(n)
    {
        str += s;
        n--;
    }
    return str;
}
int main(){
    string s = "";
    int num = 900;
    while(num)
    {
        if(num >= 1000)
        {
            s = intTostring(num, 1000);
            num = num - num/1000*1000;
            cout<<s<<"///"<<num<<endl;
        }
        if(num >= 900)
        {
            s += "CM";
            num = num - num/100*100;
        }
        if(num >= 500)
        {
            s += intTostring(num, 500);
            num = num - num/500*500;
            cout<<s<<" "<<num<<endl;
        }
        if(num >= 400)
        {
            s += "CD";
            num = num - num/100*100;
        }
        if(num >= 100)
        {
            s += intTostring(num, 100);
            num = num - num/100*100;
            cout<<s<<"***"<<num<<endl;
        }
        if(num >= 90)
        {
            s += "XC";
            num = num - num/10*10;
        }
        if(num >= 50)
        {
            s += intTostring(num, 50);
            num = num - num/50*50;
            cout<<s<<"---"<<num<<endl;
        }
        if(num >= 40)
        {
            s += "XL";
            num = num - num/10*10;
        }
        if(num >= 10)
        {
            s += intTostring(num, 10);
            cout<<s<<"+++"<<num<<endl;
            num = num - num/10*10;
        }
        if(num == 4)
        {
            s += "IV";
            num = 0;
        }
        if(num == 9)
        {
            s += "IX";
            num = 0;
        }
        else
        {
            if(num >= 5)
            {
                s += intTostring(num, 5);
                num = num - num/5*5;
            }
            if(num > 0)
            {
                s += intTostring(num, 1);
                num = 0;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
