#include <iostream>
using namespace std;

int main()
{
    string appName = "Todo List App";
    string creatorName = "Rexsy Bima Trima Wahyu";
    double versionApp = 0.1;
    char type = 'B';
    string monthBirth = "August";
    int dateBirth = 11;
    int yearBirth = 2001;
    bool isNewinCPP = true;
    cout << creatorName.find("Wahyu", 0) << endl;
    cout << creatorName.substr(4, 6) << endl;
    cout << "Welcome to the " << appName << endl;
    cout << "Created by " << creatorName << endl;
    cout << "Creator app total character : " << creatorName.length() << endl;
    cout << "Initial Name : " << creatorName[0] << creatorName[6] << creatorName[11] << creatorName[17] << endl;
    cout << "Born in " << monthBirth << dateBirth << yearBirth << endl;
    cout << "App version: " << versionApp << endl;
    cout << "App type : " << type << endl;
    cout << "is a newbie : " << isNewinCPP << endl;
    return 0;
}