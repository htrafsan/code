#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265
#define deg 45

float xa=0.2, ya=0.2, xb=0.2, yb=-0.2, xc=-0.2, yc=-0.2, xd=-0.2, yd=0.2;
float temp;
void display(void)
{
    //glTranslatef(-0.4, -0.4, 0);
    //glRotatef(-45, 0, 0, 1);
    //glScalef(0.5, 0.5, 1);

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);

    glColor3f(0, 1, 0);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.4, -0.4);
    glVertex2f(-0.4, -0.4);
    glVertex2f(-0.4, 0.4);


    glColor3f(1, 0, 0);
    glVertex2f(xa, ya);
    glVertex2f(xb, yb);
    glVertex2f(xc, yc);
    glVertex2f(xd, yd);

    glEnd();
    glFlush();
}

void keyboard(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_UP:
        //glTranslatef(0, 0.01, 0);
        ya = ya + 0.01;
        yb = yb + 0.01;
        yc = yc + 0.01;
        yd = yd + 0.01;
        glutPostRedisplay();

        //inside
        if(xa>=-0.4 && xa<=0.4 && xb>=-0.4 && xb<=0.4 && xc>=-0.4 && xc<=0.4 && xd>=-0.4 && xd<=0.4 && ya>=-0.4 && ya<=0.4 && yb>=-0.4 && yb<=0.4 && yc>=-0.4 && yc<=0.4 && yd>=-0.4 && yd<=0.4)
        {
           printf("Inside ");
        }

        //up
        if(ya>0.4 && yb>0.4 && yb>0.4 && yd>0.4)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.4 && yb<-0.4 && yb<-0.4 && yd<-0.4)
        {
            printf("Down ");
        }

        //right
        if(xa>0.4 && xb>0.4 && xb>0.4 && xd>0.4)
        {
            printf("Right ");
        }

        //Left
        if(xa<-0.4 && xb<-0.4 && xb<-0.4 && xd<-0.4)
        {
            printf("Left ");
        }

        printf("\n");

        break;
    case GLUT_KEY_DOWN:
        //glTranslatef(0, -0.01, 0);
        ya = ya - 0.01;
        yb = yb - 0.01;
        yc = yc - 0.01;
        yd = yd - 0.01;
        glutPostRedisplay();
        //inside
        if(xa>=-0.4 && xa<=0.4 && xb>=-0.4 && xb<=0.4 && xc>=-0.4 && xc<=0.4 && xd>=-0.4 && xd<=0.4 && ya>=-0.4 && ya<=0.4 && yb>=-0.4 && yb<=0.4 && yc>=-0.4 && yc<=0.4 && yd>=-0.4 && yd<=0.4)
        {
           printf("Inside ");
        }

        //up
        if(ya>0.4 && yb>0.4 && yb>0.4 && yd>0.4)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.4 && yb<-0.4 && yb<-0.4 && yd<-0.4)
        {
            printf("Down ");
        }

        //right
        if(xa>0.4 && xb>0.4 && xb>0.4 && xd>0.4)
        {
            printf("Right ");
        }

        //Left
        if(xa<-0.4 && xb<-0.4 && xb<-0.4 && xd<-0.4)
        {
            printf("Left ");
        }

        printf("\n");
        break;
    case GLUT_KEY_RIGHT:
        //glTranslatef(0.01, 0, 0);
        xa = xa + 0.01;
        xb = xb + 0.01;
        xc = xc + 0.01;
        xd = xd + 0.01;
        glutPostRedisplay();
        //inside
        if(xa>=-0.4 && xa<=0.4 && xb>=-0.4 && xb<=0.4 && xc>=-0.4 && xc<=0.4 && xd>=-0.4 && xd<=0.4 && ya>=-0.4 && ya<=0.4 && yb>=-0.4 && yb<=0.4 && yc>=-0.4 && yc<=0.4 && yd>=-0.4 && yd<=0.4)
        {
           printf("Inside ");
        }

        //up
        if(ya>0.4 && yb>0.4 && yb>0.4 && yd>0.4)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.4 && yb<-0.4 && yb<-0.4 && yd<-0.4)
        {
            printf("Down ");
        }

        //right
        if(xa>0.4 && xb>0.4 && xb>0.4 && xd>0.4)
        {
            printf("Right ");
        }

        //Left
        if(xa<-0.4 && xb<-0.4 && xb<-0.4 && xd<-0.4)
        {
            printf("Left ");
        }

        printf("\n");
        break;
    case GLUT_KEY_LEFT:
        //glTranslatef(-0.01, 0, 0);
        xa = xa - 0.01;
        xb = xb - 0.01;
        xc = xc - 0.01;
        xd = xd - 0.01;
        glutPostRedisplay();
        //inside
        if(xa>=-0.4 && xa<=0.4 && xb>=-0.4 && xb<=0.4 && xc>=-0.4 && xc<=0.4 && xd>=-0.4 && xd<=0.4 && ya>=-0.4 && ya<=0.4 && yb>=-0.4 && yb<=0.4 && yc>=-0.4 && yc<=0.4 && yd>=-0.4 && yd<=0.4)
        {
           printf("Inside ");
        }

        //up
        if(ya>0.4 && yb>0.4 && yb>0.4 && yd>0.4)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.4 && yb<-0.4 && yb<-0.4 && yd<-0.4)
        {
            printf("Down ");
        }

        //right
        if(xa>0.4 && xb>0.4 && xb>0.4 && xd>0.4)
        {
            printf("Right ");
        }

        //Left
        if(xa<-0.4 && xb<-0.4 && xb<-0.4 && xd<-0.4)
        {
            printf("Left ");
        }

        printf("\n");
        break;
    }
}

void keypress(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'r':
        //glRotatef(1, 0, 0, 1);
        temp = xa;
        xa = xa*cos(pi/180) - ya*sin(pi/180);
        ya = temp*sin(pi/180) + ya*cos(pi/180);

        temp = xb;
        xb = xb*cos(pi/180) - yb*sin(pi/180);
        yb = temp*sin(pi/180) + yb*cos(pi/180);

        temp = xc;
        xc = xc*cos(pi/180) - yc*sin(pi/180);
        yc = temp*sin(pi/180) + yc*cos(pi/180);

        temp = xd;
        xd = xd*cos(pi/180) - yd*sin(pi/180);
        yd = temp*sin(pi/180) + yd*cos(pi/180);
        glutPostRedisplay();

        //inside
        if(xa>=-0.4 && xa<=0.4 && xb>=-0.4 && xb<=0.4 && xc>=-0.4 && xc<=0.4 && xd>=-0.4 && xd<=0.4 && ya>=-0.4 && ya<=0.4 && yb>=-0.4 && yb<=0.4 && yc>=-0.4 && yc<=0.4 && yd>=-0.4 && yd<=0.4)
        {
           printf("Inside ");
        }

        //up
        if(ya>0.4 && yb>0.4 && yb>0.4 && yd>0.4)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.4 && yb<-0.4 && yb<-0.4 && yd<-0.4)
        {
            printf("Down ");
        }

        //right
        if(xa>0.4 && xb>0.4 && xb>0.4 && xd>0.4)
        {
            printf("Right ");
        }

        //Left
        if(xa<-0.4 && xb<-0.4 && xb<-0.4 && xd<-0.4)
        {
            printf("Left ");
        }

        printf("\n");

        break;
    case 'c':
        //glRotatef(-1, 0, 0, 1);
        temp = xa;
        xa = xa*cos(-pi/180) - ya*sin(-pi/180);
        ya = temp*sin(-pi/180) + ya*cos(-pi/180);

        temp = xb;
        xb = xb*cos(-pi/180) - yb*sin(-pi/180);
        yb = temp*sin(-pi/180) + yb*cos(-pi/180);

        temp = xc;
        xc = xc*cos(-pi/180) - yc*sin(-pi/180);
        yc = temp*sin(-pi/180) + yc*cos(-pi/180);

        temp = xd;
        xd = xd*cos(-pi/180) - yd*sin(-pi/180);
        yd = temp*sin(-pi/180) + yd*cos(-pi/180);
        glutPostRedisplay();

        //inside
        if(xa>=-0.4 && xa<=0.4 && xb>=-0.4 && xb<=0.4 && xc>=-0.4 && xc<=0.4 && xd>=-0.4 && xd<=0.4 && ya>=-0.4 && ya<=0.4 && yb>=-0.4 && yb<=0.4 && yc>=-0.4 && yc<=0.4 && yd>=-0.4 && yd<=0.4)
        {
           printf("Inside ");
        }

        //up
        if(ya>0.4 && yb>0.4 && yb>0.4 && yd>0.4)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.4 && yb<-0.4 && yb<-0.4 && yd<-0.4)
        {
            printf("Down ");
        }

        //right
        if(xa>0.4 && xb>0.4 && xb>0.4 && xd>0.4)
        {
            printf("Right ");
        }

        //Left
        if(xa<-0.4 && xb<-0.4 && xb<-0.4 && xd<-0.4)
        {
            printf("Left ");
        }

        printf("\n");

        break;
    case 'm':
        //glScalef(1.1, 1.1, 1);
        xa = xa*1.1;
        xb = xb*1.1;
        xc = xc*1.1;
        xd = xd*1.1;
        ya = ya*1.1;
        yb = yb*1.1;
        yc = yc*1.1;
        yd = yd*1.1;
        glutPostRedisplay();

        //inside
        if(xa>=-0.4 && xa<=0.4 && xb>=-0.4 && xb<=0.4 && xc>=-0.4 && xc<=0.4 && xd>=-0.4 && xd<=0.4 && ya>=-0.4 && ya<=0.4 && yb>=-0.4 && yb<=0.4 && yc>=-0.4 && yc<=0.4 && yd>=-0.4 && yd<=0.4)
        {
           printf("Inside ");
        }

        //up
        if(ya>0.4 && yb>0.4 && yb>0.4 && yd>0.4)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.4 && yb<-0.4 && yb<-0.4 && yd<-0.4)
        {
            printf("Down ");
        }

        //right
        if(xa>0.4 && xb>0.4 && xb>0.4 && xd>0.4)
        {
            printf("Right ");
        }

        //Left
        if(xa<-0.4 && xb<-0.4 && xb<-0.4 && xd<-0.4)
        {
            printf("Left ");
        }

        printf("\n");

        break;
    case 'n':
        //glScalef(0.9, 0.9, 1);
        xa = xa*0.9;
        xb = xb*0.9;
        xc = xc*0.9;
        xd = xd*0.9;
        ya = ya*0.9;
        yb = yb*0.9;
        yc = yc*0.9;
        yd = yd*0.9;
        glutPostRedisplay();

        //inside
        if(xa>=-0.4 && xa<=0.4 && xb>=-0.4 && xb<=0.4 && xc>=-0.4 && xc<=0.4 && xd>=-0.4 && xd<=0.4 && ya>=-0.4 && ya<=0.4 && yb>=-0.4 && yb<=0.4 && yc>=-0.4 && yc<=0.4 && yd>=-0.4 && yd<=0.4)
        {
           printf("Inside ");
        }

        //up
        if(ya>0.4 && yb>0.4 && yb>0.4 && yd>0.4)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.4 && yb<-0.4 && yb<-0.4 && yd<-0.4)
        {
            printf("Down ");
        }

        //right
        if(xa>0.4 && xb>0.4 && xb>0.4 && xd>0.4)
        {
            printf("Right ");
        }

        //Left
        if(xa<-0.4 && xb<-0.4 && xb<-0.4 && xd<-0.4)
        {
            printf("Left ");
        }

        printf("\n");

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
