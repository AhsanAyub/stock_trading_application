// This class will store all the basic pieces of information
// (as per the given definitions) of the symbol of the stock and
// perform the required computations to set the desired output values.

#ifndef STOCK_H
#define STOCK_H

using namespace std;

class Stock
{
    public:
        // The constructor stores the basic trade infomation per symbol
        Stock(long timestamp, string symbol, int quantity, int price);
        // This method will add the list of following trade information
        // of the same symbol
        void AddTrade(long timestamp, int quantity, int price);
        // Compute the maximum time gap of the symbol
        void SetMaxTimeGap();
        // Return the maximum time gap of the symbol
        long GetMaxTimeGap();
        // Compute the weighted average price of the symbol 
        void SetWeightedAveragePrice();
        // Return the weighted average price of the symbol 
        long GetWeightedAveragePrice();
        // Compute the volume of the symbol 
        void SetVolume();
        // Return the volume of the symbol 
        long GetVolume();
        // Compute the maximum price of the symbol 
        void SetMaxPrice();
        // Return the maximum price of the symbol 
        int GetMaxPrice();
        // Destructor to clear the vector-based varibles
        ~Stock();
        
    private:
        string sStockSymbol;
        int iMaxPrice;
        // Time gap = Amount of time that passes between consecutive
        // trades of a symbol
        long lMaxTimeGap = 0;
        // Total Volume traded (Sum of the quantity for all trades in a symbol)
        long lVolume = 0;
        long lWeightedAveragePrice = 0;

        // Vectors to store the all the entries of each symbol for further computations
        vector <int> vQuantity;     // the amount traded
        vector <int> vPrice;        // the price of the trade for that financial instrument
        vector <long> vTimeStamp;   // value indicating the microseconds since midnight
};

#endif