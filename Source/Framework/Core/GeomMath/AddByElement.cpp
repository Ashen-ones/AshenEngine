#include <cstddef>
#include"AddByElement.hpp"

namespace Dummy {
void AddByElement(const float* a, const float* b, float* result,
                  const size_t count) {
    for (size_t i = 0; i < count; i++) {
        result[i] = a[i] + b[i];
    }
}
}  // namespace Dummy
