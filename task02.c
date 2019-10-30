/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include "FrameBuffer.h"

int main()
{
  int width;
  int height;
  int bitsPerPixel;
  sfUint8 *pixels;

  width = 500;
  height = 500;
  bitsPerPixel = 32;

  pixels = malloc (width * height * bitsPerPixel / 8);
  pixels[0] = 255;
  pixels[1] = 255;
  pixels[2] = 255;
  display_framebuffer(pixels, width, height);
}
