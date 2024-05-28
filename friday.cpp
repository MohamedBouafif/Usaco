/*
ID: mohamed288
TASK: friday
LANG: C++
*/
#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n;
    fin >> n;
    int start = 2; // Monday (0: Saturday, 1: Sunday, ..., 6: Friday)

    vector<int> v(7, 0); // Vector to store occurrences for each day of the week

    for (int year = 1900; year < 1900 + n; year++) {
        for (int month = 1; month <= 12; month++) {
            int days;
            if (month == 9 || month == 4 || month == 6 || month == 11)
                days = 30;
            else if (month == 2) {
                if (year % 100 == 0) {
                    if (year % 400 == 0)
                        days = 29;
                    else
                        days = 28;
                } else {
                    if (year % 4 == 0)
                        days = 29;
                    else
                        days = 28;
                }
            } else
                days = 31;

            // Calculate the day of the 13th of the current month
            int thirteenth_day = (start + 12) % 7;

            // Increment the count for the day of the 13th
            v[thirteenth_day]++;

            // Update the starting day for the next month
            start = (start + days) % 7;
        }
    }

    // Output the results
    for (int i = 0; i < v.size()-1 ; i++) {
        fout << v[i] << " ";
    }
    fout<<v[v.size()-1];
    fout<<endl;

    return 0;
}
