#ifndef OBSERVEDWORKER_H
#define OBSERVEDWORKER_H

class ObservedWorker
{
public:
    ObservedWorker() {}
    ~ObservedWorker();
    
    void AddObserver(Observer* observer);
    
    void work();
    
private:
    void warning(const std::string &message) const;
    void error(const std::string &message) const;
    void fatalError(const std::string &message) const;
    
    std::vector<Observer*> observers_;
    
};

#endif // OBSERVEDWORKER_H
