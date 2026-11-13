/**
 * @file Logger.h
 * @brief Contains the Logger class for displaying log messages.
 */

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <string>

/**
 * @brief Represents the severity level of a log message.
 */
enum class LogLevel
{
    INFO,    /**< General information messages. */
    WARNING, /**< Messages indicating a possible issue. */
    ERROR    /**< Messages indicating an error. */
};

/**
 * @class Logger
 * @brief Handles logging messages at different severity levels.
 */
class Logger
{
public:
    /**
     * @brief Constructs a Logger object.
     * @param level The minimum log level to display.
     */
    Logger(LogLevel level = LogLevel::INFO)
        : currentLevel(level) {}

    /**
     * @brief Displays a log message.
     * @param level The severity level of the message.
     * @param message The message to be displayed.
     */
    void log(LogLevel level, const std::string& message)
    {
        if (static_cast<int>(level) >= static_cast<int>(currentLevel))
        {
            std::cout << "[";

            switch (level)
            {
                case LogLevel::INFO:
                    std::cout << "INFO";
                    break;
                case LogLevel::WARNING:
                    std::cout << "WARNING";
                    break;
                case LogLevel::ERROR:
                    std::cout << "ERROR";
                    break;
            }

            std::cout << "] " << message << std::endl;
        }
    }

private:
    LogLevel currentLevel;
};

#endif