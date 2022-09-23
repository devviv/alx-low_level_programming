#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED


/* *
* _putchar - écrit le caractère c sur stdout * @c : Le caractère à imprimer
*
* Retour : En cas de succès 1.
* En cas d'erreur, -1 est renvoyé et l'erreur est définie de manière appropriée.
 */
char _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
