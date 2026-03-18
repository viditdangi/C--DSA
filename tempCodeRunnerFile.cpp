#include <iostream>
#include <vector>
using namespace std;

// FIX 1: Pass vector by reference (const vector<vector<int>>&) to avoid copying the whole matrix
bool searchMatrix(const vector<vector<int>>& Matrix, int T, int M, int N) {
    if (M == 0 || N == 0) return false; // Safety check

    int s = 0;
    int e = (M * N) - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        // Map 1D index to 2D: Row = mid / TotalColumns, Col = mid % TotalColumns
        int element = Matrix[mid / N][mid % N];

        if (element == T) {
            return true;
        }

        if (element < T) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return false;
}

int main() {
    // Optimization for fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N, T;
    if (!(cin >> M >> N)) return 0;
    
    // Fill the matrix
    vector<vector<int>> Matrix(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> Matrix[i][j];
        }
    }
    
    // Input target after the matrix (adjust if your input format differs)
    cin >> T;

    cout << searchMatrix(Matrix, T, M, N) << endl;

    return 0;
}