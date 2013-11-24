

#include "MenuItem.h"

#include <vector>

#include "MenuItem.h"
class Menu{
public:
    virtual ~Menu();
    void append(MenuItem* mi);
    int run();
private:
    void show();
    
    vector<MenuItem*> items;
};
