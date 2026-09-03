#include<iostream>
using namespace std;
int s=0, e=n-1;
while(s<=e){
    int mid = s + (e-s)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        s = mid + 1;
    }
    else{
        e = mid - 1;
    }
}
return -1;