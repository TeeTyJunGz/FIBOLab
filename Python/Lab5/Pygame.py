import pygame as pg
pg.init()

win_x, win_y = 800, 480 #1 ขนาดหน้าจอ

screen = pg.display.set_mode((win_x, win_y)) #1 สร้างหน้าต่างเกม

while(1): #2 ทำการสร้าง loop
    
    screen.fill((255, 255, 255)) #3ตั้งสีพื้นหลัง
    
    pg.display.update() #4 ทำการอัพเดท
    
    for event in pg.event.get(): # ทำการ Check event ต่างๆที่เกิดขึ้น
        if event.type == pg.QUIT: 
            pg.quit()
            exit()