
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

GLuint idTexturaFundo;
GLuint idTexturaAquiles;

GLuint carregaTextura(const char* arquivo) {
    GLuint idTextura = SOIL_load_OGL_texture(
                           arquivo,
                           SOIL_LOAD_AUTO,
                           SOIL_CREATE_NEW_ID,
                           SOIL_FLAG_INVERT_Y
                       );

    if (idTextura == 0) {
        printf("Erro do SOIL: '%s'\n", SOIL_last_result());
        printf("Erro ao abrir o arquivo: %s\n.", arquivo);
    }

    return idTextura;
}

void carregaTexturas()
{
    idTexturaFundo = carregaTextura("fundo.png");
    idTexturaAquiles = carregaTextura("aquiles.png");
}