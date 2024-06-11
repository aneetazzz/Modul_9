#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printMatrix(vector<vector<int>> &matrix, vector<string> &anita_2311102017) {
    cout << "\t";
    for (const auto &city : anita_2311102017) {
        cout << city << "\t";
    }
    cout << endl;

    for (int i = 0; i < matrix.size(); ++i) {
        cout << anita_2311102017[i] << "\t";
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void inputTreeData(vector<string> &anita_2311102017, vector<vector<int>> &adjMatrix) {
    int n;
    cout << "Silakan masukan jumlah simpul: ";
    cin >> n;

    anita_2311102017.resize(n);
    adjMatrix.resize(n, vector<int>(n, 0));

    cout << "Silakan masukan nama simpul" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> anita_2311102017[i];
    }

    cout << "Silakan masukan bobot antar simpul" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                cout << anita_2311102017[i] << " ---> " << anita_2311102017[j] << ": ";
                cin >> adjMatrix[i][j];
            }
        }
    }
}

int main() {
    vector<string> anita_2311102017;
    vector<vector<int>> adjMatrix;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Input data tree\n";
        cout << "2. Tampilkan matrix adjacency\n";
        cout << "3. Keluar\n";
        cout << "Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputTreeData(anita_2311102017, adjMatrix);
                break;
            case 2:
                if (anita_2311102017.empty() || adjMatrix.empty()) {
                    cout << "Data tree belum diinputkan.\n";
                } else {
                    printMatrix(adjMatrix, anita_2311102017);
                }
                break;
            case 3:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != 3);

    return 0;
}
