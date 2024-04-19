#include <iostream>
#include <fstream>
#include <string>

#include "observer.h"
#include "fatalerrorobserver.h"

FatalErrorObserver::FatalErrorObserver(const std::string &observer_name, const std::string &filename)
{
    name = observer_name;
    if (!file.is_open())
    {
        file.open(filename, std::ios::out);
        file.close();
        file.open(filename, std::ios::app);
    }
}

FatalErrorObserver::~FatalErrorObserver()
{
    file.close();
}

void FatalErrorObserver::onFatalError(const std::string &message)
{
    std::cout << name << ": " << message << std::endl;
    file << name << ": " << message << std::endl;
}
