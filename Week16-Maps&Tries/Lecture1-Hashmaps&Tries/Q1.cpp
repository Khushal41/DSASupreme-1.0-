// ### Read Documentation : -https : // en.cppreference.com/w/cpp/container/unordered_map
#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // Creation
    unordered_map<string, int> n;

    // Insertion
    pair<string, int> p = make_pair("student1", 1);
    n.insert(p);

    pair<string, int> p2("student2", 1);
    n.insert(p2);

    n["student3"] = 10;

    // Access Key
    cout << n.at("student1") << endl;
    cout << n["student3"] << endl;

    // Search
    cout << n.count("student1") << endl;

    // Find function
    if (n.find("student2") != n.end())
    {
        cout << "Student found" << endl;
    }
    else
    {
        cout << "Student not found" << endl;
    }
    cout << n.size() << endl;
    cout << n["student4"] << endl;
    cout << n.size() << endl;

    cout << "Printing All Entry" << endl;
    for (auto i : n)
    {
        cout << i.first << "->" << i.second << endl;
    }

    

    return 0;
}