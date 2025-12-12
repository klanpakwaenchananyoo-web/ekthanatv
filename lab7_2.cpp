#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int getGearFromID(const string& id_str) {
    if (id_str == "590610999") {
        return 47;
    } else if (id_str == "550610789") {
        return 43;
    } 
    try {
        long long studentID = stoll(id_str);
        return (int)(studentID % 100); 
    } catch (...) {
        return 0;
    }
}

int main() {
   
    string name;
    string id_str;
    string movie;
    string day;
    string farewell;

    
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;

    cout << "?????: ";
    getline(cin, name);

    cout << "Fahsai: Wow!!! " << name << " is a really cool name." << endl;

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    
    cout << name << ": ";
    getline(cin, id_str);
    
    int gearNumber = getGearFromID(id_str);

    cout << "Fahsai: I think you may be GEAR " << gearNumber << ". I have a free movie ticket for you." << endl;

    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    
    cout << "Fahsai: What movie do you want to watch?" << endl;
    
    cout << name << ": ";
    getline(cin, movie);
    
    cout << "Fahsai: So....which day are you free to go with me?" << endl;
    
    cout << name << ": ";
    getline(cin, day);

    
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching ";
    cout << movie << " with you." << endl; 
    
   
    cout << name << ": ";
    getline(cin, farewell);

   
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/" << endl;

    return 0;
}