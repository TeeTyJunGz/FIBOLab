import pygame as pg
import numpy as np

r = 10
print("Please Input Gravity Data: ")
g = int(input())
t = 0
print("Please Input Initial Velocity Data: ")
u = float(input())
print("Please Input Angle Data: ")
tt = np.deg2rad(int(input()))
print("Please Input posX Data: ")
posX = int(input())
print("Please Input posY Data: ")
posY = int(input())
# Mt = ((2*u*np.sin(tt))/g)
Mt = 1.6979999999999238

win_x, win_y = 1280, 720
screen = pg.display.set_mode((win_x, win_y))

while(1):
    
    screen.fill((255, 255, 255))
    pg.draw.circle(screen,(159,150,110),(posX,posY),r)
    
    if t < Mt:
        posY -= ((u*(np.sin(tt)))*t)-(0.5*(g*(t**2)))
        posX += u*np.cos(tt)*t
    
    t += 0.001
    
    # print("PosY: ",posY)
        
    # print("time: ",t)
    if t >= Mt:
        posY = posY+((u*np.sin(tt))*Mt)-(0.5*g*Mt**2)
        posX = posX+u*np.cos(tt)*Mt
        # posX = posX
        # posY = posY

    pg.time.delay(1) #time
    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()