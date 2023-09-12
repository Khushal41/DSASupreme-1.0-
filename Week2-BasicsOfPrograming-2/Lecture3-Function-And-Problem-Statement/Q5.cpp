// Write a function of student & Gread problem

#include <iostream>
using namespace std;
char getGrade(int marks)
{
    //     if (marks >= 90)
    //         return 'A';
    //     else if (marks >= 80)
    //         return 'B';
    //     else if (marks >= 70)
    //         return 'C';
    //     else if (marks >= 60)
    //         return 'D';
    //     else
    //         return 'E';

    // assuming marks is between 0 to 100
    switch (marks / 10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'E';
    }
}
int main()
{
    int marks;
    cout << "Enter the marks : " << endl;
    cin >> marks;

    char finalGread = getGrade(marks);
    cout << "Final Gread : " << finalGread << endl;

    return 0;
}