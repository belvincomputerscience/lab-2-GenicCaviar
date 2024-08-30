// Vince Garcia, Lab #2 C++, "Grade calculator that despises you"
#include <iostream>
using namespace std;

int main()
{
    cout <<
    "Hey, idiot." << endl <<
    "Since you can't be bothered to do this yourself or even use a darn calculator," << endl <<
    "I have brought upon myself to calculate the average of 4 grades for you." << endl << endl <<
    "What are you doing just standing there? Input the 4 grades already." << endl;

    int GRADE1, GRADE2, GRADE3, GRADE4;
    cout <<
    "Input Grade #1: ";
    cin >> GRADE1;

    cout <<
    "Input Grade #2: ";
    cin >> GRADE2;

    cout <<
    "Input Grade #3: ";
    cin >> GRADE3;

    cout <<
    "Input Grade #4: ";
    cin >> GRADE4;

    double RESULT = (GRADE1 + GRADE2 + GRADE3 + GRADE4)/4.0;

    cout << endl <<
    "Sheesh, what took you so long? God, you're slow at typing a freaking number." << endl <<
    "In fact, you were so slow at typing those 4 small numbers" << endl <<
    "that I've finished calculating far quicker than you could press your finger on a key." << endl << endl <<
    "Anyways, the average of those 4 grades are " << RESULT << "." << endl <<
    "Now scram. Get outta here. I refuse to do anything more for you as you treat me as nothing more than your sentient calculator." << endl <<
    "You disgust me." << endl << endl;

    return 0;
}