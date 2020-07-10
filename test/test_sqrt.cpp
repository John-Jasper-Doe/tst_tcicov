#include <gtest/gtest.h>
#include "sqrt.hpp"

TEST(test_sqrt, test_sqrt_int) {
  ASSERT_EQ(tcicov::sqrt<int>( 5),  25);
  ASSERT_EQ(tcicov::sqrt<int>( 1),   1);
  ASSERT_EQ(tcicov::sqrt<int>(-5),  25);
  ASSERT_EQ(tcicov::sqrt<int>( 0),   0);
  ASSERT_EQ(tcicov::sqrt<int>(10), 100);
}

TEST(test_sqrt, test_sqrt_float) {
  ASSERT_EQ(tcicov::sqrt<float>( 5.f),  25.f);
  ASSERT_EQ(tcicov::sqrt<float>( 1.f),   1.f);
  ASSERT_EQ(tcicov::sqrt<float>(-5.f),  25.f);
  ASSERT_EQ(tcicov::sqrt<float>( 0.f),   0.f);
  ASSERT_EQ(tcicov::sqrt<float>(10.f), 100.f);
}
