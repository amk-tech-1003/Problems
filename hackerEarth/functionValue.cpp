#include <iostream>
#include<math.h>
using namespace std;
void fun(int N, int a[]){
    
    long long ans=0;
    
    long var = pow(10,3);
    //cout<<"\n"<<var;
    long p = pow(10,9)+7;
    for(int i=0; i<=N-1; i++){
        for(int j=i+1; j<N; j++){
            for (int k=0; k<=var; k++){
                //cout<<"\n"<<k;
                long long temp = pow(2,k);
                //cout<<"\n"<<temp;
                ans += ((temp *(((a[i]/temp)%2)*((a[j]/temp)%2)))%p);
                //cout<<"\n"<<ans;
            }
        }
    }
    int res=ans+N;
     cout<<"\n"<<ans;
    //cout<<"\n"<<ans<<"+"<<N<<"="<<res;
   
}
int main()
{
    int N=6;
    int a[N]={34,48,8,72,67,90};
    fun(N, a);
    cout<<"\n"<<"{34,48,8,72,67,90}"<<"Expected: 270"<<"\n";
    
    int N1=3;
    int a1[N1]={1,1,1};
    fun(N1, a1);
    cout<<"\n"<<"{1,1,1}"<<"Expected: 3"<<"\n";
    
    int N2=2;
    int a2[N2]={88,78};
    fun(N2,a2);
    cout<<"\n"<<"{88,78}"<<"Expected: 72"<<"\n";
    
    int N3=2;
    int a3[N3]={2,3};
    fun(N3,a3);
    cout<<"\n"<<"{2,3}"<<"Expected: 2"<<"\n";

    return 0;
}

