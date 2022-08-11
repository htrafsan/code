#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>
#include<cstdio>
float xr = 0, yr = 0, tempx = 0, tempy = 0;
float xa=0.5,ya=0.5,xb=0.5,yb=-0.5,xc=-0.5,yc=-0.5,xd=-0.5,yd=0.5;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_QUADS);

    glVertex2f(xa,ya);
    glVertex2f(xb,yb);
    glVertex2f(xc,yc);
    glVertex2f(xd,yd);
    if(xa==0.5 && ya==0.5 && xb==0.5 && yb==-0.5 && xc==-0.5 && yc==-0.5 && xd==-0.5 && yd==0.5)
        {
            printf("One rotation complete!");
        }
    glEnd();
    glutSwapBuffers();
}

void keyboard(unsigned char key,int x, int y)
{
    switch(key)
    {
    case 'r':

        tempx = xa;
        tempy = ya;
        xa = tempx*cos(45)-tempy*sin(45);
        ya = tempx*sin(45)+tempy*cos(45);
        tempx = xb;
        tempy = yb;
        xb = tempx*cos(45)-tempy*sin(45);
        yb = tempx*sin(45)+tempy*cos(45);
        tempx = xc;
        tempy = yc;
        xc = tempx*cos(45)-tempy*sin(45);
        yc = tempx*sin(45)+tempy*cos(45);
        tempx = xd;
        tempy = yd;
        xd = tempx*cos(45)-tempy*sin(45);
        yd = tempx*sin(45)+tempy*cos(45);
        glutPostRedisplay();
        break;
    }
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
