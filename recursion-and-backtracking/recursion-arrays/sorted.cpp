#include<bits/stdc++.h>
using namespace std;

int sorted( int arr[], int index, int len){


    // cout<<len<<endl;
    //base condition
    if( index == len-1){
        cout<<"true"<<endl;
    }
    else{
            if (arr[index] < arr[index + 1]) {
                sorted(arr, index+1, len);
            }
                return false;

    }
}

int main(){
    int arr[]={1,4,5,8,11}, len = 0;
    len = (sizeof(arr)/sizeof(arr[0]));
    sorted(arr,0,len);
    

}