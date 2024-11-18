import serial
import os
import time

# Configuração da porta serial
arduino = serial.Serial('COM3', 9600)
time.sleep(2)  # Aguarda inicialização

while True:
    data = arduino.readline().decode('utf-8').strip()
    if data == '1':
        print("Usuário ausente, bloqueando tela...")
        os.system('rundll32.exe user32.dll, LockWorkStation')
    elif data == '0':
        print("Usuário presente.")
    time.sleep(1)
        
