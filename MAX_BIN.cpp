#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes herei
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    string s;
	    ll i,j;
	    cin>>s;
	    if(s[0]=='0')
	    {
	        s[0]='1';
	        k--;
	    }
	    while(k>0)
	    {
	        s.push_back('0');
	        k--;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
