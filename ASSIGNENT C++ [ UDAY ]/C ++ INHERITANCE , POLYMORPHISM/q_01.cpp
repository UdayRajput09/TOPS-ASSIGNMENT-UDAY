/*Q-1 Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;

// Base class
class Cricketer {
public:
    void inputData(int runs) {
        cout << "Total runs scored: " << runs << endl;
    }
};

// Derived class
class Batsman : public Cricketer {
public:
    float avgRuns;
    int totalRuns;
    int bestPerformance;

    float calculateAvgRuns() {
        return totalRuns / 100.0;
    }

    void displayData() {
        cout << "Average runs scored: " << avgRuns << endl;
        cout << "Best performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman obj;
    obj.inputData(100);
    obj.calculateAvgRuns();
    obj.displayData();
    return 0;
}

