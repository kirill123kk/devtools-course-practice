// Copyright 2022 Trevogin Kirill

#ifndef MODULES_SYSTEMS_CALCULATOR_INCLUDE_BORISOV_M_POS_SYSTEMS_CALCULATOR_APPLICATION_H_
#define MODULES_SYSTEMS_CALCULATOR_INCLUDE_BORISOV_M_POS_SYSTEMS_CALCULATOR_APPLICATION_H_

#include <string>

#include "include/borisov_m_pos_systems_calculator.h"

class Application {
 private:
    std::string getHelp(const std::string& appname);
    bool checkArgument(const std::string& str);
    int parseArgument(const char* arg);
 public:
    std::string operator()(int argc, const char** argv);
};

#endif  // MODULES_SYSTEMS_CALCULATOR_INCLUDE_BORISOV_M_POS_SYSTEMS_CALCULATOR_APPLICATION_H_
