#include "../include/MarketDataHandler.h"
#include <iostream>

void MarketDataHandler::start() {
    std::cout << "MarketDataHandler started." << "\n";
}

void MarketDataHandler::process() {
    std::cout << "I am in market data handler process" << "\n";
}

