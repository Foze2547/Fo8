#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    string movie;
    string day;
    string zzz;
    int id;
    int idd;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"
         << "\n";
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n"
         << "Fahsai: I think you are an Engineering student. What is your student ID?"
         << "\n"
         << name << ": ";
    cin >> id;
    idd = id / 10000000;
    cout << "Fahsai: I think you may be GEAR " << idd - 12 << "."
         << " I have a free movie ticket for you."
         << "\n"
         << "Fahsai: Let's go to the cinema together!!!"
         << "\n"
         << "Fahsai: What movie do you want to watch?"
         << "\n"
         << name << ": ";
    cin.ignore();
    getline(cin, movie);
    cout << "Fahsai: So....which day are you free to go with me?"
         << "\n"
         << name << ": ";
    getline(cin, day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you."
         << "\n"
         << name << ": ";
    getline(cin, zzz);
    ;
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
}
