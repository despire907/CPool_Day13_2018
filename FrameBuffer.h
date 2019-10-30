/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

typedef struct s_framebuffer
{
    unsigned char *pixels;
    unsigned int width;
    unsigned int height;
}t_framebuffer;

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height);
void put_pixel(t_framebuffer *framebuffer, unsigned int x, unsigned int y, sfColor color);
