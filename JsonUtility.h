//
// Created by Robo_Start on 03.08.2026.
//
 
#ifndef JSONUTILITY_H
#define JSONUTILITY_H
#include <Arduino.h>
#include <ArduinoJson.h>
#include "Tasks.h"
 
class JsonUtility {
public:
    static bool jsonFromString(const String &input, JsonDocument &doc);
 
    static String jsonToString(const JsonDocument &doc, bool prettify);
 
    static void jsonToSerial(const JsonDocument &doc, HardwareSerial &serial);
};
 
 
#endif //JSONUTILITY_H
