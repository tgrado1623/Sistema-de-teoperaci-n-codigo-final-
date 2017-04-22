#!/usr/bin/env python
# -*- coding: utf-8 -*-
import time, os, ctypes, math
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

a1=6
b1=5
c1=7
d1=1
e1=0
f1=13
g1=19
p1=11

a2=12
b2=26
c2=25
d2=9
e2=8
f2=16
g2=20

GPIO.setup(a1, GPIO.OUT)
GPIO.setup(b1, GPIO.OUT)
GPIO.setup(c1, GPIO.OUT)
GPIO.setup(d1, GPIO.OUT)
GPIO.setup(e1, GPIO.OUT)
GPIO.setup(f1, GPIO.OUT)
GPIO.setup(g1, GPIO.OUT)
GPIO.setup(p1, GPIO.OUT)
GPIO.setup(a2, GPIO.OUT)
GPIO.setup(b2, GPIO.OUT)
GPIO.setup(c2, GPIO.OUT)
GPIO.setup(d2, GPIO.OUT)
GPIO.setup(e2, GPIO.OUT)
GPIO.setup(f2, GPIO.OUT)
GPIO.setup(g2, GPIO.OUT)


#---------------------------------------------------------------#
# dtheta/dn

def cero():
    
    GPIO.output(a2, True)
    GPIO.output(b2, True)
    GPIO.output(c2, True)
    GPIO.output(d2, True)
    GPIO.output(e2, True)
    GPIO.output(f2, True)
    GPIO.output(g2, False)
    
def diez():

    GPIO.output(a2, False)
    GPIO.output(b2, True)
    GPIO.output(c2, True)
    GPIO.output(d2, False)
    GPIO.output(e2, False)
    GPIO.output(f2, False)
    GPIO.output(g2, False)
    
def veinte():

    GPIO.output(a2, True)
    GPIO.output(b2, True)
    GPIO.output(c2, False)
    GPIO.output(d2, True)
    GPIO.output(e2, True)
    GPIO.output(f2, False)
    GPIO.output(g2, True)

    
def treinta():

    GPIO.output(a2, True)
    GPIO.output(b2, True)
    GPIO.output(c2, True)
    GPIO.output(d2, True)
    GPIO.output(e2, False)
    GPIO.output(f2, False)
    GPIO.output(g2, True)
    
def cuarenta():

    GPIO.output(a2, False)
    GPIO.output(b2, True)
    GPIO.output(c2, True)
    GPIO.output(d2, False)
    GPIO.output(e2, False)
    GPIO.output(f2, True)
    GPIO.output(g2, True)
    
def cincuenta():

    GPIO.output(a2, True)
    GPIO.output(b2, False)
    GPIO.output(c2, True)
    GPIO.output(d2, True)
    GPIO.output(e2, False)
    GPIO.output(f2, True)
    GPIO.output(g2, True)
    
def sesenta():

    GPIO.output(a2, True)
    GPIO.output(b2, False)
    GPIO.output(c2, True)
    GPIO.output(d2, True)
    GPIO.output(e2, True)
    GPIO.output(f2, True)
    GPIO.output(g2, True)
    
def setenta():

    GPIO.output(a2, True)
    GPIO.output(b2, True)
    GPIO.output(c2, True)
    GPIO.output(d2, False)
    GPIO.output(e2, False)
    GPIO.output(f2, False)
    GPIO.output(g2, False)
    
def ochenta():

    GPIO.output(a2, True)
    GPIO.output(b2, True)
    GPIO.output(c2, True)
    GPIO.output(d2, True)
    GPIO.output(e2, True)
    GPIO.output(f2, True)
    GPIO.output(g2, True)

#---------------------------------------------------------------#
# Desfase

def menos_noventa():

    GPIO.output(a1, True)
    GPIO.output(b1, True)
    GPIO.output(c1, False)
    GPIO.output(d1, True)
    GPIO.output(e1, True)
    GPIO.output(f1, False)
    GPIO.output(g1, True)
    GPIO.output(p1, True)
    
def menos_cuarentaCinco():

    GPIO.output(a1, False)
    GPIO.output(b1, True)
    GPIO.output(c1, True)
    GPIO.output(d1, False)
    GPIO.output(e1, False)
    GPIO.output(f1, False)
    GPIO.output(g1, False)
    GPIO.output(p1, True)
    
def menos_cero():

    GPIO.output(a1, True)
    GPIO.output(b1, True)
    GPIO.output(c1, True)
    GPIO.output(d1, True)
    GPIO.output(e1, True)
    GPIO.output(f1, True)
    GPIO.output(g1, False)
    GPIO.output(p1, False)
    
def cuarenta_cinco():

    GPIO.output(a1, False)
    GPIO.output(b1, True)
    GPIO.output(c1, True)
    GPIO.output(d1, False)
    GPIO.output(e1, False)
    GPIO.output(f1, False)
    GPIO.output(g1, False)
    GPIO.output(p1, False)
    
def noventa():

    GPIO.output(a1, True)
    GPIO.output(b1, True)
    GPIO.output(c1, False)
    GPIO.output(d1, True)
    GPIO.output(e1, True)
    GPIO.output(f1, False)
    GPIO.output(g1, True)
    GPIO.output(p1, False)


#-----------------------------------------------------------#

def Apagado():

    GPIO.output(a1, False)
    GPIO.output(b1, False)
    GPIO.output(c1, False)
    GPIO.output(d1, False)
    GPIO.output(e1, False)
    GPIO.output(f1, False)
    GPIO.output(g1, True)
    GPIO.output(p1, False)

    GPIO.output(a2, False)
    GPIO.output(b2, False)
    GPIO.output(c2, False)
    GPIO.output(d2, False)
    GPIO.output(e2, False)
    GPIO.output(f2, False)
    GPIO.output(g2, True)

    
