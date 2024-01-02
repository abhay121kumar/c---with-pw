#include <iostream>
// #include <conio.h>
#include<bits/stdc++.h>

using namespace std;

// Define the game board size
const int width = 20;
const int height = 17;

// Define the snake's direction
enum Direction {
  UP,
  DOWN,
  LEFT,
  RIGHT
};

// Define the snake's body
struct SnakeBody {
  int x;
  int y;
};

// Define the snake
class Snake {
public:
  Snake() {
    // Initialize the snake's head
    head.x = width / 2;
    head.y = height / 2;

    // Initialize the snake's direction
    direction = UP;
  }

  // Move the snake
  void move() {
    // Update the snake's head position
    switch (direction) {
      case UP:
        head.y--;
        break;
      case DOWN:
        head.y++;
        break;
      case LEFT:
        head.x--;
        break;
      case RIGHT:
        head.x++;
        break;
    }

    // Check if the snake has hit itself
    for (int i = 1; i < tail.size(); i++) {
      if (head.x == tail[i].x && head.y == tail[i].y) {
        // The snake has hit itself, so the game is over
        gameOver = true;
        return;
      }
    }

    // Check if the snake has eaten the food
    if (head.x == food.x && head.y == food.y) {
      // The snake has eaten the food, so grow it by one segment
      tail.push_back({head.x, head.y});

      // Spawn a new food item
      food.x = rand() % width;
      food.y = rand() % height;
    }
  }

  // Draw the snake
  void draw() {
    // Draw the snake's head
    cout << "@";

    // Draw the snake's body
    for (int i = 1; i < tail.size(); i++) {
      cout << "*";
    }
  }

private:
  // The snake's head position
  SnakeBody head;

  // The snake's direction
  Direction direction;

  // The snake's body segments
  vector<SnakeBody> tail;

  // Whether the game is over
  bool gameOver = false;

  // The food item position
  SnakeBody food;
};

// Play the game
int main() {
  // Initialize the game board
  char board[width][height];
  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      board[i][j] = ' ';
    }
  }

  // Create the snake
  Snake snake;

  // Start the game loop
  while (!snake.gameOver) {
    // Clear the screen
    system("cls");

    // Draw the game board
    for (int i = 0; i < width; i++) {
      for (int j = 0; j < height; j++) {
        cout << board[i][j];
      }
      cout << endl;
    }

    // Draw the snake
    snake.draw();

    // Get the user's input
    char key = getch();
    switch (key) {
      case 'w':
        snake.direction = UP;
        break;
      case 'a':
        snake.direction = LEFT;
        break;
      case 's':
        snake.direction = DOWN;
        break;
      case 'd':
        snake.direction = RIGHT;
        break;
    }

    // Move the snake
    snake.move();

    // Check if the game is over
    if (snake.gameOver) {
      break;
    }

    // Sleep for a short time
    Sleep(100);
  }

  // The game is over
  cout << "Game over!" << endl;

  return 0;
}