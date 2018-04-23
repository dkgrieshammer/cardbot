#include <WebSocketsServer.h>   // Websockets for direct control without reconnects
#include <WebSocketsClient.h>
#include <WebSockets.h>
#include <NewPing.h>
#include <Ticker.h>
#include <ESP8266WiFi.h>        // Include the Wi-Fi library
#include <ESP8266WiFiMulti.h>   // Include the Wi-Fi-Multi library -> Save multiple Access Points
#include <ESP8266mDNS.h>        // Include the mDNS library to find your Bot easily in the Network
#include <ArduinoOTA.h>         // Over the Air Programming and Upload - No need for cables FTW!
#include <FS.h>                 // Access the file system to serve a website from flash
#include <ESP8266WebServer.h>   // Include the WebServer library

#include "WEMOS_Motor.h"        // Include Motor Shield to control motors

ESP8266WiFiMulti wifiMulti;     // Create an instance of the ESP8266WiFiMulti class, called 'wifiMulti'
ESP8266WebServer server(80);    // Create a webserver object that listens for HTTP request on port 80 and serve responses
WebSocketsServer webSocket = WebSocketsServer(81);    // create a websocket server on port 81

//Motor shiled I2C Address: 0x30, PWM frequency: 1000Hz(1kHz)
Motor M1(0x30,_MOTOR_A, 1000);//Motor A
Motor M2(0x30,_MOTOR_B, 1000);//Motor B

//Driving Variables
int speed = 100;

//Sensor Variables - Optional
//#define ECHO_PIN D7
//#define TRIG_PIN D6
//long pingDuration, pingDistance;
//#define MAX_DISTANCE 200
//Ticker pingSonar;
//NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

//Function prototypes for stuff we want to have available in the network
void handleRoot();              // react to direct requests
void handleNotFound();          // what to do if request url not existent
String getContentType(String filename); // convert the file extension to the MIME type - nice function
bool handleFileRead(String path);// send the right file to the client (if it exists)


void setup() {
  Serial.begin(115200);         // Start the Serial communication to send messages to the computer
  delay(10);
  
//  pingSonar.attach(0.5, printDistance);
  initWifi();
  initOTA();
  SPIFFS.begin();                           // Start the SPI Flash Files System
  initWebSocket();
  initMDNS();
  initServer();
}

void loop() {
  webSocket.loop();
  server.handleClient();
  ArduinoOTA.handle();

}
