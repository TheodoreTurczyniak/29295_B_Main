#include "subsystems.hpp"
#include "api.h"

ez::Drive chassis(
    // These are your drive motors, the first motor is used for sensing!
    {-13, 12, 11},    // Left Chassis Ports (negative port will reverse it!)
    {16, -15, -14},  // Right Chassis Ports (negative port will reverse it!)

    9,      // IMU Port
    3.25,  // Wheel Diameter (Remember, 4" wheels without screw holes are actually 4.125!)
    360);   // Wheel RPM = cartridge * (motor gear / wheel gear)

// Extra motors
pros::Motor intake(18);
pros::Motor tall_scorer(6);
pros::Motor short_scorer(20);
// Pneumatics
inline ez::Piston matchLoader ('A');