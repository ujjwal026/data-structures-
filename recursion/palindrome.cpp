#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool recursionarr(char arr[] , int low,int high){
    
   if(arr[low]==arr[high]){
     return   recursionarr(arr,++low,--high);
      
   }
   else if(arr[low]arr[high]){
     return false ;
   }
   else{
       return true;
   }
}

int main() {
    // Write C++ code here
   char  arr[5]={'3','1','1','3'};
   
    bool res= recursionarr(arr,0,3);
    if(res==true){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }


    return 0;
}