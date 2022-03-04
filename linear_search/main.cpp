//
//  main.cpp
//  linear_search
//
//  Created by Md Habibour Rahman on 4/3/22.
//

#include <iostream>
using namespace std;

int linearSearch(int arr[ ],int n,int key){
    for (int i=0; i<n; i++) {
        if (arr[i]==key) {
            return key;
        }
    }
    return -1;
}

int main( ){
    
    int n;
    cin>>n;
    
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    
    cout<<linearSearch(arr, n, key)<<endl;
    
}
