#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> intList;
    
    intList.push_front(7);
    intList.push_front(6);
    intList.push_front(5);
    intList.push_front(4);
    intList.push_front(3);

    cout << "Початковий список цілих чисел: ";
    for (int n : intList) {
        cout << n << " ";
    }
    cout << endl;

    int lastEven = -1;
    bool hasEven = false;
    for (int n : intList) {
        if (n % 2 == 0) {
            lastEven = n;
            hasEven = true;
        }
    }

    forward_list<int> resultList;
    

    for (int n : intList) {
        resultList.push_front(n);
        if (n % 2 != 0 && hasEven) {
            resultList.push_front(lastEven);
        }
    }
    
    forward_list<int> finalResult;
    auto prevIt = finalResult.before_begin();
    
    for (int n : intList) {
        prevIt = finalResult.insert_after(prevIt, n);
        if (n % 2 != 0 && hasEven) {
            prevIt = finalResult.insert_after(prevIt, lastEven);
        }
    }

    if (hasEven) {
        cout << "Останній парний елемент: " << lastEven << endl;
    } else {
        cout << "Парних елементів у списку немає." << endl;
    }

    cout << "Список після вставки: ";
    for (int n : finalResult) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}