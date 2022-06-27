#include<bits/stdc++.h>
using namespace std;

int factorial( int n){
    if( n == 1){ //base condition to stop the recurison
        return n;
    }

    else {
        return n*factorial(n-1);
    }
}

int main(){

    int num;
    cin>>num;
    int result = factorial(num);
    cout<<result<<endl;

    return 0;
}