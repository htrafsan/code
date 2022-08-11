#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float tx=0, ty=0;
int i =0;
float tempx = 0;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0, 1, 0);
    glBegin(GL_QUADS);
    glVertex2f(0.4, 0.4);
    glVertex2f(-0.4, 0.4);
    glVertex2f(-0.4, -0.4);
    glVertex2f(0.4, -0.4);

    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(xa+tx, ya+ty);
    glVertex2f(xb+tx, yb+ty);
    glVertex2f(xc+tx, yc+ty);
    glVertex2f(xd+tx, yd+ty);
    glEnd();
    glFlush();
    i++;
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        ty=ty+0.01;
        if(yc+ty>0.4)
        {
            printf("up ");
        }
        if(ya+ty<-0.4)
        {
            printf("down ");
        }
        if(xb+tx>0.4)
        {
            printf("right ");
        }
        if(xa+tx<-0.4)
        {
            printf("left ");
        }
        if(yc+ty<0.4 && ya+ty>-0.4 && xb+tx<0.4 && xa+tx>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'a':
        tx=tx-0.01;
        if(yc+ty>0.4)
        {
            printf("up ");
        }
        if(ya+ty<-0.4)
        {
            printf("down ");
        }
        if(xb+tx>0.4)
        {
            printf("right ");
        }
        if(xa+tx<-0.4)
        {
            printf("left ");
        }
        if(yc+ty<0.4 && ya+ty>-0.4 && xb+tx<0.4 && xa+tx>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 's':
        ty=ty-0.01;
        if(yc+ty>0.4)
        {
            printf("up ");
        }
        if(ya+ty<-0.4)
        {
            printf("down ");
        }
        if(xb+tx>0.4)
        {
            printf("right ");
        }
        if(xa+tx<-0.4)
        {
            printf("left ");
        }
        if(yc+ty<0.4 && ya+ty>-0.4 && xb+tx<0.4 && xa+tx>-0.4)
        {
            printf("Inside ");
        }
        printf("\n");
        glutPostRedisplay();
        break;
    case 'd':
        tx=tx+0.01;
        if(yc+ty>0.4)
        {
            printf("up ");
        }
        if(ya+ty<-0.4)
        {
            printf("down ");
        }
        if(xb+tx>0.4)
        {
            printf("right ");
        }
        if(xa+tx<-0.4)
        {
            printf("left ");
        }
        if(yc+ty<0.4 && ya+ty>-0.4 && xb+tx<0.4 && xa+tx>-0.4)
        {
            printf("Inside ");
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
        xa = xa*cos(45) - ya*sin(45);
        ya = tempx*sin(45) + ya*cos(45);
        tempx =xb;
        xb = xb*cos(45) - yb*sin(45);
        yb = tempx*sin(45) + yb*cos(45);
        tempx =xc;
        xc = xc*cos(45) - yc*sin(45);
        yc = tempx*sin(45) + yc*cos(45);
        tempx=xd;
        xd = xd*cos(45) - yd*sin(45);
        yd = tempx*sin(45) + yd*cos(45);
        glutPostRedisplay();
        break;
    case 'c':
        tempx=xa;
        xa = xa*cos(-45) - ya*sin(-45);
        ya = tempx*sin(-45) + ya*cos(-45);
        tempx =xb;
        xb = xb*cos(-45) - yb*sin(-45);
        yb =tempx*sin(-45) + yb*cos(-45);
        tempx=xc;
        xc = xc*cos(-45) - yc*sin(-45);
        yc = tempx*sin(-45) + yc*cos(-45);
        tempx=xd;
        xd = xd*cos(-45) - yd*sin(-45);
        yd = tempx*sin(-45) + yd*cos(-45);
        glutPostRedisplay();
        break;

    case 'l':
        xa = xa*2;
        ya = ya*2;
        xb = xb*2;
        yb = yb*2;
        xc = xc*2;
        yc = yc*2;
        xd = xd*2;
        yd = yd*2;
        glutPostRedisplay();
        break;
    case 'o':
        xa = xa*0.5;
        ya = ya*0.5;
        xb = xb*0.5;
        yb = yb*0.5;
        xc = xc*0.5;
        yc = yc*0.5;
        xd = xd*0.5;
        yd = yd*0.5;
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
    glutCreateWindow("4-2 CSE UAP B1");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
