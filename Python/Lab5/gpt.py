import pygame
import math

pygame.init()

# Set up the screen
size = width, height = 800, 600
screen = pygame.display.set_mode(size)

# Set up the projectile
start_pos = [50, height-50]  # starting position
angle = math.radians(45)  # initial angle in radians
speed = 50  # initial speed in pixels per second
gravity = 9.81  # acceleration due to gravity in m/s^2
time_step = 0.1  # simulation time step in seconds
x_vel = speed * math.cos(angle)  # initial x velocity
y_vel = -speed * math.sin(angle)  # initial y velocity (negative since y increases downwards)
pos = list(start_pos)  # current position

# Set up the clock
clock = pygame.time.Clock()

# Main loop
while True:
    # Handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            quit()

    # Clear the screen
    screen.fill((255, 255, 255))

    # Update the position of the projectile
    x = pos[0] + x_vel * time_step
    y = pos[1] + y_vel * time_step + 0.5 * gravity * time_step ** 2
    pos = [x, y]
    y_vel = y_vel + gravity * time_step

    # Draw the projectile
    pygame.draw.circle(screen, (255, 0, 0), [int(x), int(y)], 10)

    # Update the screen
    pygame.display.flip()

    # Limit the frame rate
    clock.tick(60)