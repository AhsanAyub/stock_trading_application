// Including the required libraries
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

#include "../HeaderFiles/Stock.h"

using namespace std;

Stock::Stock(long timestamp, string symbol, int quantity, int price)
{
    vTimeStamp.push_back(timestamp);
    sStockSymbol = symbol;
    vQuantity.push_back(quantity);
    vPrice.push_back(price);
}

void Stock::AddTrade(long timestamp, int quantity, int price)
{
    vTimeStamp.push_back(timestamp);
    vQuantity.push_back(quantity);
    vPrice.push_back(price);
}

void Stock::SetMaxTimeGap()
{
    int len = vTimeStamp.size();
    if(len == 1)
        return; // value is going to be zero for a single entry
    
    for(int i = 1; i < len; i++)
    {
        // TimeStamp is increasing or same as previous tick (time gap will never be < 0)
        if(lMaxTimeGap < vTimeStamp.at(i) - vTimeStamp.at(i-1))
            lMaxTimeGap = vTimeStamp.at(i) - vTimeStamp.at(i-1);
    }
}

long Stock::GetMaxTimeGap() { return lMaxTimeGap; }

void Stock::SetWeightedAveragePrice()
{
    /*
        20 shares of aaa @ 18
        5 shares of aaa @ 7
        Weighted Average Price = ((20 * 18) + (5 * 7)) / (20 + 5) = 15
    */
    int len = vPrice.size();
    for(int i = 0; i < len; i++)
        lWeightedAveragePrice += vPrice.at(i) *  vQuantity.at(i);
    if(lWeightedAveragePrice)
        lWeightedAveragePrice = lWeightedAveragePrice / lVolume; 
}
        
long Stock::GetWeightedAveragePrice() { return lWeightedAveragePrice; }
        
void Stock::SetVolume()
{
    for (auto& n : vQuantity)
        lVolume += n;
}

long Stock::GetVolume() { return lVolume; }

void Stock::SetMaxPrice()
{
    iMaxPrice = *max_element(vPrice.begin(), vPrice.end());
}

int Stock::GetMaxPrice() { return iMaxPrice; }

Stock::~Stock()
{
    vQuantity.clear();
    vPrice.clear();
    vTimeStamp.clear();
}