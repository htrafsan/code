#include <windows.h>
#include <GL/glut.h>

#include <stdlib.h>
#include <stdio.h>

GLfloat angle= 0.0;

void spin (void)
{
    angle+= 0.01;
    glutPostRedisplay();
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity ();
    gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glRotatef(angle, 1, 0, 0);
    glRotatef(angle, 0, 1, 0);
    glRotatef(angle, 0, 0, 1);
    glutWireCube(2.0);
    glFlush();
}


void keyboard (unsigned char key, int x, int y)
{
    if (key == 27)
    {
        exit (0);
    }
}


void reshape (int w, int h)
{
    glViewport (0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluPerspective (60, (GLfloat)w / (GLfloat)h, 1.0, 100.0);
    glMatrixMode (GL_MODELVIEW);
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("ex6: A rotating cube.");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutIdleFunc(spin);
    glutMainLoop();
    return 0;
}
