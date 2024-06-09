#include "PerfAnalyzer.h"
#include "iostream"
void PerfAnalyzer::log()
{
    drawcallCount++;
}
void PerfAnalyzer::print() const
{
    std::cout<< "Current Drawcalls: " << drawcallCount << "\n";
}