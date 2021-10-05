//Problem Code:FAIRELCT
//https://www.codechef.com/submit/FAIRELCT
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        ll john=0, jack=0;
        cin>>n>>m;
        priority_queue<ll>mx;
        priority_queue<ll, vector<ll>, greater<ll>>mn;
        for(int i=0; i<n; i++){
            ll x;
            cin>>x;
            john+=x;
            mn.push(x);
        }
        for(int i=0; i<m; i++){
            ll x;
            cin>>x;
            jack+=x;
            mx.push(x);
        }
        int ans=0;
        while(john<=jack){
            int john_ele=mn.top();
            int jack_ele=mx.top();
            
            if(john_ele>=jack_ele){
                break;
            }
            ans++;
            john-=john_ele;
            john+=jack_ele;
            jack-=jack_ele;
            jack+=john_ele;
            mn.pop();
            mx.pop();
            mn.push(jack_ele);
            mx.push(john_ele);
        }
        if(jack>=john)cout<<-1<<endl;
        else cout<<ans<<endl;
        
    }
    return 0;
}
