# Unicersal-Driver-by-Arduino-Pro-Micro-and-Wemos-D1-Mini
Sterownik wielofunkcyjny oparty na platformie Arduino Micro (Atmega32u4) oraz 
platformy Wemos D1 mini opartej na procesorze (ESP8266) pierwszy moduł arduino odpowiedzialny jest za procedurę 
wykonawczą tego sterownika, czyli takimi funkcjami jak: kontrola wyprowadzeń na wyjściach/wejściach 
sterownika, przełączanie przekaźników, kontrola pinów analogowych oraz kontrola dwóch ekspanderów 
pinów logicznych za pośrednictwem magistrali I2C (komunikacja szeregowa). Moduł Wemos D1 mini odpowiada 
za przesyłanie dodatkowych informacji do modułu wykonawczego (arduino) za pośrednictwem UART 
(universal asynchronous receiver-transmitter) wysyła on do modułu wykonawczego takie informacje jak: czas, 
umożliwia kontrolowanie wyprowadzeń wyprowadzeń sterownika poprzez WIFI. Za pomocą tych zmiennych 
dostarczanych przez moduł Wemos D1 mini można dostosować odpowiedni program dla modułu wykonawczego 
(Arduino), takim przykładem może być włączanie pomp w obiegu wody po godzinie 18:00. Nasuwa się tutaj pytanie 
dlaczego wykorzystałem tutaj 2 moduły procesorowe, odpowiedz jest bardzo prosta, chciałem aby możliwości 
mojego sterownika były o wiele większe niż przykładowo takiego sterownika PLC bez dodatkowych modułów, 
oraz chciałem wykonać mój sterownik niskim kosztem, aby stał się alternatywą do nie tanich sterowników PLC. 
Konstrukcja złożona z 2 modułów umożliwia również elastyczność tego sprzętu, jednak jak rozumiem tą 
Elastyczność, już spieszę z wytłumaczeniem, mój projekt będzie otwarto źródłowy, co to oznacza, że każdy z 
nas będzie mógł tworzyć modyfikację, dodatkowe moduły wedle własnego uznania, ponieważ wszystkie schematy 
owego sterownika będą udostępnione dla wszystkich, i każdy będzie mógł zbudować 
taki sterownik samemu w domu, bez większej wiedzy w zakresie elektroniki.
