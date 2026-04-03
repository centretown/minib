#include <Arduino.h>
#include <FastLED.h>
#include <WiFi.h>

#include "handlers.h"


UISlider hueSlider("Hue", 128, 0, 255, 1);
UISlider saturationSlider("Saturation", 255, 0, 255, 1);
UISlider valueSlider("Value", 255, 0, 255, 1);
UICheckbox autoHue("Auto Hue", true);

typedef enum : int { RED, GREEN, BLUE } COLOUR;

CRGB rgbLed[1];
#define ledPin 21
#define numLeds 1

int ledState = RED;
unsigned long lastTimeLed = 0;
unsigned long delayLed = 1000;

unsigned long lastTimeLog = 0;
unsigned long delayLog = 5000;

// previde a cpp file with your credentials
extern const char *ssid_router;
extern const char *password_router;
extern const char *ssid_ap;
extern const char *password_ap;

int counter = 0;
String basehtml;

void setup() {
  Serial.begin(115200);

  FastLED.addLeds<SK6812, ledPin, RGB>(rgbLed, numLeds);
  FastLED.setBrightness(25);
  rgbLed[0] = CRGB::Blue;
  FastLED.show();
  ledState = RED;

  delay(1000);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid_router, password_router);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected to router.");
  Serial.print("Station IP: ");
  Serial.println(WiFi.localIP().toString());

  setupHandlers();
}

inline bool timerExpired(unsigned long lastTime, unsigned long delay) {
  return (millis() - lastTime >= delay);
}

void loop() {
  server.handleClient();
  if (timerExpired(lastTimeLed, delayLed)) {
    lastTimeLed = millis();
    switch (ledState) {
    case RED:
      rgbLed[0] = CRGB::Red;
      break;
    case GREEN:
      rgbLed[0] = CRGB::Green;
      break;
    case BLUE:
      rgbLed[0] = CRGB::Blue;
      break;
    }
    FastLED.show();
    ledState++;
    if (ledState > BLUE) {
      ledState = RED;
    }

    if (timerExpired(lastTimeLog, delayLog)) {
      lastTimeLog = millis();
      if (WiFi.status() == WL_CONNECTED) {
        Serial.print("IP Address: ");
        Serial.println(WiFi.localIP());
      }
    }
  }
}
