#include <iostream>
#include "WarehouseManagentApp.h"
#include "Warehouse.h"

int main()
{
    std::cout << "Hello World!\n";

    auto exp = new WarehouseManageApp();

    auto res = exp->startProgram();
    std::cout << res << "\n";

    auto war = Warehouse::CreateNew();
    auto res1 = war.calculate(5, 6);
    std::cout << res1 << std::endl;
}

