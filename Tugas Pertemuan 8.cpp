#include <iostream>
#include <conio.h>
using namespace std;


int main () {
    int bil[3][3];
    int ang[3][3];
    int jum[3][3];
    int kali[3][3];
    int i,j;
    char oper,ulang;

    cout << "Masukkan 9 buah bilangan Matriks A" << endl;
    for (i=0; i<3; i++){
            for (int j =0; j<3; j++){
                cout << "[" << i << "][" << j << "] = ";
                cin >> bil[i][j];
            }
        }
    cout << endl;
    cout << "Masukkan 9 buah bilangan Matriks B" << endl;
    for (i=0; i<3; i++){
            for (int j =0; j<3; j++){
                cout << "[" << i << "][" << j << "] = ";
                cin >> ang[i][j];
            }
        }


    cout << endl;
    cout << "Matriks A = " << endl;
    for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                cout << " " << bil[i][j];
                if (j==2){
                    cout << endl;
                }
            }
        }

    cout << endl;
    cout << "Matriks B = " << endl;
    for (i=0; i<3; i++){
            for (j=0; j<3; j++){
                cout << " " << bil[i][j];
                if (j==2){
                    cout << endl;
                }
            }
        }
    do{
    cout << endl;
    cout << "Pilih opsi dibawah ini untuk melanjutkan program" << endl;
    cout << "Penjumlahan       = 1" << endl;
    cout << "Perkalian         = 2" << endl;
    cout << "Transpose Matriks = 3" << endl;
    cout << "Masukkan opsi : " ;
    cin >> oper;
    cout << endl;

    switch (oper){
        case '1':
            cout << endl;
            cout << "A + B = " << endl;
            for (i=0; i<3; i++){
                 for (j=0; j<3; j++){
                     jum[i][j]=bil[i][j] + ang[i][j];
                     cout << jum[i][j] << " ";
                     if (j==2){
                         cout << endl;
                     }
                 }
             }
        break;

        case '2':
            cout << endl;
            cout << "A * B = " << endl;
            for (j=0; j<3; j++){
                if (j==0){
                    for (i=0; i<3; i++){
                    kali[i][j]=(bil[i][0]*ang[0][j])+(bil[i][1]*ang[1][j])+(bil[i][2]*ang[2][j]);
                }
            }
                if (j==1){
                    for (i=0; i<3; i++){
                    kali[i][j]=(bil[i][0]*ang[0][j])+(bil[i][1]*ang[1][j])+(bil[i][2]*ang[2][j]);
                }
            }
                if (j==2){
                    for (i=0; i<3; i++){
                    kali[i][j]=(bil[i][0]*ang[0][j])+(bil[i][1]*ang[1][j])+(bil[i][2]*ang[2][j]);
                }
            }
        }
            for (i=0; i<3; i++){
                for (j=0; j<3; j++){
                    cout << kali[i][j] << " ";
                    if (j==2){
                    cout << endl;
                }
            }
        }
        break;
        case '3':
             cout << endl;
             cout << "Tranpose matriks A " << endl;
             for (j=0; j<3; j++){
                if(j==0){
                    for (i=0; i<3; i++){
                        cout << bil[i][j] << " ";
                        if(i==2){
                            cout << endl;
                        }
                    }
                }
                if(j==1){
                    for(i=0; i<3; i++){
                        cout << bil[i][j] << " ";
                        if(i==2){
                            cout << endl;
                        }
                    }
                }
                if(j==2){
                    for(i=0; i<3; i++){
                        cout << bil[i][j] << " ";
                        if(i==2){
                            cout << endl;
                        }
                    }
                }
             }
             cout << endl;
             cout << "Tranpose matriks B " << endl;
             for (j=0; j<3; j++){
                if(j==0){
                    for (i=0; i<3; i++){
                        cout << ang[i][j] << " ";
                        if(i==2){
                            cout << endl;
                        }
                    }
                }
                if(j==1){
                    for(i=0; i<3; i++){
                        cout << ang[i][j] << " ";
                        if(i==2){
                            cout << endl;
                        }
                    }
                }
                if(j==2){
                    for(i=0; i<3; i++){
                        cout << ang[i][j] << " ";
                        if(i==2){
                            cout << endl;
                        }
                    }
                }
             }
             break;

        default:
            cout << "Program Selesai";
            break;

    }
    cout << endl;

    cout << "Ingin memilih opsi lain (y/t)? ";
    cin >> ulang;
    getch();




  }while (ulang != 't');

  cout << "Program Selesai Terimakasih...";

  cout << endl;
  return 0;
}
