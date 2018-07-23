#include <iostream>
#include <vector>


class Student
{
    public:
        void input()
        {
            int a, b, c, d, e;
            std::cin >> a >> b >> c >> d >> e;
            scores.push_back(a);
            scores.push_back(b);
            scores.push_back(c);
            scores.push_back(d);
            scores.push_back(e);
        }
        int calculateTotalScore()
        {
            int sum = 0;
            for (auto n: scores)
            {
                sum += n;
            }
            return sum;
        }
    private:
        std::vector<int> scores;
};


int main()
{
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
