import serial
import time

arduino=serial.Serial('COM7', 9600)
time.sleep(2)

print("1 YAZARAK LEDİ YAKABİLİR, 0 YAZARAK LEDİ SÖNDÜREBİLİRSİNİZ")

while 1:

    datafromUser=input()

    if datafromUser == '1':
        arduino.write(b'1')
        print("LED turned ON")
    elif datafromUser == '0':
        arduino.write(b'0')
        print ("LED turned OFF")
