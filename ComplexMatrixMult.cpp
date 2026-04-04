#include <iostream>
using namespace std;

class complex{
    int r,i;
    public:
        complex(int rl = 0,int im = 0){
            r = rl;
            i = im;
        }
        complex operator + (const complex &obj){
            return complex(r + obj.r , i + obj.i);
        }
          complex operator * (const complex &obj){
        return complex(
            r * obj.r - i * obj.i,
            r * obj.i + i * obj.r
        );
    }
    /*    complex operator - (const complex &obj){
            return complex(r - obj.r , i - obj.i);
        }
      */
      void display(){ cout << r << "  - " << i << "i" << endl; }
      
};
class Matrix{
    complex mat[2][2];
    public:
       Matrix(complex m[2][2]){ 
           for(int i = 0;i<2;i++){
               for(int j = 0;j<2;j++){
                   mat[i][j] = m[i][j];
               }
           }
       }
       Matrix operator + ( const Matrix &m){
           complex res[2][2];
           for(int i = 0;i<2;i++){
               for(int j = 0;j<2;j++){
                 res[i][j] = mat[i][j] + m.mat[i][j];
               }
           }
           return Matrix(res);
       }
       Matrix operator * (const Matrix &m) {
    complex res[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {

            res[i][j] = complex(0, 0); // initialize

            for (int k = 0; k < 2; k++) {

                complex temp = mat[i][k] * m.mat[k][j]; // step 1
                res[i][j] = res[i][j] + temp;           // step 2
            }
        }
    }

    return Matrix(res);
}
        void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                mat[i][j].display();
            cout << endl;
        }
    }
};
int main(){
     complex a[2][2] = {
        {complex(1,2), complex(3,4)},
        {complex(2,1), complex(4,3)}
    };

    complex b[2][2] = {
        {complex(5,6), complex(7,8)},
        {complex(6,5), complex(8,7)}
    };
    Matrix m(a),n(b);
    Matrix m3 = m * n;
    m3.display();
    return 0;
}
