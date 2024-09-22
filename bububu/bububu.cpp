#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//int main() {
//    const int SIZE = 5;
//    int arr[SIZE];
//
//    cout << "Enter 5 numbers: ";
//    for (int i = 0; i < SIZE; ++i) {
//        cin >> arr[i];
//    }
//
//    cout << "result: ";
//    for (int i = SIZE - 1; i >= 0; --i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

////int main() {
////    const int SIZE = 20;
////    int arr[SIZE];
////
////    srand(time(0));
////
////    for (int i = 0; i < SIZE; ++i) {
////        arr[i] = rand() % 100; 
////    }
////
////    cout << "result: ";
////    for (int i = 0; i < SIZE; ++i) {
////        if (arr[i] % 2 == 0) {
////            cout << arr[i] << " ";
////        }
////    }
////    cout << endl;
////
////    return 0;
////}

//////int main() {
//////    const int SIZE = 10;
//////    int arr[SIZE];
//////    int sum = 0, count = 0;
//////
//////    srand(time(0));
//////
//////    for (int i = 0; i < SIZE; ++i) {
//////        arr[i] = rand() % 41 - 20; 
//////    }
//////
//////    cout << "result1: ";
//////    for (int i = 0; i < SIZE; ++i) {
//////        cout << arr[i] << " ";
//////    }
//////    cout << endl;
//////
//////    cout << "result2: ";
//////    for (int i = 0; i < SIZE; ++i) {
//////        if (arr[i] > 0) {
//////            cout << arr[i] << " ";
//////            sum += arr[i];
//////            count++;
//////        }
//////    }
//////    cout << endl;
//////
//////    if (count > 0) {
//////        double average = static_cast<double>(sum) / count;
//////        cout << "average: " << average << endl;
//////    }
//////    else {
//////        cout << "no num" << endl;
//////    }
//////
//////    return 0;
//////}

////////int main() {
////////    const int SIZE = 10;
////////    int arr[SIZE];
////////    int positiveCount = 0, negativeCount = 0;
////////
////////    srand(time(0));
////////
////////    for (int i = 0; i < SIZE; ++i) {
////////        arr[i] = rand() % 11 - 5;
////////    }
////////
////////    cout << " result: ";
////////    for (int i = 0; i < SIZE; ++i) {
////////        cout << arr[i] << " ";
////////        if (arr[i] > 0) positiveCount++;
////////        else if (arr[i] < 0) negativeCount++;
////////    }
////////    cout << endl;
////////
////////    cout << "+: " << positiveCount << endl;
////////    cout << "-: " << negativeCount << endl;
////////
////////    return 0;
////////}

