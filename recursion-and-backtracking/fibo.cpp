#include<bits/stdc++.h>
using namespace std;



int fibo ( int num){

    cout<<num<<endl;
    if( num <2){
        return num;
    }
    else {
        return (fibo(num-1) + fibo(num-2));
        
    }
}


int main(){

    int n;
    cin>>n;
    int result = fibo(n);
    cout<<result<<endl;

    return 0;
}

