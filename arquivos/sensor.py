import serial
import datetime
import subprocess
from time import sleep
import sys

def cronometro_regressivo(segundos):
    
    start_time = datetime.datetime.now()

    while segundos > 0:
        tempo_restante = datetime.timedelta(seconds=segundos)
        print(f"TEMPO RESTANTE: {tempo_restante}.")
        print()
        sleep(1)
        segundos -= 1

    print("TEMPO ESGOTADO!")
    sleep(0.5)
    subprocess.run("rundll32.exe user32.dll,LockWorkStation", shell=True)
    sys.exit()


def distancia(dist):

    if dist > 80:
        print("Longe")
        sleep(0.5)
        cronometro_regressivo(30)
        return 1
    else:
        print("Perto")
        return 0


print("Inicio do Projeto!")

def main():

    while True:
        try:  
            arduino = serial.Serial('COM10', 9600)
            print('Arduino CONECTADO!')
            break
        except Exception as e: 
            print(e)
            sys.exit()
    
    while True:
        msg = str(arduino.readline())
        msg = msg[21:-8] 
        msg = float(msg)
        distancia(msg)
        if distancia(msg) == 1:
            sys.exit()
        arduino.flush()


main()
