#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float xr = 0, yr = 0;
int i=0;
float tempx=0, tempy=0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(0, 1, 0);
    glVertex2f(0.4, 0.4);
    glVertex2f(-0.4, 0.4);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.4, -0.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1, 0, 0);
    glVertex2f(xa+xr, ya+yr);
    glVertex2f(xb+xr, yb+yr);
    glVertex2f(xc+xr, yc+yr);
    glVertex2f(xd+xr, yd+yr);
    glEnd();
    glFlush();
    i++;
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        yr=yr+0.01;
        if(yc+yr>0.4)
        {
            printf("up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xb+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xb+xr<0.4 && xa+xr>-0.4)
        {
            printf("inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'a':
        xr=xr-0.01;
        if(yc+yr>0.4)
        {
            printf("up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xb+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xb+xr<0.4 && xa+xr>-0.4)
        {
            printf("inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 's':
        yr=yr-0.01;
        if(yc+yr>0.4)
        {
            printf("up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xb+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xb+xr<0.4 && xa+xr>-0.4)
        {
            printf("inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'd':
        xr=xr+0.01;
        if(yc+yr>0.4)
        {
            printf("up ");
        }
        if(ya+yr<-0.4)
        {
            printf("down ");
        }
        if(xb+xr>0.4)
        {
            printf("right ");
        }
        if(xa+xr<-0.4)
        {
            printf("left ");
        }
        if(yc+yr<0.4 && ya+yr>-0.4 && xb+xr<0.4 && xa+xr>-0.4)
        {
            printf("inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;

    case 'm':
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(45*i, 0, 0, 1);
        glutPostRedisplay();
        break;
    case 'n':
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(-45*i, 0, 0, 1);
        glutPostRedisplay();
        break;

    case 'x':
        tempx = xa;
        tempy = ya;
        xa=xa*cos(45)-ya*sin(45);
        ya=tempx*sin(45)+tempy*cos(45);
        tempx = xb;
        tempy = yb;
        xb=xb*cos(45)-yb*sin(45);
        yb=tempx*sin(45)+tempy*cos(45);
        tempx = xc;
        tempy = yc;
        xc=xc*cos(45)-yc*sin(45);
        yc=tempx*sin(45)+tempy*cos(45);
        tempx = xd;
        tempy = yd;
        xd=xd*cos(45)-yd*sin(45);
        yd=tempx*sin(45)+tempy*cos(45);
        glutPostRedisplay();
        break;
    case 'l':
        xa=xa*2;
        ya=ya*2;
        xb=xb*2;
        yb=yb*2;
        xc=xc*2;
        yc=yc*2;
        xd=xd*2;
        yd=yd*2;
        glutPostRedisplay();
        break;

    case 'o':
        xa=xa*0.5;
        ya=ya*0.5;
        xb=xb*0.5;
        yb=yb*0.5;
        xc=xc*0.5;
        yc=yc*0.5;
        xd=xd*0.5;
        yd=yd*0.5;
        glutPostRedisplay();
        break;

    }
}

int main(int argc,char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 500);
    glutCreateWindow("4-2 CSE UAP B2");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
