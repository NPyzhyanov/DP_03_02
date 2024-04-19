#ifndef WARNINGOBSERVER_H
#define WARNINGOBSERVER_H

class WarningObserver : public Observer
{
public:
    explicit WarningObserver(const std::string &observer_name) : name(observer_name) {}
    ~WarningObserver() = default;
    
    void onWarning(const std::string &message) override;
    void onError(const std::string &message) override {}
    void onFatalError(const std::string &message) override {}
    
private:
    std::string name;
    
};

#endif // WARNINGOBSERVER_H
