/*
 * Sketch     Modify Wi-Fi hotspot name and password of the robot
 * Platform   Freenove Hexapod Robot (Compatible with Arduino/Genuino Mega 2560)
 * Brief      This sketch is used to show how to modify Wi-Fi hotspot name and password of the robot 
 *            when using default function.
 * Author     Ethan Pan @ Freenove (support@freenove.com)
 * Date       2020/04/24
 * Copyright  Copyright © Freenove (http://www.freenove.com)
 * License    Creative Commons Attribution ShareAlike 3.0
 *            (http://creativecommons.org/licenses/by-sa/3.0/legalcode)
 * -----------------------------------------------------------------------------------------------*/

#ifndef ARDUINO_AVR_MEGA2560
#error Wrong board. Please choose "Arduino/Genuino Mega or Mega 2560"
#endif

// Include FNHR (Freenove Hexapod Robot) library
#include <FNHR.h>

FNHR robot;

void setup() {
  // Set Wi-Fi hotspot name and password
  // Call this function before robot.Start()
  // The Wi-Fi password is case sensitive and at least 8 characters
  robot.SetWiFi("name", "password");
  // Start Freenove Hexapod Robot with default function
  robot.Start(true);
}

void loop() {
  // Update Freenove Hexapod Robot
  robot.Update();
}
