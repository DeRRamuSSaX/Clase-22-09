void inicio() {
  size(500,500);
  background(255);

}

void turtle(char command) {
  switch (command) {
    case 'F':
    float newX = x + cos(radians(direction)) * distance;
    float newY = y + sin(radians(direction)) * distance;
    line(x,y,newX,newY);
    x = newX;
    y = newY;
  }
};
