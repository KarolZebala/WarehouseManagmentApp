#pragma once
#include <cstdio>
#include <string>
#include <vector>
#include "StorageArea.h"
#include "WarehouseDocument.h"

class Warehouse
{
public:	 static Warehouse CreateNew();
	  int WarehouseId;
	  std::string WarehouseName;
	  std::string WarehouseAddress;
	  std::vector< StorageArea> StoregeAreas;
	  std::vector< WarehouseDocument> WarehouseDocuments;
	  int calculate(int a, int b);
private:
	Warehouse() {

	}
};

