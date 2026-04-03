#pragma once
#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>
#include "page.h"

extern WebServer &server;
void setupHandlers();
