
#include "includes.h"
#include "variaveis.h"
#include "defines.h"

void desenhaPedra(long int posicao_inimigo)
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaPedra);

    glPushMatrix();

    glTranslatef(posicao_inimigo, PEDRA_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-PEDRA_LARG/2, -PEDRA_ALT/2);

        glTexCoord2f(1, 0);
        glVertex2f( PEDRA_LARG/2, -PEDRA_ALT/2);

        glTexCoord2f(1, 1);
        glVertex2f( PEDRA_LARG/2,  PEDRA_ALT/2);

        glTexCoord2f(0, 1);
        glVertex2f(-PEDRA_LARG/2,  PEDRA_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void desenhaArbusto(long int posicao_inimigo)
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaArbusto);

    glPushMatrix();

    glTranslatef(posicao_inimigo, ARBUSTO_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-ARBUSTO_LARG/2, -ARBUSTO_ALT/2);

        glTexCoord2f(1, 0);
        glVertex2f( ARBUSTO_LARG/2, -ARBUSTO_ALT/2);

        glTexCoord2f(1, 1);
        glVertex2f( ARBUSTO_LARG/2,  ARBUSTO_ALT/2);

        glTexCoord2f(0, 1);
        glVertex2f(-ARBUSTO_LARG/2,  ARBUSTO_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void desenhaArvore(long int posicao_inimigo)
{
    glColor3f(1.0, 1.0, 1.0);

    glEnable(GL_TEXTURE_2D);

    glBindTexture(GL_TEXTURE_2D, idTexturaArvore);

    glPushMatrix();

    glTranslatef(posicao_inimigo, ARVORE_Y, 0);

    glBegin(GL_TRIANGLE_FAN);

        glTexCoord2f(0, 0);
        glVertex2f(-ARVORE_LARG/2, -ARVORE_ALT/2);

        glTexCoord2f(1, 0);
        glVertex2f( ARVORE_LARG/2, -ARVORE_ALT/2);

        glTexCoord2f(1, 1);
        glVertex2f( ARVORE_LARG/2,  ARVORE_ALT/2);

        glTexCoord2f(0, 1);
        glVertex2f(-ARVORE_LARG/2,  ARVORE_ALT/2);

    glEnd();

    glPopMatrix();

    glDisable(GL_TEXTURE_2D);
}

void decideInimigos()
{
    int cont_tela;                                  // contador de inimigos na tela
    long int posicao_inimigo;

    for(cont_tela = 0; cont_tela < INIMIGOS_FASE_1; cont_tela ++)
    {
        posicao_inimigo = (pos_inimigo[cont_tela] - distancia);

        if( (posicao_inimigo > X_MIN_INIMIGO) && (posicao_inimigo < X_MAX_INIMIGO) )
        {
            posicao_inimigo *= 10;

            switch(tipo_inimigo[cont_tela])
            {
                case 0:
                    desenhaArvore(posicao_inimigo);
                    break;

                case 1:
                    desenhaPedra(posicao_inimigo);
                    break;

                case 2:
                    desenhaArbusto(posicao_inimigo);
                    break;
            }
        }
    }
}