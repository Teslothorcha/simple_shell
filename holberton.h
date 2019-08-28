#ifndef HOL_MINI_SHELL
#define HOL_MINI_SHELL

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#define PROMPT "$ "
#define DELIM "=:\n"
#define EXIIT "exit"
#define ENVV "env"

extern char **environ;
/**
 * struct listint_s - singly linked list
 * @dir: string of a directory name
 * @next: points to the next node
 */
typedef struct listint_s
{
	char *dir;
	struct listint_s *next;
} listint_t;

void current_path(char **arr);
void shell_1(char **cadena, int counte, char **av);
void exec_path(listint_t **head, char **commands);
int main(__attribute__ ((unused))int ac, char **av);
listint_t *list_maker(listint_t **head, char *token, unsigned int l);
void free_list(listint_t **head);
size_t listint_len(const listint_t *h);
void get_path(char **arr, char *cadena, int counte, char **av);
void error_message(char **arr, int counte, char **av);
int error_helper(char helper);
void free_em_all(char **tokenizeed);
void handler(int sig);
listint_t *_slash(listint_t **head, char *command, int lim, int lim2);
char *s_strdup(char *s);
int _strcmpn(char *s1, char *s2, int n);
unsigned int s_length(char *s);
char *s_strcopy(char *dest, char *src, unsigned int n);
char **tokens(char *shell_input);
void print_env(char *cadena, char **arr);
void free_listint(listint_t **head);

#endif
