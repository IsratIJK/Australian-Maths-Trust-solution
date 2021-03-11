#include<bits/stdc++.h> 
using namespace std;
int main() {
    freopen("mixin.txt" , "r", stdin);
    freopen("mixout.txt" , "w", stdout);
    
    int n,a,b,c;
    cin>>a>>b;
    
    n=a/b;
    c=a%b;
    if(c==0){
        cout<<n<<endl;
    }
    else{
        cout<<n<<" "<<c<<"/"<<b<<endl;
    }
    return 0;
    
}