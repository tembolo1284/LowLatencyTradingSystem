cmake_minimum_required(VERSION 3.20)
project(LowLatencyTradingSystem)

# Set C++20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
set(SOURCES
    src/main.cpp
    src/MarketDataHandler.cpp
    src/OrderExecutionEngine.cpp
    src/RiskManagement.cpp
    src/Strategy.cpp
    src/Utils/Logger.cpp
    src/Utils/Config.cpp
)

# Add executable
add_executable(LowLatencyTradingSystem ${SOURCES})

# Compiler flags for strict checking
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(LowLatencyTradingSystem PRIVATE
        -Wall       # Enable all common warnings
        -Wextra     # Enable extra warnings
        -Wpedantic  # Enable pedantic warnings
        -Werror     # Treat all warnings as errors
        -Wshadow    # Warn about variable shadowing
        -Wnon-virtual-dtor  # Warn when a class with virtual functions has a non-virtual destructor
        -Wold-style-cast  # Warn about c-style casts
        -Wcast-align  # Warn about potential performance problem casts
        -Wunused  # Warn on unused variables and parameters
        -Woverloaded-virtual  # Warn if there are overloaded virtual functions with the same name
        -Wconversion  # Warn on type conversions that may lose data
        -Wsign-conversion  # Warn on sign conversions
    )
elseif (MSVC)
    target_compile_options(LowLatencyTradingSystem PRIVATE
        /W4        # Enable all common warnings
        /WX        # Treat all warnings as errors
    )
endif()

