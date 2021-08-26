#include "test_class.h"
#include "gtest/gtest.h"

class TestClassFixture : public ::testing::Test {
protected:
    TestClass *test_class;

    virtual void SetUp() {
        test_class = new TestClass();
    }

    virtual void TearDown() {}
};

TEST_F(TestClassFixture, GoldenPath) {
    int actual;
    actual = test_class->add(1, 2);
    EXPECT_EQ(3, actual);
}

TEST_F(TestClassFixture, NegativeNumber) {
    int actual;
    actual = test_class->add(1, -2);
    EXPECT_EQ(-1, actual);
}

TEST_F(TestClassFixture, HexNumber) {
    int actual;
    actual = test_class->add(1, 0x10);
    EXPECT_EQ(17, actual);
}
