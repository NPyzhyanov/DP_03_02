#include <fstream>
#include <string>

#include "observer.h"
#include "errorobserver.h"

ErrorObserver::ErrorObserver(const std::string &observer_name, const std::string &filename)
{
    name = observer_name;
    if (!file.is_open())
    {
        file.open(filename, std::ios::out);
        file.close();
        file.open(filename, std::ios::app);
    }
}

ErrorObserver::~ErrorObserver()
{
    file.close();
}

void ErrorObserver::onError(const std::string &message)
{
    file << name << ": " << message << std::endl;
}
