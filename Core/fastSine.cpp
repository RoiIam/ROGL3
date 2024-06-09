#include "fastSine.h"
#include <iostream>
#include <chrono>
#include<cmath>
// 28.9.23 - 3.rd assigment implement fast sine and compare it to built in

double FastSine::fastSine(double x) {
    // dobre fungjue len pre <-π / 2, +π / 2>
//x - 0.16605 * x3 + 0.00761 * x5
    //return x - 0.16605 * pow(x,3) + 0.00761 * pow(x,5); //vstavane pow je strasne draha operacia

    return x - 0.16605 * x * x * x + 0.00761 * x * x * x * x * x;

}

double FastSine::standardSine(double x) {
    return sin(x);
}

void FastSine::TestSine() {


    double start = -90;
    double end = 90;
    double steps = 10000000;
    double step = (abs(start) + abs(end)) / steps;
    double it = start;

    std::chrono::high_resolution_clock::time_point startT = std::chrono::high_resolution_clock::now();
    std::chrono::high_resolution_clock::time_point endFs = startT;

    for (int i = 0; i < steps; ++i) {
        standardSine(it);
        it += step;
    }

    endFs = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsedSS = endFs - startT;


    //reset iterator
    it = start;

    startT = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < steps; ++i) {
        fastSine(it);
        it += step;
    }

    endFs = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsedFS = endFs - startT;

    //reset iterator
    it = start;

    std::cout << "elapsed time F_S: " << elapsedFS.count() << "\n";
    std::cout << "elapsed time SS: " << elapsedSS.count() << "\n";
}
