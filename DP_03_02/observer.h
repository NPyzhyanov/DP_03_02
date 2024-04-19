#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
public:
    virtual ~Observer() {}
    
    virtual void onWarning(const std::string &message) {}
    virtual void onError(const std::string &message) {}
    virtual void onFatalError(const std::string &message) {}
    
};

#endif // OBSERVER_H
