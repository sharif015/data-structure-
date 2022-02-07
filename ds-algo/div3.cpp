#include<bits/stdc++.h>
using namespace std ;
bool  check(string s)
{
    stack<char>st;
    int l=s.size();
    
    for(int i=0;i<l;i++)
    {
        char c=s[i];
        switch (c) {
            case '{':
            case '(':
            case '[':
                st.push(c);
                break;
            case '}':
                if (st.empty() || (st.top() != '{')) {
                    return "NO";
                }
                st.pop();
                break;
            case ')':
                if (st.empty() || (st.top() != '(')) {
                    return "NO";
                }
                st.pop();
                break;
            case ']':
                if (st.empty() || (st.top() != '[')) {
                    return "NO";
                }
                st.pop();
                break;
        }
    }
    return st.empty()? true:false ;
    
}
int main()
{
  
  int t ;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s ;
    
    
   
    
       check(s)? cout<<"YES"<<endl:cout<<"NO"<<endl;
       
        }
    





  }



