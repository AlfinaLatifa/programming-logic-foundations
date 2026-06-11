#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
int cher = 0, x = 2, sum2 = 0;
int aq[3][2][2];
float avg;

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++) {
        for (int k = 0; k < 2; k++) {
            aq[i][j][k] = x;
            x += 2;
            cout << x << " ";
            cher += x;
            sum2 += 1;
            avg = (float)cher / sum2;
        }
    }
}
printf ("\n");
cout << "sum kelipatan 4 = " << cher << endl;
printf ("avg sum kelipatan 4 = %.2f", avg);

return 0;
}

