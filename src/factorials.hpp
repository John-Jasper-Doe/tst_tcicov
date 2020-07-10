/**
 * @file factorials.hpp
 * @brief Definition of a factorial class.
 *
 * @details
 * This class is declared for the test case ...
 *
 * @author Maxim <john.jasper.doe@gmail.com>
 * @date 2020
 */

/* See the license in the file "LICENSE.txt" in the root directory. */

#include <type_traits>

namespace tcicov {

template <class T>
class factorials final {
  static_assert(std::is_integral<T>::value || std::is_floating_point<T>::value,
                "This type is not supported");

  T res_;

public:
  factorials() = default;
  ~factorials() = default;

  explicit factorials(T val) noexcept {
    res_ = calc(val);
  }

  factorials(const factorials&) = delete;
  factorials(factorials&&) = delete;

  factorials& operator=(const factorials&) = delete;
  factorials& operator=(factorials&&) = delete;

  T calc(T val) noexcept {
    if (val < static_cast<T>(0))
      return res_ = static_cast<T>(0);

    if (val == static_cast<T>(0) || val == static_cast<T>(1))
      return res_ = 1;
    else
      return res_ = (val * calc(val - 1));
  }

  T res() const noexcept {
    return res_;
  }
};

} /* tcicov:: */
