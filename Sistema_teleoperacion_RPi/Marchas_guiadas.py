#!/usr/bin/env python
# -*- coding: utf-8 -*-

import os, time, math, ctypes
# -------------------------------------------------------------------------------------- #
from Funcion_orientacion  import giroIzq, giroDer
# -------------------------------------------------------------------------------------- #
import dynamixel_functions as dynamixel                     # Uses Dynamixel SDK library
# -------------------Conexion del control y funciones de pygame------------------------- #
import pygame
from pygame.locals import *
pygame.init()
pygame.joystick.init()

#----------------------------------------------------------------------------------------#
import sietesegmentos 
#----------------------------------------------------------------------------------------#
# Longitud de los bytes de datos
GOAL_POSITION_LEN           = 2  # Indica que la posicion objetivo corresponde a 2 bytes
# Version de protocolo
PROTOCOL_VERSION            = 1
# Ajustes por defecto
COMM_SUCCESS                = 0
NUM_ACTUATOR                = 10            # Número de actuadores
# Variables globales
MOD_ACTIVOS=[1]*NUM_ACTUATOR      # Dejar el valor 0 para inactivos y el valor 1 para activos
# Variables locales
ID = list(range(1,NUM_ACTUATOR+1))



# -------------------------------- Funciones ------------------------------------------- #
# Funcion Choset:
def Choset(amplitud_par,amplitud_impar,desfase,dtheta_dn,dtheta_dt,t_time,n,offset_par,offset_impar):
    theta=(dtheta_dn*n + dtheta_dt*(t_time))
    if (n%2==0):
        return (((offset_par*3.14159)/180) + ((amplitud_par*3.14159)/180)*math.sin((theta*3.14159)/180))*180/3.14159
    else:
        return (((offset_impar*3.14159)/180) + ((amplitud_impar*3.14159)/180)*math.sin(((theta+desfase)*3.14159)/180))*180/3.14159

def guiadas(port_num, group_num):
    desfase=0
    dtheta_dn=60
    contador=0
    t_time=0
    muestra=0
    bandera=True

    joystick = pygame.joystick.Joystick(0)              # Crea un nuevo objeto Joystick
    joystick.init()                                     # Inicializa el objeto Joystick
        
    L2          = joystick.get_axis(12)
    R2          = joystick.get_axis(13)
    L1          = joystick.get_axis(14)
    R1          = joystick.get_axis(15)
    Triangulo   = joystick.get_axis(16)
    Circulo     = joystick.get_axis(17)
    Equis       = joystick.get_axis(18)
    Cuadrado    = joystick.get_axis(19)

    while 1:

        evento = pygame.event.wait()                        # Espera un solo evento de la cola
    
        if joystick.get_button(0):                          # Obtiene el estado actual del boton()
            print ("Ha terminado la teleoperación del Robot")
            break
            #raise SystemExit

        #--------------------------------------------------------------------------------------------------#
        if (joystick.get_axis(12)):
            L2 = (joystick.get_axis(12)+1)/2
        if L2>0:
            L2 = (joystick.get_axis(12)+1)/2
            
        if (joystick.get_axis(13)):
            R2 = (joystick.get_axis(13)+1)/2
        if R2>0:
            R2 = (joystick.get_axis(13)+1)/2

        if (joystick.get_axis(14)):
            L1 = (joystick.get_axis(14)+1)/2
        if L1>0:
            L1 = (joystick.get_axis(14)+1)/2
            
        if (joystick.get_axis(15)):
            R1 = (joystick.get_axis(15)+1)/2
        if R1>0:
            R1 = (joystick.get_axis(15)+1)/2
            
        if (joystick.get_axis(16)):
            Triangulo = (joystick.get_axis(16)+1)/2
        if Triangulo>0:
            Triangulo = (joystick.get_axis(16)+1)/2
            
        if (joystick.get_axis(17)):
            Circulo = (joystick.get_axis(17)+1)/2
        if Circulo>0:
            Circulo = (joystick.get_axis(17)+1)/2
            
        if (joystick.get_axis(18)):
            Equis = (joystick.get_axis(18)+1)/2
        if Equis>0:
            Equis = (joystick.get_axis(18)+1)/2

        if (joystick.get_axis(19)):
            Cuadrado = (joystick.get_axis(19)+1)/2
        if Cuadrado>0:
            Cuadrado = (joystick.get_axis(19)+1)/2
            
#--------------------------------------------------------------------------------------------------#


        amplitud_par=int(41*(L2)**2)
        print ("Amplitud par: ", amplitud_par)
	
        # Amplitud par para rolling (L1 axis(14))
        if (L1>0 and L2==0):
            amplitud_par=10
            print ("Amplitud par rolling: ", amplitud_par)

        amplitud_impar=int(41*(R2)**2)
        print ("Amplitud impar: ", amplitud_impar)
	
        # Amplitud impar para rolling (R1 axis(15))
        if (R1>0 and R2==0):
            amplitud_impar=10
            print ("Amplitud impar rolling: ", amplitud_impar)
    
        offset_par=-int(41*(joystick.get_axis(2))**3)
        print ("Offset par: ",offset_par)
    
        offset_impar=int(41*(joystick.get_axis(3))**3)
        print ("Offset impar: ", offset_impar)

        dtheta_dt=-int(41*(joystick.get_axis(1))**3)
        print ("dtheta_dt: ", dtheta_dt)

        # dtheta_dn
        if (Triangulo>0 and Equis>0):
            dtheta_dn=dtheta_dn

        if (Triangulo>0 and dtheta_dn!=80 and bandera):
            dtheta_dn=dtheta_dn+10
            bandera=False
        else:
            dtheta_dn=dtheta_dn
    
        if (Equis>0 and dtheta_dn!=0 and bandera):
            dtheta_dn=dtheta_dn-10
            bandera=False
        else:
            dtheta_dn=dtheta_dn
            
        if (dtheta_dn==0):
            sietesegmentos.cero()
        elif (dtheta_dn==10):
            sietesegmentos.diez()
        elif (dtheta_dn==20):
            sietesegmentos.veinte()
        elif (dtheta_dn==30):
            sietesegmentos.treinta()
        elif (dtheta_dn==40):
            sietesegmentos.cuarenta()
        elif (dtheta_dn==50):
            sietesegmentos.cincuenta()
        elif (dtheta_dn==60):
            sietesegmentos.sesenta()
        elif (dtheta_dn==70):
            sietesegmentos.setenta()
        elif (dtheta_dn==80):
            sietesegmentos.ochenta()

        # Desfase
        if (Circulo>0 and Cuadrado>0):
            desfase=desfase

        if (Cuadrado>0 and desfase!=90 and bandera):
            desfase=desfase+45
            bandera=False
        else:
            desfase=desfase

        if (Circulo>0 and desfase!=-90 and bandera):
            desfase=desfase-45
            bandera=False
        else:
            desfase=desfase

        if (desfase==-90):
            sietesegmentos.menos_noventa()
        elif(desfase==-45):
            sietesegmentos.menos_cuarentaCinco()
        elif(desfase==0):
            sietesegmentos.menos_cero()
        elif(desfase==45):
            sietesegmentos.cuarenta_cinco()
        elif(desfase==90):
            sietesegmentos.noventa()


        if joystick.get_button(7):	    # Izquierda
	    giroIzq(port_num, group_num)

        if joystick.get_button(5):	    # Derecha
            giroDer(port_num, group_num)
    
        print("Desfase: ",desfase)
        print("dtheta_dn: ",dtheta_dn)


        ## función para iniciar un conteo, se busca que la instrucción no se demore más de 100 ms
        t_ini=time.time()

        ## Se recorre el numero de servomotores
        for i in range(NUM_ACTUATOR):

            ## Se calcula el ángulo para el número de servomotor en el tiempo determinado
            angulo = Choset(amplitud_par, amplitud_impar, desfase, dtheta_dn, dtheta_dt, (muestra+(10*(t_time))), i, offset_par, offset_impar)

            ## Si el módulo se seleccionó como inactivo, el ángulo se vuelve cero.
            angulo*=MOD_ACTIVOS[i]
            goalpos = 512 - angulo*3.41
            #print(goalpos)

            ## Se arma el paquete a enviar al servomotor. Es el envío del comando de posición
            ## Add Dynamixel#1 goal position value to the Syncwrite storage
            dxl_addparam_result = ctypes.c_ubyte(dynamixel.groupSyncWriteAddParam(group_num, (i+1), int(goalpos), GOAL_POSITION_LEN)).value
            #print(dxl_addparam_result)
            if dxl_addparam_result != 1:
                print(dxl_addparam_result)
                print("[ID:%03d] groupSyncWrite addparam failed" % (i+1))
                quit()

        ## Syncwrite goal position
        dynamixel.groupSyncWriteTxPacket(group_num)
        if dynamixel.getLastTxRxResult(port_num, PROTOCOL_VERSION) != COMM_SUCCESS:
            dynamixel.printTxRxResult(PROTOCOL_VERSION, dynamixel.getLastTxRxResult(port_num, PROTOCOL_VERSION))

        ## Clear syncwrite parameter storage
        dynamixel.groupSyncWriteClearParam(group_num)

        ## Se finaliza el conteo iniciado antes del proceso de transmisión del paquete de estadosfunción para finalilzar un conteo
        t_fin=time.time()

        while ((t_fin-t_ini)*1000<100):
            t_fin=time.time()

        contador+=1
        muestra+=1
	
        if (muestra%10==0):
            t_time+=1
            muestra=0

        if (contador%5==0):
            bandera=True
