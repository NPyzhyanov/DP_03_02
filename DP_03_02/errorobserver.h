#ifndef ERROROBSERVER_H
#define ERROROBSERVER_H

class ErrorObserver : public Observer
{
public:
    explicit ErrorObserver(const std::string &observer_name, const std::string &filename);
    ~ErrorObserver();
    
    void onWarning(const std::string &message) override {}
    void onError(const std::string &message) override;
    void onFatalError(const std::string &message) override {}
    
private:
    std::string name;
    std::ofstream file;
    
};

#endif // ERROROBSERVER_H
