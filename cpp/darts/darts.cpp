#include "darts.h"
#include <cmath>

namespace darts {

    int score (double x, double y) {
        double distance = sqrt(x*x + y*y);
        return (distance <= 1.0) ? 10 : (distance <= 5.0) ? 5 : (distance <= 10.0) ? 1 : 0;
    }

} // namespace darts
