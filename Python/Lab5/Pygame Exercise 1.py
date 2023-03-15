import pygame as pg

win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
r = 0
state = 0
while(1):
    
    screen.fill((255, 255, 255))
    pg.draw.circle(screen,(159,150,110),(win_x/2,win_y/2),r)

    if state == 0:
        r += 1
    elif state == 1:
        r -= 1
    
    if r == win_y/2:
        state = 1
    elif r == 0:
        state = 0
        
    pg.time.delay(10) #หน่วงเวลา
    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()