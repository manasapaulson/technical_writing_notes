/**
 * @file CalculationEngine.h
 * @brief Contains the CalculationEngine class.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"
#include <cmath>

/**
 * @class CalculationEngine
 * @brief Performs basic mathematical operations.
 *
 * @details This class provides arithmetic operations such as addition,
 * subtraction, multiplication and exponentiation. It uses the Logger
 * class to display information about calculations.
 *
 * @todo Add input validation for invalid mathematical operations.
 */
class CalculationEngine
{
public:
    /**
     * @brief Creates a CalculationEngine object.
     * @param logger Reference to the Logger object.
     */
    CalculationEngine(Logger& logger) : logger(logger) {}

    /**
     * @brief Adds two numbers.
     * @param a First number.
     * @param b Second number.
     * @return The sum of the two numbers.
     */
    double add(double a, double b)
    {
        double result = a + b;
        logger.log(LogLevel::INFO, "Addition performed");
        return result;
    }

    /**
     * @brief Subtracts the second number from the first.
     * @param a First number.
     * @param b Second number.
     * @return The difference between the two numbers.
     */
    double subtract(double a, double b)
    {
        double result = a - b;
        logger.log(LogLevel::INFO, "Subtraction performed");
        return result;
    }

    /**
     * @brief Multiplies two numbers.
     * @param a First number.
     * @param b Second number.
     * @return The product of the two numbers.
     */
    double multiply(double a, double b)
    {
        double result = a * b;
        logger.log(LogLevel::INFO, "Multiplication performed");
        return result;
    }

    /**
     * @brief Calculates the power of a number.
     * @param base The base value.
     * @param exponent The exponent value.
     * @return The result of raising base to exponent.
     */
    double power(double base, double exponent)
    {
        double result = std::pow(base, exponent);
        logger.log(LogLevel::INFO, "Power calculation performed");
        return result;
    }

private:
    Logger& logger;
};

#endif