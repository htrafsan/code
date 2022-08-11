#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float tx=0.4, ty=0.5, t=-45, sx=2, sy=0.5;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(xa, ya);
    glColor3f(0, 1, 0);
    glVertex2f(xb, yb);
    glColor3f(0, 0, 1);
    glVertex2f(xc, yc);
    glColor3f(1, 0.5, 0.5);
    glVertex2f(xd, yd);
    glEnd();
    glFlush();
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        glTranslatef(0, 0.01, 0);
        glutPostRedisplay();
        break;
    case 's':
        glTranslatef(0, -0.01, 0);
        glutPostRedisplay();
        break;
    case 'a':
        glTranslatef(-0.01, 0, 0);
        glutPostRedisplay();
        break;
    case 'd':
        glTranslatef(0.01, 0, 0);
        glutPostRedisplay();
        break;
    case 'm':
        glRotatef(-1, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'n':
        glRotatef(1, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'i':
        glScalef(2, 2, 1);
        glutPostRedisplay();
        break;
    case 'o':
        glScalef(0.5, 0.5, 1);
        glutPostRedisplay();
        break;
    }
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(700, 200);
    glutCreateWindow("Computer Graphics Lab");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
