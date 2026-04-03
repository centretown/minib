#include "page.h"
#include <WiFi.h>

const char *titleHtml = "<div class=\"w3-padding w3-dark-grey w3-margin-top\">";
const char *cardHtml = "<div class=\"w3-card w3-padding w3-asphalt\">";

const char *cardAction =
    "<div class=\"w3-card w3-padding w3-asphalt "
    "w3-hover-cobalt w3-border w3-border-blue\" hx-get=\"/%s\" hx-swap>";

const char *labelHtml = "<label class=\"\">";
const char *endLabel = "</label>";
const char *valueHtml =
    "<div class=\"w3-text-amber\" style=\"margin-left:1rem;\">";
const char *valueHtmlID =
    "<div id=\"%s\" class=\"w3-text-amber\" style=\"margin-left:1rem;\">";
const char *endSpan = "</span>";
const char *endDiv = "</div>";
const char *gridHtml = "<div class=\"w3-grid w3-margin\" "
                       "style=\"gap:8px;grid-template-columns:repeat(auto-fit,"
                       "minmax(150px,1fr))\">";

String wrapHTML(String begin, String content, String end) {
  String str = begin;
  str += content;
  str += end;
  return str;
}

String createHTML(String content) {
  String str = part1;
  str += content;
  str += part2;
  return str;
}

String wrapGrid(String content) { return wrapHTML(gridHtml, content, endDiv); }

String wrapHeader(String title) { return wrapHTML(titleHtml, title, endDiv); }

String sensors() {
  String str = wrapHeader("Wifi");

  String wifi_str = wrapCard("Connected to (SSID)", WiFi.SSID());
  wifi_str += wrapCard("Local IP Address", WiFi.localIP().toString());
  wifi_str += wrapActionCard("rssi", "Signal Strength (RSSI)", WiFi.RSSI());
  str += wrapGrid(wifi_str);

  str += wrapHeader("Bluetooth");
  str += wrapHeader("LED");
  str += wrapHeader("Temperature");
  return str;
}
