#include "handlers.h"

WebServer web_server(80);
WebServer &server = web_server;

void handleOnConnect() { server.send(200, "text/html", createHTML(sensors())); }

void handleNotFound() { server.send(404, "text/plain", "Not found"); }

void handleRSSI() {
  Serial.println("rssi");
  server.send(200, "text/html",
              wrapValue("rssi", "Signal Strength (RSSI)", WiFi.RSSI()));
}

void setupHandlers() {
  server.on("/", handleOnConnect);
  server.onNotFound(handleNotFound);
  server.on("/rssi", handleRSSI);

  server.begin();
  Serial.println("HTTP server started");
}
