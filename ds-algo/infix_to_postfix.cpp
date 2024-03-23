#include<bits/stdc++.h>
using namespace std ;
int  check(char c)
{
    if(c=='+'){
    return 1 ;
    }
    else if(c=='^')
    {
        return 4 ;
    }
    else if(c=='-')
    {
        return 1 ;
    }
     else if(c=='*')
    {
        return 3 ;
    }
     else if(c=='/')
    {
        return 3 ;
    }
    return -1 ;

}
void print(stack<char>&st)
{
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}
void in_postfix(string s,int l)
{
    stack<char>st ;
    string ans="";
    //st.push('(');
    for(int i=0;i<l;i++)
    {
        char c=s[i];

          if(c=='(')
            {
                st.push(c);
            }
        else if(c==')')
            {

                while(st.top()!='(')
                {
                    ans+=st.top() ;
                    st.pop();
                }
                st.pop();
            }
       else  if(c =='+' || c =='-' || c =='*' || c =='/'|| c =='^' )
        {
          
           
            
                
            while((!st.empty()) && ( (check(st.top())>=check(c))))
            {

                
                   ans+=st.top();
                   st.pop();
            

            }
            st.push(c);
        }
        else
        {
            
            ans+=s[i];
        }
    }
    while(!st.empty())
    {
        ans+=st.top();
        st.pop();
    }
    cout<<ans<<endl ;
}
int main()
{
 string s ;
 cin>>s ;
 int l=s.size();
 in_postfix(s,l);


}