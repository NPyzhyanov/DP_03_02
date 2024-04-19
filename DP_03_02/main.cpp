#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <memory>

#include "observer.h"
#include "observedworker.h"
#include "warningobserver.h"
#include "errorobserver.h"
#include "fatalerrorobserver.h"

int main()
{
    ObservedWorker worker;
    
    const std::string log_file_name = "../DP_03_02/logs/log.txt";
    
    WarningObserver obs1("obs1");
    ErrorObserver obs2("obs2", log_file_name);
    FatalErrorObserver obs3("obs3", log_file_name);
    
    worker.AddObserver(&obs1);
    worker.AddObserver(&obs2);
    worker.AddObserver(&obs3);
    
    worker.work();
    
    return 0;
}
