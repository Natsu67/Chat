#pragma once 
#ifndef chat
#define chat

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ncurses.h>
#include <time.h>
#include <errno.h>
#include <string.h>
#include <memory.h>
#include <netdb.h>
#include <netinet/in.h>

///server
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <time.h>


////////gtk
#include <gtk/gtk.h>

///////database
#include <sqlite3.h>

/////
int *client_anch, *client_ash;

///////
char *mx_autentification(int sock);
void *connection_handler(void *new_sock);
////
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_strjoin(char const *s1, char const *s2);

#endif
