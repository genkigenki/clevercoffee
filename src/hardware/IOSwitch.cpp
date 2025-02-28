/**
 * @file IOSwitch.h
 * 
 * @brief A physical switch connected to a GPIO Pin  
 */

#include "GPIOPin.h"
#include "IOSwitch.h"

IOSwitch::IOSwitch(GPIOPin& gpioInstance, Type type, Mode mode)
    : gpio(gpioInstance),
      switchType(type),
      switchMode(mode),
      debounceDelay(20),
      longPressDuration(500),
      lastState(LOW),
      currentState(LOW),
      lastDebounceTime(0),
      lastStateChangeTime(0),
      pressStartTime(0),
      longPressTriggered(false) { 
}

bool IOSwitch::isPressed() {
    uint8_t reading = gpio.read();
    unsigned long currentMillis = millis();

    if (reading != lastState) {
        lastDebounceTime = currentMillis;
    }

    if ((currentMillis - lastDebounceTime) > debounceDelay) {
        if ((reading ^ switchMode) != currentState) {
            currentState = reading ^ switchMode;

            if (currentState == LOW) {
                lastStateChangeTime = currentMillis;
            }
        }
    }

    lastState = reading;

    if (lastState != currentState) {
        pressStartTime = millis();
    }

    if (switchType == MOMENTARY) {
        if (currentState == HIGH && (pressStartTime + longPressDuration) <= currentMillis) {            
            longPressTriggered = true;
        }
        else if (currentState == LOW && lastStateChangeTime == currentMillis) {
            longPressTriggered = false;
        }
    }

    return currentState == HIGH;
}

bool IOSwitch::longPressDetected() {
    if (switchType == TOGGLE) {
        return false;
    }
    else if (switchType == MOMENTARY) {
        return longPressTriggered;
    }

    return false;
}

GPIOPin& IOSwitch::getGPIOInstance() {
    return gpio;
}

void IOSwitch::setType(Type type) {
    switchType = type;
}

void IOSwitch::setMode(Mode mode) {
    switchMode = mode;
}
