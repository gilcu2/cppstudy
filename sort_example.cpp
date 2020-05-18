//
// Created by gilcu2 on 18/05/2020.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    auto n=0;
    vector<int> myvect;
    cin >> n;
    for(int i=0;i<n;i++) {
        int value;
        cin>>value;
        myvect.push_back(value);
    }

    sort(myvect.begin(),myvect.end());

    for(auto p=myvect.begin();p!=myvect.end();p++)
        cout<<*p<<" ";


    return 0;
}
