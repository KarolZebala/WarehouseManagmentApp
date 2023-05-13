#pragma once
#include "Product.h"
#include "StorageCondition.h"
#include<vector>
class WarehouseLocation
{
public:
	int XDimension;
	int YDimension;
	int ZDimentsion;
	int TotalVolume;
	int OcupiedVolume;


	std::vector<Product> Products;
	std::vector<StorageCondition> StorageCondition;

	
	bool CheckIfProductCanBeAddedToLocation(Product &product) {

	}



private:
	void AddProductToLocation(Product &product);

};

