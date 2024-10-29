#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;

    int score;

    cout << "SAT Score Calculator! (done by billybobjo on github)" << endl;
    cout << "Enter your SAT score (out of 1600): ";
    cin >> score;

    if (score >= 1550 && score <= 1600) {
        cout << "Grade: A+ (Top 1% of test-takers you literally got everything right good job and welcome to harvard!)" << endl;
    } else if (score >= 1490 && score <= 1540) {
        cout << "Grade: A (Excellent; competitive for top schools you dont touch grass)" << endl;
    } else if (score >= 1420 && score <= 1480) {
        cout << "Grade: A- (Very strong; above 90th percentile your literally top 10%)" << endl;
    } else if (score >= 1350 && score <= 1410) {
        cout << "Grade: B+ (Strong; competitive for many universities one of the best almost)" << endl;
    } else if (score >= 1280 && score <= 1340) {
        cout << "Grade: B (Above average; good for most colleges niceee you scored really good)" << endl;
    } else if (score >= 1200 && score <= 1270) {
        cout << "Grade: B- (Average to above average getting closer to the top)" << endl;
    } else if (score >= 1120 && score <= 1190) {
        cout << "Grade: C+ (Average range for college admissions good job your not half bad)" << endl;
    } else if (score >= 1040 && score <= 1110) {
        cout << "Grade: C (Below average; may limit college options)" << endl;
    } else if (score >= 960 && score <= 1030) {
        cout << "Grade: C- (Low; may require additional improvement)" << endl;
    } else if (score >= 880 && score <= 950) {
        cout << "Grade: D+ (Below college-ready benchmark beginner)" << endl;
    } else if (score >= 810 && score <= 870) {
        cout << "Grade: D (lock in bro)" << endl;
    } else if (score >= 0 && score <= 800) {
        cout << "Grade: F (your cooked)" << endl;
    } else {
        cout << "Invalid score. Please enter a score between 0 and 1600." << endl;
    }

    return 0;
}
