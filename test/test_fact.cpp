#include <gtest/gtest.h>
#include "factorials.hpp"

TEST(test_factorials, test_int1) {
  tcicov::factorials<int> fact;

  ASSERT_EQ(fact.calc(-1),       0);
  ASSERT_EQ(fact.calc( 0),       1);
  ASSERT_EQ(fact.calc( 1),       1);
  ASSERT_EQ(fact.calc( 3),       6);
  ASSERT_EQ(fact.calc( 8),   40320);
  ASSERT_EQ(fact.calc(10), 3628800);
}

TEST(test_factorials, test_int2) {
  tcicov::factorials<int> fact1(1);
  ASSERT_EQ(fact1.res(), 1);

  tcicov::factorials<int> fact9(9);
  ASSERT_EQ(fact9.res(), 362880);
}

TEST(test_factorials, test_float1) {
  tcicov::factorials<float> fact;

  ASSERT_EQ(fact.calc(-1.f),       0.f);
  ASSERT_EQ(fact.calc( 0.f),       1.f);
  ASSERT_EQ(fact.calc( 1.f),       1.f);
  ASSERT_EQ(fact.calc( 3.f),       6.f);
  ASSERT_EQ(fact.calc( 8.f),   40320.f);
  ASSERT_EQ(fact.calc(10.f), 3628800.f);
}

TEST(test_factorials, test_float2) {
  tcicov::factorials<float> fact1(1.f);
  ASSERT_EQ(fact1.res(), 1.f);

  tcicov::factorials<float> fact9(9.f);
  ASSERT_EQ(fact9.res(), 362880.f);
}
