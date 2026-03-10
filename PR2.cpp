#include <iostream>
#include <cstring>
using namespace std;

class TrainRecord {
private:
    int id;
    char name[50];
    char from[50];
    char to[50];
    char departure[10];
    static int count;

public:
    TrainRecord() {
        id = 0;
        strcpy(name, "notknown");
        strcpy(from, "Notknown");
        strcpy(to, "Notknown");
        strcpy(departure, "N/A");
        count++;
    }

    TrainRecord(int tid, const char tname[], const char tsrc[], 
                const char tdest[], const char ttime[]) {
        id = tid;
        strcpy(name, tname);
        strcpy(from, tsrc);
        strcpy(to, tdest);
        strcpy(departure, ttime);
        count++;
    }

    ~TrainRecord() {
        count--;
    }

    void setId(int tid)              { id = tid; }
    void setName(const char n[])     { strcpy(name, n); }
    void setFrom(const char f[])     { strcpy(from, f); }
    void setTo(const char t[])       { strcpy(to, t); }
    void setDeparture(const char d[]){ strcpy(departure, d); }

   int getId() const
{
    return id;
}
    const char* getName()   { return name; }
    const char* getFrom()   { return from; }
    const char* getTo()     { return to; }
    const char* getDeparture() { return departure; }
    static int getCount()   { return count; }

    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Train Name: ";
        cin.getline(name, 50);
        cout << "Enter Source: ";
        cin.getline(from, 50);
        cout << "Enter Destination: ";
        cin.getline(to, 50);
        cout << "Enter Train Time: ";
        cin.getline(departure, 10);
    }

    void displayTrainDetails() const {
        cout << "Train Number: " << id       << endl;
        cout << "Train Name: "   << name     << endl;
        cout << "Source: "       << from     << endl;
        cout << "Destination: "  << to       << endl;
        cout << "Train Time: "   << departure<< endl;
    }
};

int TrainRecord::count = 0;

class RailwaySystem {
private:
    TrainRecord trains[100];
    int totalTrains;

public:
    RailwaySystem() : totalTrains(0) {

        trains[totalTrains++] = TrainRecord(101, "Okha Express",     "Surat",     "Mumbai", "10 AM");
        trains[totalTrains++] = TrainRecord(102, "Rajdhani Express", "Delhi",     "Mumbai", "5 PM");
        trains[totalTrains++] = TrainRecord(103, "Shatabdi Express", "Ahmedabad", "Jaipur", "6 AM");
    }

    void addTrain() {
        if (totalTrains >= 100) {
            cout << "Record limit reached!\n";
            return;
        }
        trains[totalTrains].inputTrainDetails();
        totalTrains++;
        cout << "Train Added Successfully!\n";
    }

    void displayAllTrains() const {
        if (totalTrains == 0) {
            cout << "No train records available.\n";
            return;
        }
        for (int i = 0; i < totalTrains; i++) {
            cout << "\nTrain " << (i + 1) << " details:\n";
            trains[i].displayTrainDetails();
        }
    }

    void searchTrainByNumber(int num) const {
        for (int i = 0; i < totalTrains; i++) {
            if (trains[i].getId() == num) {
                trains[i].displayTrainDetails();
                return;
            }
        }
        cout << "Train with number " << num << " not found!\n";
    }
};

int main() {
    RailwaySystem rs;
    int option, searchNum;

    do {
        cout << "\n--- Railway Reservation System Menu ---\n";
        cout << "1. Add New Train Record\n";
        cout << "2. Display All Train Records\n";
        cout << "3. Search Train by Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                rs.addTrain();
                break;
            case 2:
                rs.displayAllTrains();
                break;
            case 3:
                cout << "Enter Train Number to search: ";
                cin >> searchNum;
                rs.searchTrainByNumber(searchNum);
                break;
            case 4:
                cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                cout << "Invalid option! Please try again.\n";
        }
    } while (option != 4);

    return 0;
}