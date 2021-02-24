#include<bits/stdc++.h> // include a lot of functionality of C++. This is a combination of many libraries
using namespace std;
int main() {
    freopen("addin.txt" , "r", stdin);
    freopen("addout.txt" , "w", stdout);
    
    int r,s,n,result,subtract;
    cin>>r>>s>>n;
    result=r*s;
    subtract=n-result;

    cout<<result<<endl;
    cout<<subtract<<endl;
    return 0;
}
