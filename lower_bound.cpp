//
// Created by gilcu2 on 18/05/2020.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

void read_vector(vector<int> &myvect);


void write_vector(const vector<int> &myvect);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    vector<int> myvect;
    read_vector(myvect);

    int n_queries;
    vector<int> queries;
    read_vector(queries);

    for (auto q:queries) {
        auto lower = lower_bound(myvect.begin(), myvect.end(), q);
        if (lower != myvect.end() && *lower==q)
            cout << "Yes " << lower - myvect.begin()+1<<endl;
        else
            cout << "No " << lower - myvect.begin()+1<<endl;
    }


    return 0;
}

void write_vector(const vector<int> &myvect) {
    for (auto v:myvect)
        cout << v << " ";
    cout << endl;
}

void read_vector(vector<int> &myvect) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        myvect.push_back(value);
    }
}
