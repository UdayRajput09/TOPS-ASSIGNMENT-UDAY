//Question:1_Assume a class cricketer is declared. Declare a derived class batsman from cricketer.Data member of batsman. 
//Total runs, Average runs and best performance. 
//Member functions input data, calculate average runs, Display data.(Single Inheritance)

#include<iostream> // Include necessary header file for input/output operations.
#include<string> // Include necessary header file for string manipulation.
using namespace std;

// Define a base class for representing a cricketer.
class Cricketer {
protected:
    string playerName; // Protected member variable to store the name of the player.
    int matchesPlayed; // Protected member variable to store the number of matches played.

public:
    // Method to input cricketer data.
    void inputCricketerData() {
        cout << "Enter player name: ";
        getline(cin, playerName); // Input player name.

        cout << "Enter matches played: ";
        cin >> matchesPlayed; // Input matches played.
        cin.ignore(); // Ignore newline character in input buffer.
    }
};

// Define a derived class for representing a batsman, inheriting from Cricketer.
class Batsman : public Cricketer {
private:
    int totalRuns; // Private member variable to store the total runs scored.
    double averageRuns; // Private member variable to store the average runs per match.
    int bestPerformance; // Private member variable to store the best performance (highest score).

public:
    // Method to input batsman data.
    void inputBatsmanData() {
        inputCricketerData(); // Call base class method to input cricketer data.

        cout << "Enter total runs: ";
        cin >> totalRuns; // Input total runs scored.

        cout << "Enter best performance: ";
        cin >> bestPerformance; // Input best performance.
        
        averageRuns = static_cast<double>(totalRuns) / matchesPlayed; // Calculate average runs per match.
        cin.ignore(); // Ignore newline character in input buffer.
    }

    // Method to display batsman data.
    void displayData() {
        cout << "Player Name: " << playerName << endl; // Display player name.
        cout << "Matches Played: " << matchesPlayed << endl; // Display matches played.
        cout << "Total Runs: " << totalRuns << endl; // Display total runs scored.
        cout << "Average Runs: " << averageRuns << endl; // Display average runs per match.
        cout << "Best Performance: " << bestPerformance << endl; // Display best performance.
    }
};

int main() {
    Batsman batsman1; // Create an object of the Batsman class.

    batsman1.inputBatsmanData(); // Input batsman data.
    cout << "\n_____Batsman Information_____\n";
    batsman1.displayData(); // Display batsman information.

    return 0; // Indicate successful execution of the program.
}


