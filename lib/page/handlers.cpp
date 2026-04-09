#include "handlers.h"

WebServer web_server(80);
WebServer &server = web_server;

void handleOnConnect() { server.send(200, "text/html", createHTML()); }
void handleNotFound() { server.send(404, "text/plain", "Not found"); }
void handleRSSI() { server.send(200, "text/html", wrapRSSI()); }
void handleWifiScan() { server.send(200, "text/html", wrapWifiScan()); }
void handleSensors() {
  Serial.println("handleSensors");
  server.send(200, "text/html", wrapSensors());
}

void setupHandlers() {
  server.on("/", handleOnConnect);
  server.onNotFound(handleNotFound);
  server.on("/rssi", handleRSSI);
  server.on("/scan-wifi", handleWifiScan);
  server.on("/sensors", handleSensors);
  server.begin();
  Serial.println("HTTP server started.");
}
