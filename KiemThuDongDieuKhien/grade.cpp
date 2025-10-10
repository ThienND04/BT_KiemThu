#include <stdio.h>
#include <gtest/gtest.h>

char Grade(int score)
{
    int res;
    if (score < 0 || score > 10)
        return ' ';
    if (score >= 9)
        res = 'A';
    else if (score >= 8)
        res = 'B';
    else if (score >= 6.5)
        res = 'C';
    else if (score >= 5)
        res = 'D';
    else
        res = 'F';
    return res;
}

TEST(GradeTest, C1) {
    EXPECT_EQ(Grade(-1), ' ');
    EXPECT_EQ(Grade(9), 'A');
    EXPECT_EQ(Grade(8), 'B');
    EXPECT_EQ(Grade(7), 'C');
    EXPECT_EQ(Grade(5), 'D');
    EXPECT_EQ(Grade(4), 'F');
}

TEST(GradeTest, C2) {
    EXPECT_EQ(Grade(-1), ' ');
    EXPECT_EQ(Grade(11), ' ');
    EXPECT_EQ(Grade(9), 'A');
    EXPECT_EQ(Grade(8), 'B');
    EXPECT_EQ(Grade(7), 'C');
    EXPECT_EQ(Grade(5), 'D');
    EXPECT_EQ(Grade(4), 'F');
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}