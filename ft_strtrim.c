#include "ft_libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
		len--;
	ft_substr(s1, i, len);
	return (s1);
}

#include <stdio.h>
#include "ft_libft.h"

int main() {
    char *s1 = "Hola Mundo!";
    char *set = "o!";
    char *resultado;

    // Probar ft_strtrim eliminando los caracteres 'o' y '!' de la cadena "Hola Mundo!"
    resultado = ft_strtrim(s1, set);
    if (resultado != NULL) {
        printf("Resultado: %s\n", resultado);  // Debería imprimir "Hla Mund"
        free(resultado);  // Liberar la memoria asignada
    } else {
        printf("Error al recortar la cadena.\n");
    }

    // Probar con una cadena vacía
    resultado = ft_strtrim("", set);
    if (resultado != NULL) {
        printf("Resultado con cadena vacía: '%s'\n", resultado);  // Debería imprimir ""
        free(resultado);  // Liberar la memoria asignada
    } else {
        printf("Error al recortar la cadena vacía.\n");
    }

    // Probar con set vacío (no se elimina nada)
    resultado = ft_strtrim(s1, "");
    if (resultado != NULL) {
        printf("Resultado con set vacío: %s\n", resultado);  // Debería imprimir "Hola Mundo!"
        free(resultado);  // Liberar la memoria asignada
    } else {
        printf("Error al recortar con set vacío.\n");
    }

    // Probar con ambos s1 y set vacíos
    resultado = ft_strtrim("", "");
    if (resultado != NULL) {
        printf("Resultado con ambos vacíos: '%s'\n", resultado);  // Debería imprimir ""
        free(resultado);  // Liberar la memoria asignada
    } else {
        printf("Error al recortar con ambos vacíos.\n");
    }

    return 0;
}
