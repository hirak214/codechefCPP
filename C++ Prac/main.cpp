//
//  main.cpp
//  CodeChef
//
//  Created by Hirak Desai on 16/11/20.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
   
        while (t--) {
            int n, k, value;
            cin>>n;
            int arr[n];
            for (int i = 0; i<n; i++) {
                cin>>arr[i];
            }
            cin>>k;
            value = arr[k-1];
            sort(arr, arr+n);
            for (int i = 0; i<n; i++) {
                if (arr[i] == value) {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
   
    return 0;
}
