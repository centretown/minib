#include <Arduino.h>
const char *part2= R"~(
 <!-- End of Sensors Section -->
 </div>
 <!-- About Section -->
 <div
 id="about"
 class="w3-content w3-justify w3-text-light-grey w3-padding-64"
 >
 <h2 class="w3-padding-16 w3-text-light-grey">
 <i class="fa fa-list-ul w3-xxlarge"></i>
 About
 </h2>
 <hr style="width: 200px" class="w3-opacity" />
 <p>
 The ESP32-S3 Mini is a compact, stamp-sized IoT development
 board based on the ESP32-S3 dual-core Xtensa® 32-bit LX7
 processor running up to 240 MHz, featuring integrated 2.4
 GHz Wi-Fi (802.11 b/g/n) and Bluetooth® 5 (LE) with a
 built-in PCB antenna.
 </p>

 <p class="w3-padding w3-dark-grey">CPU and On-Chip Memory</p>
 <ul class="w3-text-light-grey">
 <li>ESP32-S3 embedded, Xtensa® dual-core 32-bit</li>
 <li>
 LX7 microprocessor (with single precision FPU), up to
 240 MHz
 </li>
 <li>384 KB ROM</li>
 <li>512 KB SRAM</li>
 <li>16 KB SRAM in RTC</li>
 <li>Up to 8 MB Quad SPI flash</li>
 <li>2 MB PSRAM (ESP32-S3FH4R2 only)</li>
 </ul>

 <p class="w3-padding w3-dark-grey">Wi-Fi</p>
 <ul class="w3-text-light-grey">
 <li>802.11b/g/n</li>
 <li>Bit rate: 802.11n up to 150 Mbps</li>
 <li>A-MPDU and A-MSDU aggregation</li>
 <li>0.4 µs guard interval support</li>
 <li>
 Center frequency range of operating channel: 2412 ~ 2484
 MHz
 </li>
 </ul>

 <p class="w3-padding w3-dark-grey">Bluetooth</p>
 <ul class="w3-text-light-grey">
 <li>Bluetooth LE: Bluetooth 5, Bluetooth mesh</li>
 <li>Speed: 125 Kbps, 500 Kbps, 1 Mbps, 2 Mbps</li>
 <li>Advertising extensions</li>
 <li>Multiple advertisement sets</li>
 <li>Channel selection algorithm #2</li>
 <li>
 Internal co-existence mechanism between Wi-Fi and
 Bluetooth to share the same antenna
 </li>
 </ul>

 <p class="w3-padding w3-dark-grey">Peripherals</p>
 <ul class="w3-text-light-grey">
 <li>39 GPIOs – 4 strapping GPIOs</li>
 <li>
 SPI, LCD interface, Camera interface, UART, I2C, I2S,
 remote control, pulse counter, LED PWM, full-speed USB
 2.0 OTG, USB Serial/JTAG controller, MCPWM, SD/MMC host
 controller, GDMA, TWAI® controller (compatible with ISO
 11898-1, i.e. CAN Specification 2.0), ADC, touch sensor,
 temperature sensor, timers and watchdogs
 </li>
 </ul>

 <p class="w3-padding w3-dark-grey">
 Integrated Components on Module
 </p>
 <ul class="w3-text-light-grey">
 <li>40 MHz crystal oscillator</li>
 </ul>

 <p class="w3-padding w3-dark-grey">Antenna Options</p>
 <ul class="w3-text-light-grey">
 <li>ESP32-S3-MINI-1: On-board PCB antenna</li>
 <li>ESP32-S3-MINI-1U: External antenna via a connector</li>
 </ul>

 <p class="w3-padding w3-dark-grey">Operating Conditions</p>
 <ul class="w3-text-light-grey">
 <li>Operating voltage/Power supply: 3.0 ~ 3.6 V</li>
 <li>Operating ambient temperature: –40 ~ 85 °C</li>
 </ul>

 <p class="w3-padding w3-dark-grey">Certification</p>
 <ul class="w3-text-light-grey">
 <li>RF certification: See certificates</li>
 <li>Green certification: RoHS/REACH</li>
 </ul>

 <p class="w3-padding w3-dark-grey">Test</p>
 <ul class="w3-text-light-grey">
 <li>HTOL/HTSL/uHAST/TCT/ESD</li>
 </ul>

 <!-- End About Section -->
 </div>

 <!-- Contact Section -->
 <div class="w3-padding-64 w3-content w3-text-light-grey" id="links">
 <h2 class="w3-text-light-grey">
 <i class="fa fa-link w3-xxlarge"></i>
 Links
 </h2>
 <hr style="width: 200px" class="w3-opacity" />

 <div class="w3-section">
 <a
 href="https://documentation.espressif.com/esp32-s3-mini-1_mini-1u_datasheet_en.pdf"
 target="_blank"
 >Datasheet Version 1.7</a
 >
 </div>
 <div class="w3-section">
 <a
 href="https://docs.platformio.org/en/latest/boards/espressif32/esp32-s3-devkitm-1.html"
 target="_blank"
 >PlatformIO: Espressif ESP32-S3-DevKitM-1</a
 >
 </div>

 <!-- End Contact Section -->
 </div>

 <!-- Footer -->
 <footer class="w3-content w3-padding-64 w3-text-grey w3-xlarge">
 <p class="w3-medium">
 Powered by
 <a
 href="https://www.w3schools.com/w3css/default.asp"
 target="_blank"
 class="w3-hover-text-green"
 >w3.css</a
 >
 </p>
 <!-- End footer -->
 </footer>

 <!-- END PAGE CONTENT -->
 </div>
 </body>
</html>
)~";
