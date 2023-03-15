import pygame as pg

win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
r = 10
a = 1
t = 0
posX, posY = 200, 30

# 1 pixel per second ^ 2 = 1/1

while(1):
    
    screen.fill((255, 255, 255))
    pg.draw.circle(screen,(159,150,110),(posX,posY),r)
    
    posY += 0.5*(a)*(t**2) #suvat
    t += 0.001
    
    if posY >= win_y:
        pg.quit()
        exit()        
    
    pg.time.delay(1) #time
    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()