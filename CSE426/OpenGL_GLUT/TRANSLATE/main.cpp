#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
float xr = 0, yr = 0;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);

    glVertex2f(0.25,0.25);
    glVertex2f(0.5,0.38);
    glVertex2f(0,0.5);
    glVertex2f(-0.5,0.38);
    glClear(GL_COLOR_BUFFER_BIT);
    glTranslatef(xr,yr,0);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);

    glVertex2f(0+xr,0.25+yr);
    glVertex2f(0.5+xr,0.38+yr);
    glVertex2f(0+xr,0.5+yr);
    glVertex2f(-0.5+xr,0.38+yr);
    glEnd();
    glutSwapBuffers();
}

void keyboard(unsigned char key,int x, int y)
{
    switch(key)
    {
    case 'u':
        yr=yr+0.01;
        glutPostRedisplay();
        break;
    case 'd':
        yr=yr-0.01;
        glutPostRedisplay();
        break;
    case 'r':
        xr=xr+0.01;
        glutPostRedisplay();
        break;
    case 'l':
        xr=xr-0.01;
        glutPostRedisplay();
        break;
    }
    /*
    switch(key)
    {
    case GLUT_KEY_UP:
        yr=yr+0.01;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        yr=yr-0.01;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        xr=xr+0.01;
        glutPostRedisplay();
        break;
    case GLUT_KEY_LEFT:
        xr=xr-0.01;
        glutPostRedisplay();
        break;
    }
    */
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(600,500);
    glutCreateWindow("Day1");
    glClearColor(0,0,0,0);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);


    glutMainLoop();
    return 0;
}
