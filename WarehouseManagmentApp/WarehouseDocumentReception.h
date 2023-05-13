#pragma once
#include "WarehouseDocument.h"
#include<vector>
class WarehouseDocumentReception :
    public WarehouseDocument
{
public:
   // std::vector<Product> Products;

    void AddProduct();
    void UpdateProduct();

};

