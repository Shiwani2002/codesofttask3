#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cout<<"-----Enter the String Here-----"<<endl;
    getline(cin,s);int count=0;
  for(int i=0;i<s.size();i++)
  {
    if (s[i]==' ')
    count++;
    else if(s[i]=='.')
    count++;
    else if(s[i]==',')
    count++;
      else if(s[i]=='-')
    count++;
      else if(s[i]=='&')
    count++;
      else if(s[i]=='!')
    count++;
       else if(s[i]=='?')
    count++;
  } 
  cout<<"---Total Words in This string is---"<<endl;
  cout<<count+1;
}