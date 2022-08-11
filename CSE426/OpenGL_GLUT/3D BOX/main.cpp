#include<GL/glut.h>
#include<windows.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0, 0, 3, 0, 0, 0, 0, 1, 0);
    glRotatef(45, 1, 0, 0);
    glutWireCube(1.0);
    glFlush();
}


int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("4-2 CSE UAP B2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
