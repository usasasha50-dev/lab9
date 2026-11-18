#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    vector<string> dateList = {
        "2026-05-14",
        "2023-11-02",
        "2025-01-15",
        "2024-08-20",
        "2022-12-31"
    };

    cout << "Початковий список дат: " << endl;
    for (const string& date : dateList) {
        cout << date << "   ";
    }
    cout << endl << endl;

    sort(dateList.begin(), dateList.end());

    cout << "Список дат після сортування (у хронологічному порядку): " << endl;
    for (const string& date : dateList) {
        cout << date << "   ";
    }
    cout << endl;

    return 0;
}
