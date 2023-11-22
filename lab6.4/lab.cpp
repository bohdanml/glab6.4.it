#include <iostream>
#include <cmath> 

using namespace std;

//  обчислення кількості від’ємних елементів масиву
int countNegativeElements(double arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

//  знаходження мінімального за модулем елементу масиву
double findMinAbsoluteElement(double arr[], int n) {
    double minElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (abs(arr[i]) < abs(minElement)) {
            minElement = arr[i];
        }
    }
    return minElement;
}

//  обчислення суми модулів елементів після мінімального за модулем елементу
double sumOfAbsoluteElementsAfterMin(double arr[], int n) {
    double minElement = findMinAbsoluteElement(arr, n);
    double sum = 0;
    bool foundMin = false;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == minElement) {
            foundMin = true;
        }
        else if (foundMin) {
            sum += abs(arr[i]);
        }
    }
    return sum;
}

// Функція для заміни від’ємних елементів їх квадратами
void replaceNegativeElementsWithSquares(double arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            arr[i] = arr[i] * arr[i];
        }
    }
}

int main() {
    int n;
    //розмір масиву
    cout << "size of the array: ";
    cin >> n;

    double* arr = new double[n];
    //Ввести дійсні числа
    cout << "Enter " << n << "  real numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Виведення масиву
    //масив
    cout << "array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Обчислення кількості від’ємних елементів
    int negativeCount = countNegativeElements(arr, n);
    //числа з знаком -
    cout << "Number of negative elements: " << negativeCount << endl;

    // Знаходження мінімального за модулем елементу
    double minElement = findMinAbsoluteElement(arr, n);
    cout << "Minimum absolute element: " << minElement << endl;

    // Обчислення суми модулів елементів після мінімального за модулем елементу
    double sumAfterMin = sumOfAbsoluteElementsAfterMin(arr, n);
    cout << "Sum of absolute elements after the minimum absolute element: " << sumAfterMin << endl;

    // Заміна від’ємних елементів їх квадратами
    replaceNegativeElementsWithSquares(arr, n);

    // Виведення модифікованого масиву
    cout << "Modified array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
    
}