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

    int to_erase,to_erase0,to_erase1;
    cin>>to_erase;
    cin>>to_erase0>>to_erase1;

    myvect.erase(myvect.begin()+to_erase);
    myvect.erase(myvect.begin()+to_erase0,myvect.begin()+to_erase1);

    for(auto v:myvect)
        cout<<v<<" ";
    cout<<endl;
    return 0;
}
