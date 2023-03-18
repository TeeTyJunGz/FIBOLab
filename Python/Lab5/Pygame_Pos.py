import pygame as pg
import numpy as np

win_x = 800
win_y = 480
posX, posY = win_x/2, 400
u = 2
tt = np.deg2rad(45)
g = 1
t = 0
state = ''
screen = pg.display.set_mode((win_x, win_y))

while(1):
    screen.fill((255, 255, 255))
    
    if pg.mouse.get_pressed()[0] == 1: # Check mouse pressed
        state = 'left'
        posX, posY = win_x/2, 400
        t = 0
     
    elif pg.mouse.get_pressed()[1] == 1: # Check mouse pressed
        state = 'middle'
        posX, posY = win_x/2, 400
        t = 0
            
    elif pg.mouse.get_pressed()[2] == 1: # Check mouse pressed
        state = 'right'   
        posX, posY = win_x/2, 400
        t = 0
    
    if posX >= win_x or posX <= 0 or posY <= 0:
        state = 'out'
        t = 0
        
    pg.draw.circle(screen,(100,100,100),(posX,posY),20)
    
    match state:
        case 'left':
            posY -= ((u*(np.sin(tt)))*t)-(0.5*(g*(t**2)))
            posX -= u*np.cos(tt)*t
        case 'middle':
            posY -= ((u*(np.sin(tt)))*t)-(0.5*(g*(t**2)))
        case 'right':
            posY -= ((u*(np.sin(tt)))*t)-(0.5*(g*(t**2)))
            posX += u*np.cos(tt)*t        
        case 'out':
            posY += g
        
    t += 0.001
    
    pg.time.delay(1) #time
    
    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()