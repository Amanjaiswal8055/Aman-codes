import pygame
import math

# Initialize Pygame
pygame.init()

# Set up the screen
screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Elliptical Orbits")

# Main loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Clear the screen
    screen.fill((0, 0, 0))

    # Simulate elliptical orbit
    time = pygame.time.get_ticks() / 1000  # Convert milliseconds to seconds
    radius_x = 300
    radius_y = 200
    center_x = 400
    center_y = 300
    x = center_x + radius_x * math.cos(time)
    y = center_y + radius_y * math.sin(time)

    # Draw the planet
    pygame.draw.circle(screen, (255, 255, 255), (int(x), int(y)), 10)

    # Update the display
    pygame.display.flip()

# Quit Pygame
pygame.quit()
