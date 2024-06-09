#ifndef ROGL3_PERFANALYZER_H
#define ROGL3_PERFANALYZER_H
#include "TSingleton.h"
#include <string>
#include <iostream>

class PerfAnalyzer : public TSingleton<PerfAnalyzer> {
public:
    void log();
    void print() const;


private:
    PerfAnalyzer() = default;
    int drawcallCount;
    friend class TSingleton<PerfAnalyzer>;
};

#endif //ROGL3_PERFANALYZER_H
