# LowLatencyTradingSystem

## Overview
LowLatencyTradingSystem is a C++20 project designed to implement a low latency trading system. The goal is to create a framework that can handle real-time market data, execute orders with minimal delay, and manage trading risks efficiently. The project is structured to be extensible and maintainable, making it easy to add new features and components.

## Project Structure
The project is organized into several key components, each responsible for different aspects of the trading system. Below is the directory structure and a brief description of each component:

LowLatencyTradingSystem/

├── CMakeLists.txt

├── src/

│ ├── main.cpp

│ ├── MarketDataHandler.cpp

│ ├── OrderExecutionEngine.cpp

│ ├── RiskManagement.cpp

│ ├── Strategy.cpp

│ └── Utils/

│ ├── Logger.cpp

│ └── Config.cpp

└── include/

├── MarketDataHandler.h

├── OrderExecutionEngine.h

├── RiskManagement.h

├── Strategy.h

└── Utils/

├── Logger.h

└── Config.h


### CMakeLists.txt
This file configures the project, specifies the C++20 standard, and sets up the build options including strict compiler flags for error checking.

### src/main.cpp
The entry point of the application. It initializes the logging system, loads configuration, and starts the main components of the trading system: MarketDataHandler, OrderExecutionEngine, RiskManagement, and Strategy. It then enters the main loop where these components are processed.

### src/MarketDataHandler.cpp and include/MarketDataHandler.h
The MarketDataHandler is responsible for handling market data. Currently, it has placeholder methods for starting and processing market data. Future implementations will include fetching Treasury prices from an API and updating the internal state with the fetched data.

### src/OrderExecutionEngine.cpp and include/OrderExecutionEngine.h
The OrderExecutionEngine handles the execution of orders. It includes placeholder methods for starting the engine and executing orders. Future implementations will handle the logic for sending orders to exchanges.

### src/RiskManagement.cpp and include/RiskManagement.h
The RiskManagement component is responsible for monitoring and managing trading risks. It includes placeholder methods for starting the risk management system and checking risk parameters. Future implementations will include real-time risk checks and alerts.

### src/Strategy.cpp and include/Strategy.h
The Strategy component implements the trading strategies. It includes placeholder methods for starting the strategy and running the strategy logic. Future implementations will include various trading algorithms and signal generation.

### src/Utils/Logger.cpp and include/Utils/Logger.h
The Logger component is responsible for logging messages. It includes a method to initialize the logging system. Future implementations will include detailed logging mechanisms for debugging and monitoring.

### src/Utils/Config.cpp and include/Utils/Config.h
The Config component handles the configuration settings of the application. It includes a method to load configuration from a file. Future implementations will include parsing and applying configuration settings.

## Building the Project
To build the project, you need to have CMake and Ninja build system installed. Follow these steps:

1. Navigate to the project directory:
   ```bash
   cd LowLatencyTradingSystem

2. Create a build directory and configure the project:
   ```bash
   cmake -B build -G Ninja

3. Build the project:
   ```bash
   cmake --build build

4. Run the executable:
   ```bash
   ./build/LowLatencyTradingSystem

### Dependencies

- CMake 3.20 or higher
- Ninja build system
- GCC or Clang compiler with C++20 support


