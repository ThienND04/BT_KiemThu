#include <stdio.h>
#include <string>
#include <gtest/gtest.h>

using namespace std;

string foo(int x)
{
    string res;
    switch (x) {
        case 65:
            res = "A";
            break;
        case 66:
            res = "B";
            break;
        case 67:
            res = "C";
            break;
        default:
            res = "haven't check";
    }
        
    return res;
}

TEST(FooTest, C2) {
    EXPECT_EQ(foo(65), "A");
    EXPECT_EQ(foo(66), "B");
    EXPECT_EQ(foo(67), "C");
    EXPECT_EQ(foo(0), "haven't check");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}