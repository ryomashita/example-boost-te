#include "erase-it.h"

#include <gtest/gtest.h>

TEST(EraseItTest, DrawSquare) {
  tesample::Square square;
  std::ostringstream oss;
  tesample::draw(square, oss);
  ASSERT_EQ(oss.str(), "Square");
}

TEST(EraseItTest, DrawCircle) {
  tesample::Circle circle;
  std::ostringstream oss;
  tesample::draw(circle, oss);
  ASSERT_EQ(oss.str(), "Circle");
}