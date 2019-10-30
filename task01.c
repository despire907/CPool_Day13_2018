/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

#include <stddef.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>

int main()
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfEvent event;

    video_mode.width = 800;
    video_mode.height = 600;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,
				 "My Window",
				 sfDefaultStyle,
				 NULL);
  while (sfRenderWindow_isOpen(window))
    {
      sfRenderWindow_display(window);
      while (sfRenderWindow_pollEvent(window, &event)) {
	if (event.type == sfEvtClosed)
	  sfRenderWindow_close(window);
      }
    }
  sfRenderWindow_destroy(window);
  return (0);
}
