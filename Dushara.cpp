#include <iostream>
#include <string>
#include <vector>
using namespace std;

void displayIntroduction()
{
    cout << "----------------------" << endl;
    cout << "    Happy Dussehra     " << endl;
    cout << "----------------------" << endl;
    cout << "Dussehra is a major Hindu festival celebrated to mark the victory of good over evil.\n";
    cout << "It commemorates the killing of Ravana by Lord Rama.\n\n";
}

void takeQuiz()
{
    vector<string> questions = {
        "1. Who killed Ravana in the epic Ramayana?",
        "2. Dussehra is celebrated after how many days of Navaratri?",
        "3. What is another name for Dussehra?",
        "4. Who is Ravana's brother who helped Lord Rama?"};

    vector<string> answers = {"Ram", "9", "Vijayadashami", "Vibhishana"};
    string userAnswer;
    int score = 0;

    cout << "Let's have a small quiz on Dussehra! Answer the following questions:\n\n";

    for (size_t i = 0; i < questions.size(); ++i)
    {
        cout << questions[i] << endl;
        cout << "Your answer: ";
        getline(cin, userAnswer);

        // Convert to lowercase for case-insensitive comparison
        for (auto &c : userAnswer)
            c = tolower(c);

        // Convert correct answer to lowercase
        string correctAnswer = answers[i];
        for (auto &c : correctAnswer)
            c = tolower(c);

        if (userAnswer == correctAnswer)
        {
            cout << "Correct!\n\n";
            score++;
        }
        else
        {
            cout << "Wrong. The correct answer is: " << answers[i] << "\n\n";
        }
    }

    cout << "Quiz completed! You scored " << score << " out of " << questions.size() << ".\n\n";
}

// Function to display a final greeting message
void displayFinalMessage()
{
    cout << "--------------------------------\n";
    cout << "Wishing you and your family a very\n";
    cout << "Happy and Prosperous Dussehra!\n";
    cout << "May the blessings of Lord Rama be with you!\n";
    cout << "--------------------------------\n";
}

int main()
{

    displayIntroduction();

    takeQuiz();

    displayFinalMessage();

    return 0;
}
