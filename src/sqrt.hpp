/**
 * @file sqrt.hpp
 * @brief Definition of the squaring function.
 *
 * @author Maxim <john.jasper.doe@gmail.com>
 * @date 2020
 */

/* See the license in the file "LICENSE.txt" in the root directory. */

#include <type_traits>

namespace tcicov {

template <class T>
T sqrt(T val) {
  static_assert(std::is_integral<T>::value || std::is_floating_point<T>::value,
                "This type is not supported");
  return val * val;
}

} /* tcicov:: */
