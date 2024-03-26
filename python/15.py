import pygame
import sys

# Initialize Pygame
pygame.init()

# Set up the screen
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Bouncing Ball")

# Define colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)

# Set up the ball
ball_radius = 20
ball_color = WHITE
ball_x = width // 2
ball_y = height // 2
ball_speed_x = 5
ball_speed_y = 5

# Set up the clock
clock = pygame.time.Clock()

# Main loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Move the ball
    ball_x += ball_speed_x
    ball_y += ball_speed_y

    # Check if the ball hits the sides of the screen
    if ball_x + ball_radius >= width or ball_x - ball_radius <= 0:
        ball_speed_x *= -1
    if ball_y + ball_radius >= height or ball_y - ball_radius <= 0:
        ball_speed_y *= -1

    # Clear the screen
    screen.fill(BLACK)

    # Draw the ball
    pygame.draw.circle(screen, ball_color, (ball_x, ball_y), ball_radius)

    # Update the display
    pygame.display.flip()

    # Control the frame rate
    clock.tick(60)

# Quit Pygame
pygame.quit()
sys.exit()