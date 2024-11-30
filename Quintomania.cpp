#include<iostream>
#include<cmath>
using namespace std;

#define ll long long int

#define maxtestcase 1e3
#define maxlength 50
ll a[maxlength];

int main(){
    ll t,n;
    cin>>t;
    for(ll i=0;i<t;i++){
        cin>>n;
        for(ll j=0;j<n;j++){
            cin>>a[j];
        }
        for(ll j=1;j<n;j++){
            if(((abs(a[j]-a[j-1])-5!=0)&&(abs(a[j]-a[j-1])-7!=0))){
                cout<<"NO\n";
                break;
            }
            else{
                if(j==n-1){
                    cout<<"YES\n";
                }
            }
        }
    }

}