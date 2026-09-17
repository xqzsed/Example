#include "pch.h"
#include "triangle.h"

TEST(TriangleTest, ConstructorAndGetters) {
    Triangle t(5.0, 3.0);

    EXPECT_DOUBLE_EQ(t.gSide(), 5.0);
    EXPECT_DOUBLE_EQ(t.gHeight(), 3.0);
}

TEST(TriangleTest, CalculateArea) {
    Triangle t(5.0, 3.0);

    double area = t.findArea();
    EXPECT_DOUBLE_EQ(area, 7.5); 
}

TEST(TriangleTest, SettersAndGetters) {
    Triangle t(1.0, 1.0);

    t.sSide(7.0);
    t.sHeight(4.0);

    EXPECT_DOUBLE_EQ(t.gSide(), 7.0);
    EXPECT_DOUBLE_EQ(t.gHeight(), 4.0);
    EXPECT_DOUBLE_EQ(t.findArea(), 14.0);
}

TEST(TriangleTest, NegativeSideThrowsException) {
    Triangle t(5.0, 3.0);

    EXPECT_THROW(t.sSide(-1.0), std::invalid_argument);
    EXPECT_THROW(t.sHeight(-5.5), std::invalid_argument);
}

TEST(TriangleTest, TinyHeight) {
    Triangle t(5.0, 0.001);
    EXPECT_DOUBLE_EQ(t.gHeight(), 0.001);
    EXPECT_DOUBLE_EQ(t.findArea(), 0.0025);
}

TEST(TriangleTest, TinySide) {
    Triangle t(0.001, 5.0);
    EXPECT_DOUBLE_EQ(t.gSide(), 0.001);
    EXPECT_DOUBLE_EQ(t.findArea(), 0.0025);
}

TEST(TriangleTest, BothTiny) {
    Triangle t(0.01, 0.01);
    EXPECT_DOUBLE_EQ(t.findArea(), 0.00005);
}

TEST(TriangleTest, SetterWithLargeValues) {
    Triangle t(1.0, 1.0);
    t.sSide(1234.5);
    t.sHeight(9876.5);
    double expected = 1234.5 * 9876.5 / 2.0;
    EXPECT_DOUBLE_EQ(t.findArea(), expected);
}