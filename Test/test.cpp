#include "pch.h"
#include "triangle.h"

TEST(TriangleTest, ConstructorAndGetters) {
    Triangle t(5.0, 3.0);

    EXPECT_EQ(t.gSide(), 5.0);
    EXPECT_EQ(t.gHeight(), 3.0);
}

TEST(TriangleTest, CalculateArea) {
    Triangle t(5.0, 3.0);

    double area = t.Area();
    EXPECT_EQ(area, 7.5); 
}

TEST(TriangleTest, SettersAndGetters) {
    Triangle t(1.0, 1.0);

    t.sSide(7.0);
    t.sHeight(4.0);

    EXPECT_EQ(t.gSide(), 7.0);
    EXPECT_EQ(t.gHeight(), 4.0);
    EXPECT_EQ(t.Area(), 14.0);
}

TEST(TriangleTest, NegativeSideThrowsException) {
    Triangle t(5.0, 3.0);

    EXPECT_THROW(t.sSide(-1.0), std::invalid_argument);
    EXPECT_THROW(t.sHeight(-5.5), std::invalid_argument);
}