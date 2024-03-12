#include "raindrops.h"

namespace raindrops {
    std::string convert(int num) {
        std::string tmp = "";
        if (!(num % 3)) tmp += "Pling";
        if (!(num % 5)) tmp += "Plang";
        if (!(num % 7)) tmp += "Plong";
        if (!tmp.length()) tmp += std::to_string(num);
        return tmp;
    }
}  // namespace raindrops
