#ifndef FATALERROROBSERVER_H
#define FATALERROROBSERVER_H

class FatalErrorObserver : public Observer
{
public:
    explicit FatalErrorObserver(const std::string &observer_name, const std::string &filename);
    ~FatalErrorObserver();
    
    void onWarning(const std::string &message) override {}
    void onError(const std::string &message) override {}
    void onFatalError(const std::string &message) override;
    
private:
    std::string name;
    std::ofstream file;
    
};

#endif // FATALERROROBSERVER_H
