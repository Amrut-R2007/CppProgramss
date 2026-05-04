#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int score = 0;
    char choice;
    
    string questions[] = {
        "1. Who is The Prime Minister of India?",
        "2. Who is the President of India?",
        "3. Who is the CM of Uttar Pradesh?",
        "4. Who is the Home Minister of India?",
        "5. Who is the Transport Minister of India?"
    };

    string options[][4] = {
        {"A. Narendra Modi", "B. Yogi Adithyanath", "C. Amit Shah", "D. Himant Biswa"},
        {"A. Narendra Modi", "B. Yogi Adithyanath", "C. Droupadi Murmu", "D. Himant Biswa"},
        {"A. Narendra Modi", "B. Yogi Adithyanath", "C. Droupadi Murmu", "D. Himant Biswa"},
        {"A. Narendra Modi", "B. Amit Shah", "C. Droupadi Murmu", "D. Himant Biswa"},
        {"A. Narendra Modi", "B. Yogi Adithyanath", "C. Droupadi Murmu", "D. Nithin Gadkari"}
    };

    // Changed to char array for easier comparison
    char answerkey[] = {'A', 'C', 'B', 'B', 'D'};
    int size = sizeof(questions) / sizeof(questions[0]);

    for(int i = 0; i < size; i++)
    {
        cout << "********************************************************\n";
        cout << questions[i] << endl;
        cout << "********************************************************\n";

        // Removed the semicolon after the for loop header
        for(int j = 0; j < 4; j++)
        {
            cout << options[i][j] << endl;
        }

        cout << "Enter your Choice: ";
        cin >> choice; // Added missing input
        choice = toupper(choice);

        if(choice == answerkey[i])
        {
            cout << "CORRECT\n\n";
            score++;
        }
        else
        {
            cout << "WRONG\n";
            cout << "Correct Answer: " << answerkey[i] << "\n\n";
        }
    }

    cout << "************************** RESULT ******************************\n";
    cout << "Total Correct Answers: " << score << endl;
    cout << "Total Questions: " << size << endl;
    // Multiplied by 100 for actual percentage
    cout << "Percentage: " << (score / (double)size) * 100 << "%" << endl;
    cout << "****************************************************************\n";

    return 0;
}