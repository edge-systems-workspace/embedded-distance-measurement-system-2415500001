#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author AANYA
 * @date 2026-01-28
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
 */
int trig_pin = 9;
int echo_pin = 10;
/**
 * @brief Arduino setup function.
 * @details Initializes Serial communication at 9600 baud and configures
 *          the TRIG and ECHO pins for the ultrasonic sensor.
 * @return void
 */
void setup(){
    pinMode(trig_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    Serial.begin(9600);
}