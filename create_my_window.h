/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

#include <stddef.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>

sfRenderWindow *createMyWindow(unsigned int width, unsigned int height)
{
  sfRenderWindow *window;
  sfVideoMode video_mode;

  video_mode.width = width;
  video_mode.height = height;
  video_mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(video_mode, "My Window", sfDefaultStyle, NULL);
  return (window);
}
