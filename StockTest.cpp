#include <gtest/gtest.h>
#include "HeaderFiles/Stock.h"

TEST(StockTest, CheckMaxPrice)
{
    Stock s(100000, "aaa", 1, 10);
    s.AddTrade(100001, "aaa", 10, 100);

    s.SetMaxPrice();
    GTEST_ASSERT_EQ(s.GetMaxPrice(), 100);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}