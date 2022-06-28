#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
    //glTranslatef(-0.4, -0.4, 0);
    //glRotatef(-45, 0, 0, 1);
    //glScalef(0.5, 0.5, 1);

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(0.2, 0.2);
    glColor3f(0, 1, 0);
    glVertex2f(0.2, -0.2);
    glColor3f(0, 0, 1);
    glVertex2f(-0.2, -0.2);
    glColor3f(0.8, 0.4, 0.1);
    glVertex2f(-0.2, 0.2);
    glEnd();
    glFlush();
}

void keyboard(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_UP:
        glTranslatef(0, 0.01, 0);
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        glTranslatef(0, -0.01, 0);
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        glTranslatef(0.01, 0, 0);
        glutPostRedisplay();
        break;
    case GLUT_KEY_LEFT:
        glTranslatef(-0.01, 0, 0);
        glutPostRedisplay();
        break;
    }
}

void keypress(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'r':
        glRotatef(1, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'c':
        glRotatef(-1, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'm':
        glScalef(1.1, 1.1, 1);
        glutPostRedisplay();
        break;
    case 'n':
        glScalef(0.9, 0.9, 1);
        glutPostRedisplay();
        break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 A1");
    glutDisplayFunc(display);
    glutSpecialFunc(keyboard);
    glutKeyboardFunc(keypress);
    glutMainLoop();
    return 0;
}
