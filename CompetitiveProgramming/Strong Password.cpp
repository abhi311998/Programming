#include <bits/stdc++.h>
using namespace std;
int main()
{
    short n,i;
    string str;
    bool check[4]={0};     //check[0]= digit; check[1]=upper; check[2]=lower; check[3]=special
    cin>>n;
    cin.ignore();
    cin>>str;
    
    {
        for(i=0;i<n;i++)
        {
            if(str[i]>='0' && str[i]<='9') check[0]=1;
            else if(str[i]>='A' && str[i]<='Z') check[1]=1;
            else if(str[i]>='a' && str[i]<='z') check[2]=1;
            else if(str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='*' || str[i]=='(' || str[i]==')' || str[i]=='-' || str[i]=='+') check[3]=1;    
        }
        int count=0;
        for(i=0;i<4;i++)
        {
        	cout<<check[i]<<" ";
            if(check[i]==0)
                count++;
        }
        cout<<endl;
        if(n<6 && count>(6-n)) cout<<count;
        else if(n<6 && count<=(6-n)) cout<<6-n;
        else cout<<count;
    }
}
