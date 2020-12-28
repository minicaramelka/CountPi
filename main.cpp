#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

float PiCount(int M, int D){
    srand(time(0));
    int N = 0;
    float x, y;
    float pi;
    for(int i = 0; i < M; i++){
        x = rand() % D;
        y = rand() % D;
        if(pow(x - float(D)/2, 2) + pow(y - float(D)/2, 2) < pow(float(D)/2, 2))
            N++;
    }
    pi = 4*float(N)/M;
        cout << "Сгенерированное число Пи: " << pi << endl;
}
    
int main()
{
    PiCount(1000000, 10);
    PiCount(10, 100000);
    PiCount(1000000, 1000);
    // чем больше точек попадет в заданную область, тем точнее будут вычисления
    return 0;
}
