/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

#include "../MUL_my_hunter_2018/include/create_my_window.h"

int main()
{
  sfRenderWindow *window;
  sfTexture *texture;
  sfSprite *sprite;
  sfEvent event;

  window = createMyWindow(800, 291);
  texture = sfTexture_createFromFile("/home/dlohan/Epitech-Project/CPool_Day13_2018/logo.png", NULL);
  sprite = sfSprite_create();

  while (sfRenderWindow_isOpen(window)) {
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    while (sfRenderWindow_pollEvent(window, &event)) {
	if (event.type == sfEvtClosed)
	  sfRenderWindow_close(window);
    }
  }

  sfRenderWindow_destroy(window);
  return (0);
}
