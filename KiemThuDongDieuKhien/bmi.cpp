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

TEST(BMITest, C2) {
    EXPECT_EQ(xepLoaiBMI(-1, 1.7), "Không hợp lệ");
    EXPECT_EQ(xepLoaiBMI(70, -1.7), "Không hợp lệ");
    EXPECT_EQ(xepLoaiBMI(50, 1.7), "Gầy");
    EXPECT_EQ(xepLoaiBMI(65, 1.7), "Bình thường");
    EXPECT_EQ(xepLoaiBMI(80, 1.7), "Thừa cân");
    EXPECT_EQ(xepLoaiBMI(95, 1.7), "Béo phì");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
