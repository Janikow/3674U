/**
 * This file fixes a multi-definition error somehow some ima just roll with it
 */

#include "main.h"

pros::MotorGroup Hardware::left_motors({1, 2, 3});
pros::MotorGroup Hardware::right_motors({4, 5, 6});
pros::MotorGroup Hardware::CascadeLiftMotors({7, 8});
pros::Motor Hardware::Claw({9});

CascadeLiftMotors.tare_position();
const double CAS_MAX_ROTATION = 3 * 360; // 3 full rotations
bool GRIP = false;
