#include <stdio.h>
#include <gtest/gtest.h>

int Sum(int a[], int n)
{
    int i, total = 0;
    for (i = 0; i < n; i ++)
        total = total + a[i];
    return total;
}

TEST(SumTest, C1) {
    int a[] = {1};
    EXPECT_EQ(Sum(a, 1), 1);
}

TEST(SumTest, C2) {
    int a[] = {1};
    EXPECT_EQ(Sum(a, 1), 1);
}

TEST(SumTest, test3) {
    int a[] = {1, 2, 3, 4, 5};
    EXPECT_EQ(Sum(a, 5), 15);
    int b[] = {};
    EXPECT_EQ(Sum(b, 0), 0);
    int c[] = {0, 0, 0, 0, 0};
    EXPECT_EQ(Sum(c, 5), 0);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}