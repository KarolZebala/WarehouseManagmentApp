#pragma once
#include "WarehouseDbContext.h"
class WarehouseService
{
public: 
	WarehouseService() {
		_context = new WarehouseDbContext();
	}
private: 
	WarehouseDbContext* _context;

};

