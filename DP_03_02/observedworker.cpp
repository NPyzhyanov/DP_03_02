#include <string>
#include <vector>
#include <memory>

#include "observer.h"
#include "observedworker.h"

ObservedWorker::~ObservedWorker()
{
    for (auto p_observer : observers_)
    {
        p_observer = nullptr;
    }
}

void ObservedWorker::AddObserver(Observer* observer)
{
    observers_.push_back(observer);
}

void ObservedWorker::work()
{
    warning("Something suspicious occured");
    error("Something wrong occured");
    fatalError("I can not work anymore");
}

void ObservedWorker::warning(const std::string &message) const
{
    for (auto p_observer : observers_)
    {
        p_observer->onWarning(message);
    }
}

void ObservedWorker::error(const std::string &message) const
{
    for (auto p_observer : observers_)
    {
        p_observer->onError(message);
    }
}

void ObservedWorker::fatalError(const std::string &message) const
{
    for (auto p_observer : observers_)
    {
        p_observer->onFatalError(message);
    }
}
