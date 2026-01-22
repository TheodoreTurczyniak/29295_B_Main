#include "subsystems.hpp"
#include "api.h"

ez::Drive chassis(
    // These are your drive motors, the first motor is used for sensing!
    {-1, -10},    // Left Chassis Ports (negative port will reverse it!)
    {11, 20},  // Right Chassis Ports (negative port will reverse it!)

    9,      // IMU Port
    3.25,  // Wheel Diameter (Remember, 4" wheels without screw holes are actually 4.125!)
    333);   // Wheel RPM = cartridge * (motor gear / wheel gear)

// Extra motors
pros::Motor arm(17);
pros::Motor claw(18);