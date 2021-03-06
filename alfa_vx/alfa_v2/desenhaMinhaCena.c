
#include "includes.h"

void desenhaMinhaCena()
{
    glColor3f(1.0, 1.0, 1.0);                             // branco, para não influenciar na textura

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaFundo);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
                                                          // desenha um quadrado do tamanho da tela, que receberá
        glVertex2f(0, 0);                                 // a textura do background do jogo

        glTexCoord2f(1, 0);
        glVertex2f(100, 0);

        glTexCoord2f(1, 1);
        glVertex2f(100, 100);

        glTexCoord2f(0, 1);
        glVertex2f(0,  100);

    glEnd();

    glDisable(GL_TEXTURE_2D);

    glutSwapBuffers();
}