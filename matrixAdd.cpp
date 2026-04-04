#include <iostream>
using namespace std;

class Matrix{
    int mat[2][2];
    public:
       Matrix(int m[2][2]){ 
           for(int i = 0;i<2;i++){
               for(int j = 0;j<2;j++){
                   mat[i][j] = m[i][j];
               }
           }
       }
       Matrix operator + ( const Matrix &m){
           int res[2][2];
           for(int i = 0;i<2;i++){
               for(int j = 0;j<2;j++){
                 res[i][j] = mat[i][j] + m.mat[i][j];
               }
           }
           return res;
       }
        void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }
};
int main(){
    int m1[2][2] = {{1,2},{2,1}};
    int m2[2][2] = {{2,1},{1,2}};
    Matrix m(m1),n(m2);
    Matrix m3 = m + n;
    m3.display();
    return 0;
}
