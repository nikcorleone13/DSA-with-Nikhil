#include<bits/stdc++.h>
using namespace std;

int binary ( int target, int arr[], int s, int e ){
    
    if( s>e){
        return -1;
    } 

    int mid = s+(e-s) /2 ;

     if( arr[mid] == target){
        return mid;
    }
    
    else if ( arr[mid] > target ) {
        return binary( target , arr, s, mid-1 );
    }

    else{
        return binary( target , arr, mid+1, e );
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,33,66,77,87,100};
    int target;
    cin>>target;
    int s = 0;
    int e = sizeof(arr)/sizeof(arr[0]);
    int result = binary(target, arr, s,e);
    cout<<result<<endl;

    return 0;
}