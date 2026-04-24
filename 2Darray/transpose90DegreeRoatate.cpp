// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <vector <int>> matrix = {
        {1,2,3,4},
        {4,5,6,5},
        {7,8,9,6}
    };
    // {
    //     {7,4,1}
    //     {8,5,2}
    //     {9,6,3}
    //     {6,5,4}
    // }
    // {
    // {1,4,7}
    // {2,5,8}
    // {3,6,9}
    // {4,5,6}
    // }
    
    int rows = matrix.size();
    int col = matrix[0].size();
    vector <vector <int>> transposeMatrix(col, vector<int>(rows));
    // {
    //     {1,4,7},
    //     {2,5,8},
    //     {3,6,9},
    //     {4,5,6}
    // }
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            transposeMatrix[j][i] = matrix[i][j];
        }
    };
    for(int i=0; i<col; i++){
        int k=0;
        int j=rows-1;
        while(k<j){
            int temp = transposeMatrix[i][k];
            transposeMatrix[i][k] = transposeMatrix[i][j];
            transposeMatrix[i][j] = temp;
            k++;
            j--;
        };
    };
    
    for(int i=0; i<col; i++){
        for(int j=0; j<rows; j++){
            cout << transposeMatrix[i][j] << " ";
        };
        cout << endl;
    };
    
    return 0;
}