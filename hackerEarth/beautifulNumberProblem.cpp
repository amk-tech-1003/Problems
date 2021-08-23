// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int checkarr(int arr[], int n){
    int c =0;
    int k=0;
    for(int j=0; j<n; j++){
        //cout<<"iterate of j:"<<j;
        int t = arr[j];
        //cout<<"\n"<<"temp:"<<t<<"\n";
        while(k<n){
            //cout<<"ITerate of K: "<<k;
            //cout<<"\n"<<"arr[k]:"<<arr[k];
            if(t == arr[k]){
                c++;
            }
            //cout<<"\n"<<c;
            k++;
        }
        k=0;
        //cout<<"\n"<<c;
        if(c!=t){
            //cout<<"not";
            return 0;
            break;
        }
        else
            c=0;
    }
    return 1;
}
int digits(int num){
    int count=0;
    while(num!=0){
        count++;
        num/=10;
    }
    return count;
}

int inArray(int num, int d){
    int arr[d], i=-1;
    int n=d;
    while(num!=0){
        i++;
        int temp = num%10;
        arr[i]=temp;
        num/=10;
        //cout<<"\n"<<arr[i];
    }
    int result= checkarr(arr,n);
    
}




int beautiful(int num){
    int n= num+1;
    int d, ans;
    while(n){
        d = digits(n);
        
        ans = inArray(n, d);
        if(ans==1){
            return n;
            break;
        }
        else{
            n++;
        }
    }
    
}

int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int N=250;
    int result= beautiful(N);
    cout<<result;

    return 0;
}