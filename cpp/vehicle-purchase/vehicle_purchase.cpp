#include "vehicle_purchase.h"

namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        if (kind == "truck" || kind == "car")
            return true;
        else
            return false;
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        std::string suffix = " is clearly the better choice.";
        return option1 < option2 ? option1 + suffix: option2 + suffix;
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        return original_price * (age >= 10 ? 0.5 : age >= 3 ? 0.7 : age >= 0 ? 0.8 : 0);
    }

}  // namespace vehicle_purchase
