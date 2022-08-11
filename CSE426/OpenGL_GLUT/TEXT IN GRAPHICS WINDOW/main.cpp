#include<windows.h>
#include<GL/glut.h>

float angle = 0;

void drawString(void *font, float x, float y, char *str)
{
    char *ch;
    glRasterPos3f(x, y, 0);
    for(ch = str; *ch; ch++)
    {
        glutBitmapCharacter(font, (int)*ch);
    }
}


void spin(void)
{
    angle = angle + 0.1;
    glutPostRedisplay();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, w/h, 1, 100);
    glMatrixMode(GL_MODELVIEW);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 1, 0);
    glLoadIdentity();
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);
    glRotatef(angle, 1, 0, 0);
    glColor3f(1, 1, 1);
    drawString(GLUT_BITMAP_HELVETICA_12, 2, 2, "4-2 CSE UAP B2");
    glRotatef(angle, 0, 1, 0);
    glRotatef(angle, 0, 0, 1);
    glColor3f(1, 1, 1);
    drawString(GLUT_BITMAP_HELVETICA_18, 0, 0, "4-2 CSE UAP B2");
    glutWireCube(2.0);
    glFlush();
}


int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("4-2 CSE UAP B2");
    glColor3f(1, 1, 1);

    glutDisplayFunc(display);
    drawString(GLUT_BITMAP_HELVETICA_18, 0, 0, "4-2 CSE UAP B2");
    glutReshapeFunc(reshape);
    glutIdleFunc(spin);
    glutMainLoop();
    return 0;
}
