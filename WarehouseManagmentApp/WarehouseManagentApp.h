#include "WarehouseService.h"
class WarehouseManageApp
{
public:
    WarehouseManageApp() {
        _warehouseService = new WarehouseService();
    }
    ~WarehouseManageApp() {

    }
    int startProgram();

   
private:
    WarehouseService* _warehouseService;

};