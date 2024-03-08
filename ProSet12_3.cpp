#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double determinant(double const [][10], int);

int main()
{
    int s;
    cout << "Please input matrix size: ";
    cin >> s;

    // ปรับขนาดของเมทริกซ์ตามข้อมูลที่ผู้ใช้ป้อน
    double a[10][10];

    for(int i = 0; i < s; i++){
        cout << "elements of row " << i+1 << ": ";
        for(int j = 0; j < s; j++){
            cin >> a[i][j];
        }
    }

    // เรียกใช้ฟังก์ชัน determinant และแสดงผลลัพธ์
    cout << "Determinant of your matrix is " << determinant(a, s) << endl;

    return 0;
}   

double determinant(double const a[][10], int s) {
    if (s == 1) {
        return a[0][0];
    } else {
        double det = 0;

        for (int i = 0; i < s; ++i) {
            // สร้างเมทริกซ์ย่อยโดยลบแถวและคอลัมน์ที่ i ออก
            double temp[10][10];
            int temp_i = 0, temp_j = 0;

            for (int row = 1; row < s; ++row) {
                for (int col = 0; col < s; ++col) {
                    if (col == i) {
                        continue;
                    }
                    temp[temp_i][temp_j++] = a[row][col];
                    if (temp_j == s - 1) {
                        temp_j = 0;
                        ++temp_i;
                    }
                }
            }

            // หาค่า determinant ของเมทริกซ์ย่อย
            det += (i % 2 == 0 ? 1 : -1) * a[0][i] * determinant(temp, s - 1);
        }

        return det;
    }
}