//
// Created by Robo_Start on 03.08.2026.
//
 
#include "JsonUtility.h"
 
bool JsonUtility::jsonFromString(const String &input, JsonDocument &doc) {
    const DeserializationError error = deserializeJson(doc, input);
 
    if (error) {
        Serial.println(error.c_str());
        return false;
    }
    return true;
}
 
String JsonUtility::jsonToString(const JsonDocument &doc, bool prettify = false) {
    String output;
    if (prettify) {
        serializeJsonPretty(doc, output);
    } else {
        serializeJson(doc, output);
    }
    return output;
}
 
void JsonUtility::jsonToSerial(const JsonDocument &doc, HardwareSerial &serial) {
    serializeJson(doc, serial);
    Serial.println();
}
