/**
 * @mainpage Calculator and Logger Project
 *
 * @section intro Introduction
 * This project demonstrates a simple calculator application
 * with a logging facility.
 *
 * @section features Features
 * - Addition
 * - Subtraction
 * - Multiplication
 * - Power calculation
 * - Logging with INFO, WARNING and ERROR levels
 *
 * @section files Project Files
 * - Logger.h: Defines the Logger class and LogLevel enumeration.
 * - CalculationEngine.h: Defines the mathematical operations.
 * - main.cpp: Contains the application entry point.
 */

/**
 * @file main.cpp
 * @brief Contains the main function of the calculator application.
 */

#include "Logger.h"
#include "CalculationEngine.h"

int main()
{
    Logger logger(LogLevel::INFO);
    CalculationEngine calculator(logger);

    std::cout << "Addition: "
              << calculator.add(10, 5) << std::endl;

    std::cout << "Subtraction: "
              << calculator.subtract(10, 5) << std::endl;

    std::cout << "Multiplication: "
              << calculator.multiply(10, 5) << std::endl;

    std::cout << "Power: "
              << calculator.power(2, 3) << std::endl;

    logger.log(LogLevel::WARNING, "This is a sample warning");
    logger.log(LogLevel::ERROR, "This is a sample error");

    return 0;
}