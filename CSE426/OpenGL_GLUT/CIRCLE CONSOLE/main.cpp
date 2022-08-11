#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int n;
float x[100], y[100], r[100];
float red[100], green[100], blue[100];

void display(void)
{
    for(int i=0; i<n; i++)
    {

        glColor3f(red[i], green[i], blue[i]);
        glBegin(GL_POLYGON);
        for(float j = 0; j<360; j = j+0.01)
        {
            float xa = x[i] + r[i] * cos(j);
            float ya = y[i] + r[i] * sin(j);

            glVertex2f(xa, ya);

        }
        glEnd();
    }
    glFlush();
}


int main(int argc,char **argv)
{
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%f%f%f", &x[i], &y[i], &r[i]);
        scanf("%f%f%f", &red[i], &green[i], &blue[i]);
    }

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("4-2 CSE UAP B2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
