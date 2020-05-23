//
// Created by gilcu2 on 18/05/2020.
//

#include<iostream>
#include<set>
#include<string>
int main()
{
    std::set<int> setOfNumbers;

    int n_queries;

    std::cin >> n_queries;

    for (int i=0;i<n_queries;i++) {
        int operator0;
        int operand;

        std::cin>>operator0>>operand;

        switch (operator0) {

            case 1:
                setOfNumbers.insert(operand);
                break;
            case 2:
                setOfNumbers.erase(operand);
                break;
            case 3:
                auto it=setOfNumbers.find(operand);
                if(it!=setOfNumbers.end())
                    std::cout<<"Yes"<<std::endl;
                else
                    std::cout<<"No"<<std::endl;

        }

    }

    return 0;
}

