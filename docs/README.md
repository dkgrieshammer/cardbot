
### CardBot - Starterkit Cardboard Robot V 1.0


Eine kleine „getting started“ Liste für fahrende Dinge für den Frühjahrsputz Hacktathon 2018. Zunächst braucht ihr ein paar Tools um die Boards mit Arduino zu programmieren. Eine ausführlichere Setup-Anleitung gibts auf [Medium][1]
* [Arduino Software][2]
* Um die Wemos Mini Boards mit Arduino programmieren zu können brauchen wir einen [USB Treiber][3]
* In der Arduino IDE müssend die Board Definitions in den Settings verlinkt werden und dann das entsprechende Paket installiert werden. Der Link lautet *http://arduino.esp8266.com/stable/package_esp8266com_index.json*.
* Wir wollen ein zusätzliches Programm mit dem wir beliebige Dateien in den Flash-Speicher des Wemos Boards legen können: [SPIFFS Upload Tool][4] 
	* lege einen „tools“ Ordner im Arduino Ordner an (wo auch deine Sketches gespeichert sind) und speichere das SPIFFS Tool da rein

Ein paar Libraries für die Arduino-IDE brauchen wir auch noch:
* [WebSockets Library][5] 
* New Ping Library for Timebased Sonar
* Ticker to time trigger sonar readings


### Bill of Materials
- [Wemos D1 Mini][6] oder andere Arduino Boards 
- [MotorShield für Wemos][7] (bestellt V 1.1 sonst muss man die Umflashen) oder andere Arduino Motorshields
- Sensoren (Ultraschall, Licht etc)
- [Motoren + Räder][8] 
- Modellbaumaterial (Pappe o. ä.)
- Heissklebepistole ist immer gut
- Irgendein [5V Akkupack][9] und ein USB auf Mini-USB Kabel
- [Kabel / Steckverbinder][10]

[1]:	[https://medium.com/@jimgbest/getting-the-wemos-d1-mini-board-to-work-on-mac-os-10-13-high-sierra-f30324d82db2]
[2]:	[https://www.arduino.cc/en/Main/Software]
[3]:	[https://wiki.wemos.cc/downloads]
[4]:	[https://github.com/esp8266/arduino-esp8266fs-plugin/releases]
[5]:	[https://github.com/Links2004/arduinoWebSockets]
[6]:	[https://wiki.wemos.cc/products:d1:d1%5C_mini]
[7]:	[https://wiki.wemos.cc/products:d1%5C_mini%5C_shields:motor%5C_shield]
[8]:	https://www.amazon.de/Gaoxing-Tech-Arduino-Kunststoff-Getriebemotor/dp/B01NH7SASE/ref=pd_sbs_21_5?_encoding=UTF8&pd_rd_i=B01NH7SASE&pd_rd_r=1c4a00b2-46ef-11e8-92c5-913bb7819b21&pd_rd_w=L1xvh&pd_rd_wg=JKUh9&pf_rd_i=desktop-dp-sims&pf_rd_m=A3JWKAKR8XB7XF&pf_rd_p=1662399603728955198&pf_rd_r=KFH58DVV45XSVHTRVC5B&pf_rd_s=desktop-dp-sims&pf_rd_t=40701&psc=1&refRID=KFH58DVV45XSVHTRVC5B
[9]:	https://www.amazon.de/TL-PB10400-10400mAh-Powerbank-Ausgang5V-Android-Ger%C3%A4te/dp/B00FZVYHOO/ref=sr_1_1?s=ce-de&ie=UTF8&qid=1524485857&sr=1-1&keywords=tp%2Blink%2Bakku&th=1
[10]:	https://www.amazon.de/Elegoo-Female-Female-Male-Female-Steckbr%C3%BCcken-Drahtbr%C3%BCcken-bunt/dp/B01EV70C78/ref=sr_1_1?s=ce-de&ie=UTF8&qid=1524485938&sr=1-1&keywords=arduino+kabel