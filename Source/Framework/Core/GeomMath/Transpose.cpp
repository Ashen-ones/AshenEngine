#include <cstdint>
#include"Transpose.hpp"
namespace Dummy {
void Transpose(const float* a, float* r,  size_t row_count,
                size_t column_count) {
    for (size_t i = 0; i < row_count; i++) {
        for (size_t j = 0; j < column_count; j++) {
            r[j * row_count + i] = a[i * column_count + j];
        }
    }
}
}  // namespace Dummy
