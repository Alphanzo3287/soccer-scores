// Alphanzo Moore
// CIS-5 Online
// November 5, 2023
// Assignment 12D: Soccer Scores 

#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

// Function prototypes
int getTotal(int arr[][COLS]);
double getAverage(int arr[][COLS]);
int getRowTotal(int arr[][COLS], int row);
int getColumnTotal(int arr[][COLS], int col);
int getHighestInRow(int arr[][COLS], int row);
int getLowestInRow(int arr[][COLS], int row);

int main() {
    int testData[ROWS][COLS] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {5, 10, 15, 20}
    };

    // Display the two-dimensional array
    cout << "Test Data:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << testData[i][j] << "\t";
        }
        cout << endl;
    }

    // Calculate and display the total and average
    cout << "Total of all values: " << getTotal(testData) << endl;
    cout << "Average of all values: " << getAverage(testData) << endl;

    // Calculate and display the total of a specific row and column
    cout << "Total of row 2: " << getRowTotal(testData, 1) << endl;
    cout << "Total of column 3: " << getColumnTotal(testData, 2) << endl;

    // Find and display the highest and lowest values in a specific row
    cout << "Highest value in row 3: " << getHighestInRow(testData, 2) << endl;
    cout << "Lowest value in row 1: " << getLowestInRow(testData, 0) << endl;

    return 0;
}

int getTotal(int arr[][COLS]) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total += arr[i][j];
        }
    }
    return total;
}

double getAverage(int arr[][COLS]) {
    int total = getTotal(arr);
    return static_cast<double>(total) / (ROWS * COLS);
}

int getRowTotal(int arr[][COLS], int row) {
    int total = 0;
    for (int j = 0; j < COLS; j++) {
        total += arr[row][j];
    }
    return total;
}

int getColumnTotal(int arr[][COLS], int col) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        total += arr[i][col];
    }
    return total;
}

int getHighestInRow(int arr[][COLS], int row) {
    int highest = arr[row][0];
    for (int j = 1; j < COLS; j++) {
        if (arr[row][j] > highest) {
            highest = arr[row][j];
        }
    }
    return highest;
}

int getLowestInRow(int arr[][COLS], int row) {
    int lowest = arr[row][0];
    for (int j = 1; j < COLS; j++) {
        if (arr[row][j] < lowest) {
            lowest = arr[row][j];
        }
    }
    return lowest;
}
