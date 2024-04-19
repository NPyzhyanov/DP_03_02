#include <iostream>
#include <string>

#include "observer.h"
#include "warningobserver.h"

void WarningObserver::onWarning(const std::string &message)
{
    std::cout << name << ": " << message << std::endl;
}
