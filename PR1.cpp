#include <iostream>
#include <iomanip>  
using namespace std;

class TimeConverter {
public:

    void secondsToTime(int totalSeconds) {
        int hours, minutes, seconds;

        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        cout << "HH:MM:SS => "
             << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << endl;
    }

    void timeToSeconds(int hours, int minutes, int seconds) {
        int totalSeconds;

        totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main() {
    TimeConverter obj;

    cout << "From seconds to HH:MM:SS:" << endl;
    obj.secondsToTime(4200);

    cout << "\nFrom HH:MM:SS to seconds:" << endl;
    obj.timeToSeconds(4, 34, 30);

    return 0;
}