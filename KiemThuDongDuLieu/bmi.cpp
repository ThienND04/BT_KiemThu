#include<stdio.h>
#include<math.h>
#include<string>
#include<gtest/gtest.h>

using namespace std;

string xepLoaiBMI(double canNang, double chieuCao) {
    if (canNang <= 0 || chieuCao <= 0) {
        return "Không hợp lệ";
    }

    double bmi = canNang / (chieuCao * chieuCao);

    if (bmi < 18.5) {
        return "Gầy";
    } else if (bmi < 25) {
        return "Bình thường";
    } else if (bmi < 30) {
        return "Thừa cân";
    } else {
        return "Béo phì";
    }
}

TEST(BMITest, TEST1) {
    EXPECT_EQ(xepLoaiBMI(40, 0), "Không hợp lệ");
}

TEST(BMITest, TEST2) {
    EXPECT_EQ(xepLoaiBMI(0, 1.5), "Không hợp lệ");
}

TEST(BMITest, TEST3) {
    EXPECT_EQ(xepLoaiBMI(40, 1.7), "Gầy");
}

TEST(BMITest, TEST4) {
    EXPECT_EQ(xepLoaiBMI(50, 1.5), "Bình thường");
}

TEST(BMITest, TEST5) {
    EXPECT_EQ(xepLoaiBMI(85, 1.7), "Thừa cân");
}

TEST(BMITest, TEST6) {
    EXPECT_EQ(xepLoaiBMI(87, 1.7), "Béo phì");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
