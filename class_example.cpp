//
// Created by gilcu2 on 19/05/2020.
//

#include <vector>
#include <iostream>

class Student {
private:
    std::vector<int> scores=std::vector<int>(5);

public:
    void input();

    int calculateTotalScore();

};

void Student::input() {
    for(int i=0;i<5;i++) {
        int value;
        std::cin>>value;
        scores.push_back(value);
    }
}

int Student::calculateTotalScore() {
    int sum=0;
    for(auto value:scores)
        sum+=value;
    return sum;
}

int main() {
    int n; // number of students
    std::cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    std::cout << count;

    return 0;
}
