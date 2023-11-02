#include <iostream>
#include <string>

using namespace std;

class Question
{
private:
    string question;
    string answers[4];
    int correctAnswer;

public:
    Question(string q, string a1, string a2, string a3, string a4, int correct)
        : question(q), correctAnswer(correct)
    {
        answers[0] = a1;
        answers[1] = a2;
        answers[2] = a3;
        answers[3] = a4;
    }

    string getQuestion() const
    {
        return question;
    }

    string getAnswer(int index) const
    {
        return answers[index];
    }

    bool isCorrect(int index) const
    {
        return (index == correctAnswer);
    }
};

int main()
{
    Question questions[10] = {
        {"What is the capital of France?", "Paris", "Berlin", "Madrid", "Rome", 1},
        {"Which planet is known as the Red Planet?", "Venus", "Mars", "Jupiter", "Saturn", 2},
        {"What is the largest mammal?", "Elephant", "Giraffe", "Blue Whale", "Lion", 3},
        {"What gas do plants absorb from the atmosphere?", "Carbon Dioxide", "Oxygen", "Nitrogen", "Hydrogen", 1},
        {"Who wrote the play 'Romeo and Juliet'?", "Charles Dickens", "Jane Austen", "William Shakespeare", "Mark Twain", 3},
        {"What is the chemical symbol for gold?", "Go", "Ag", "Au", "Gd", 2},
        {"Which country is famous for the Great Wall?", "India", "Japan", "China", "Russia", 3},
        {"What is the largest organ in the human body?", "Brain", "Heart", "Skin", "Liver", 2},
        {"What is the currency of Japan?", "Yen", "Dollar", "Euro", "Pound", 1},
        {"What is the tallest mountain in the world?", "Mount Kilimanjaro", "Mount St. Helens", "Mount Everest", "Mount Fuji", 3}};

    int player1Score = 0;
    int player2Score = 0;

    for (int i = 0; i < 10; ++i)
    {
        cout << "Player 1, here's your question:\n";
        cout << questions[i].getQuestion() << endl;
        for (int j = 0; j < 4; ++j)
        {
            cout << j + 1 << ". " << questions[i].getAnswer(j) << endl;
        }
        int answer;
        cout << "Your answer (1-4): ";
        cin >> answer;
        if (questions[i].isCorrect(answer - 1))
        {
            cout << "Correct!\n";
            player1Score++;
        }
        else
        {
            cout << "Wrong. The correct answer is: " << questions[i].getAnswer(questions[i].isCorrect(answer - 1)) << endl;
        }
        cout << "Player 1's score: " << player1Score << "\n\n";

        cout << "Player 2, here's your question:\n";
        cout << questions[i].getQuestion() << endl;
        for (int j = 0; j < 4; ++j)
        {
            cout << j + 1 << ". " << questions[i].getAnswer(j) << endl;
        }
        cout << "Your answer (1-4): ";
        cin >> answer;
        if (questions[i].isCorrect(answer - 1))
        {
            cout << "Correct!\n";
            player2Score++;
        }
        else
        {
            cout << "Wrong. The correct answer is: " << questions[i].getAnswer(questions[i].isCorrect(answer - 1)) << endl;
        }
        cout << "Player 2's score: " << player2Score << "\n\n";
    }

    cout << "Game Over!\n";
    cout << "Player 1's score: " << player1Score << endl;
    cout << "Player 2's score: " << player2Score << endl;

    if (player1Score > player2Score)
    {
        cout << "Player 1 wins!\n";
    }
    else if (player2Score > player1Score)
    {
        cout << "Player 2 wins!\n";
    }
    else
    {
        cout << "It's a tie!\n";
    }

    return 0;
}
