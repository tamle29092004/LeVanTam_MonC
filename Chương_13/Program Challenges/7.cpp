#include <iostream>
using namespace std;

class TestScores
{
private:
    double score1;
    double score2;
    double score3;

public:
    // Constructor
    TestScores(double s1, double s2, double s3)
    {
        score1 = s1;
        score2 = s2;
        score3 = s3;
    }

    // Mutator functions
    void setScore1(double s1)
    {
        score1 = s1;
    }

    void setScore2(double s2)
    {
        score2 = s2;
    }

    void setScore3(double s3)
    {
        score3 = s3;
    }

    // Accessor functions
    double getScore1() const
    {
        return score1;
    }

    double getScore2() const
    {
        return score2;
    }

    double getScore3() const
    {
        return score3;
    }

    // Member function to calculate and return the average
    double getAverage() const
    {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main()
{
    double s1, s2, s3;

    cout << "Enter three test scores: ";
    cin >> s1 >> s2 >> s3;

    TestScores testScores(s1, s2, s3);

    cout << "Average of the test scores: " << testScores.getAverage() << endl;

    return 0;
}
