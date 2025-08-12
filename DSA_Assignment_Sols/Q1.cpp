#include <iostream>
using namespace std;

void createArray(int arr[], int &n) {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<endl;
    cout<<"Array for the given elements is created";
}

void displayArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int &n) {
    int pos, val;
    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> pos;
    if (pos < 1 || pos > n + 1) {
        cout << "Entered position is invalid" << endl;
        return;
    }
    cout << "Enter value: ";
    cin >> val;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
    cout << endl << "The value is inserted";
}

void deleteElement(int arr[], int &n) {
    int pos;
    cout << "Enter position (1 to " << n << "): ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Entered position is invalid" << endl;
        return;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << endl << "The value is deleted";
}

void linearSearch(int arr[], int n) {
    int key;
    cout << "Enter the value to be searched : ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i + 1 << endl;
            return;
        }
    }
    cout << "Element not found!" << endl;
}

int main() {
    int arr[100], n = 0;
    int menu;

    while (menu != 6){
        cout << "\n MENU\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Select your choice from the menu : ";
        cin >> menu;

        switch (menu) {
            case 1: 
                createArray(arr, n); 
                break;
            case 2: 
                displayArray(arr, n); 
                break;
            case 3: 
                insertElement(arr, n); 
                break;
            case 4: 
                deleteElement(arr, n); 
                break;
            case 5: 
                linearSearch(arr, n); 
                break;
            case 6: 
                cout << "Exiting the program" << endl; 
                break;
            default: 
                cout << "Invalid choice!" << endl;
        }
    } 
   

    return 0;
}