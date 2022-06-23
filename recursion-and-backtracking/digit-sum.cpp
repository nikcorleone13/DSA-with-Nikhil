#include<bits/stdc++.h>
using namespace std;

int sum( int n){
    if( n == 0){ //base condition 
        return 0;
    }

    else {
        return sum(n/10) + (n%10);
    }
}

int main(){

    int num;
    cin>>num;
    int result = sum(num);
    cout<<result<<endl;

    return 0;
}