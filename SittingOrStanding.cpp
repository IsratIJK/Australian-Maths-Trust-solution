#include<bits/stdc++.h> // include a lot of functionality of C++. This is a combination of many libraries
using namespace std;
int main() {
    freopen("sitin.txt" , "r", stdin);
    freopen("sitout.txt" , "w", stdout);
    
    int r,s,n,result,subtract;
    cin>>r>>s;
    cin>>n;
    
    result=r*s;
    if(result>=n){
        cout<<n<<" "<<0<<endl;
    
    }
    else{
         subtract=n-result;

    cout<<result<<" "<<subtract<<endl;

   
 
    return 0;
}
}