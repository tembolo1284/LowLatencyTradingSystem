#include "../include/MarketDataHandler.h"
#include "../include/OrderExecutionEngine.h"
#include "../include/RiskManagement.h"
#include "../include/Strategy.h"
#include "../include/Utils/Logger.h"
#include "../include/Utils/Config.h"
#include <iostream>

int main() {
    Logger::initialize();
    Config::load("config.yaml");

    MarketDataHandler marketDataHandler;
    OrderExecutionEngine orderExecutionEngine;
    RiskManagement riskManagement;
    Strategy strategy;

    marketDataHandler.start();
    orderExecutionEngine.start();
    riskManagement.start();
    strategy.start();

    // Main loop we will run just ten times
    int count {0};
    while (count < 10) {
        // Process market data
        marketDataHandler.process();
        // Execute orders
        orderExecutionEngine.execute();
        // Risk management
        riskManagement.check();
        // Strategy logic
        strategy.run();
        std::cout << "E2E has run " << ++count << " times.\n";
        
    }

    return 0;
}

