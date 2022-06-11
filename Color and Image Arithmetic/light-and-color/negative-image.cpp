
int main(int argc, char *argv[])
{
  unsigned long w = 0, h = 0;
  std::vector<ColorRGB> image;
  loadImage(image, w, h, "pics/reggi.jpg");
  screen(w, h, 0, "RGB Color");

  ColorRGB color; //the color for the pixels

  for(int y = 0; y < h; y++)
  for(int x = 0; x < w; x++)
  {
    //here the negative color is calculated!
    color.r = 255 - image[y * w + x].r;
    color.g = 255 - image[y * w + x].g;
    color.b = 255 - image[y * w + x].b;
    pset(x, y, color);
  }

  redraw();
  sleep();
  return 0;
}