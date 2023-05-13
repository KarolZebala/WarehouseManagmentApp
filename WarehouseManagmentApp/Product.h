#pragma once
#include<vector>
#include "StorageCondition.h"
#include "WarehouseLocation.h"
class Product
{
public:
	int ProductId;
	int XDimension;
	int YDimension;
	int ZDimentsion;
	int Volume;


	std::vector<StorageCondition*> StorageConditions;
	WarehouseLocation* Location;

	void AddStorageCondition(StorageCondition* condition);


};

