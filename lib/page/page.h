#pragma once
#include <Arduino.h>

String createHTML(String content);
String wrapHeader(String title);
String wrapGrid(String content);
String sensors();

extern const char *part1;
extern const char *part2;

extern const char *titleHtml;
extern const char *cardHtml;
extern const char *cardAction;
extern const char *labelHtml;
extern const char *endLabel;
extern const char *valueHtml;
extern const char *endSpan;
extern const char *endDiv;
extern const char *gridHtml;
extern const char *valueHtmlID;

template <typename T> String wrapCard(String title, T value) {
  String str = cardHtml;

  str += labelHtml;
  str += title;
  str += endLabel;

  str += valueHtml;
  str += value;
  str += endDiv;

  str += endDiv;

  return str;
}

template <typename T> String wrapValue(String id, String title, T value) {
  char valueDiv[128];
  snprintf(valueDiv, sizeof(valueDiv), valueHtmlID, id);
  String str = labelHtml;
  str += title;
  str += endLabel;
  str += valueDiv;
  str += value;
  str += endDiv;
  return str;
}

template <typename T> String wrapValueID(String id, String title, T value) {
  char valueDiv[128];
  snprintf(valueDiv, sizeof(valueDiv), valueHtmlID, id);

  String str = cardHtml;

  str += labelHtml;
  str += title;
  str += endLabel;

  str += valueDiv;
  str += value;
  str += endDiv;

  str += endDiv;

  return str;
}

template <typename T> String wrapActionCard(String id, String title, T value) {
  char cardDiv[128];
  snprintf(cardDiv, sizeof(cardDiv), cardAction, id);
  String str = cardDiv;

  str += labelHtml;
  str += title;
  str += endLabel;

  char valueDiv[128];
  snprintf(valueDiv, sizeof(valueDiv), valueHtmlID, id);
  str += valueDiv;
  str += value;
  str += endDiv;

  str += endDiv;

  return str;
}
