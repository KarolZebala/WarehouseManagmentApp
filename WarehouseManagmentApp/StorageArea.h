#pragma once
#include<vector>
#include "WarehouseLocation.h"
class StorageArea
{
public:
	int StorageAreadId;

	std::vector<WarehouseLocation*> Locations;

	int CalculateOccupiedPercentage();

	void AddLocation(WarehouseLocation* location);

};

