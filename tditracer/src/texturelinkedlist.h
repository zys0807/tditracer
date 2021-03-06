
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct texture_struct_t texture_struct_t;

struct texture_struct_t {
  int id;
  unsigned int name;
  int ttype;
  int frame;
  int xoffset;
  int yoffset;
  int width;
  int height;
  int format;
  void* png_data;
  size_t png_data_size;

  texture_struct_t* next;
};

extern texture_struct_t* texturelinkedlist_create_list(
    int id, unsigned int name, int ttype, int frame, int xoffset, int yoffset,
    int width, int height, int format, void* png_data, size_t png_data_size);
extern texture_struct_t* texturelinkedlist_add_to_list(
    int id, unsigned int name, int ttype, int frame, int xoffset, int yoffset,
    int width, int height, int format, void* png_data, size_t png_data_size,
    bool add_to_end);
extern texture_struct_t* texturelinkedlist_search_in_list(
    int id, struct texture_struct_t** prev);
extern int texturelinkedlist_delete_from_list(int id);
extern void texturelinkedlist_print_list(void);
extern int texturelinkedlist_test(void);
