#include<stdio.h>
#include<bits/stdc++.h>
#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<string>
using namespace std;
float x1=-0.75,y11=0.10,x2=-0.75,y2=0.30,x3=-0.55,y3=0.30,x4=-.55,y4=0.10;
float x,y,xx,yy,xxx,yyy,xxxx,yyyy,xx1,yy1,r=0.05,tx=0.0,ty=0.0,a=0.5,b=0.5;
float xmin,ymin,xmax,ymax;
float aa[4]= {+0.20,-0.40,-0.60,+0.80};
float bb[4]= {+0.20,-0.40,+0.60,-0.80};
float ang=0;
int score=0;
clock_t start;
double duration;
string timerValue,CurrentScore;

void drawstring(void* font,float x, float y,char *str)
{   glColor3f(0.76,.48,0.0);
    char *ch;
    glRasterPos3f(x,y,0.0);
    for(ch=str; *ch; ch++)
    {
        glutBitmapCharacter(font,(int)*ch);

    }
}

void displayTimer(void * font, std::string text, float x, float y)
{
    glColor3f(0.0,1.0,0.7);
    glRasterPos2f(x, y);
    for (string::iterator i = text.begin(); i != text.end(); ++i)
    {
        char c = *i;
        glutBitmapCharacter(font, c);
    }
}

void displayscore(void * font, std::string text, float x, float y)
{
    glColor3f(1.0,0.0,0.0);
    glRasterPos2f(x, y);
    for (string::iterator i = text.begin(); i != text.end(); ++i)
    {
        char c = *i;
        glutBitmapCharacter(font, c);
    }
}

void display()
{
    x=x1*cos(ang)-y11*sin(ang);
    y=x1*sin(ang)+y11*cos(ang);
    xx=x2*cos(ang)-y2*sin(ang);
    yy=x2*sin(ang)+y2*cos(ang);
    xxx=x3*cos(ang)-y3*sin(ang);
    yyy=x3*sin(ang)+y3*cos(ang);
    xxxx=x4*cos(ang)-y4*sin(ang);
    yyyy=x4*sin(ang)+y4*cos(ang);
    float ttx=x,ttxx=xx,ttxxx=xxx,ttxxxx=xxxx,tty=y,ttyy=yy,ttyyy=yyy,ttyyyy=yyyy;

    x+=tx,xx+=tx,xxx+=tx,xxxx+=tx;
    y+=ty,yy+=ty,yyy+=ty,yyyy+=ty;
    xmax=max(x,max(xx,max(xxx,xxxx)));
    xmin=min(x,min(xx,min(xxx,xxxx)));
    ymax=max(y,max(yy,max(yyy,yyyy)));
    ymin=min(y,min(yy,min(yyy,yyyy)));

    for(int i=0; i<4; i++)
    {
        if((aa[i]>=xmin && aa[i]<=xmax) && (bb[i]>=ymin && bb[i]<=ymax) )
        {
            aa[i]*=100.0;
            bb[i]*=100.0;
            score++;
            CurrentScore=to_string(score);
            duration = ( clock() - start ) / (double) CLOCKS_PER_SEC;
            timerValue=to_string(duration);
            break;
        }
    }

    glClear(GL_COLOR_BUFFER_BIT);
    drawstring(GLUT_BITMAP_HELVETICA_18,-0.30,0.85,"Graphics Project");
    drawstring(GLUT_BITMAP_HELVETICA_18,0.20,0.85,"Your Score: ");
    displayscore(GLUT_BITMAP_HELVETICA_18,CurrentScore,0.60,0.85);
    drawstring(GLUT_BITMAP_HELVETICA_18,0.20,0.75,"Timer:     ");
    displayTimer(GLUT_BITMAP_HELVETICA_18,timerValue,0.50,0.75);
    drawstring(GLUT_BITMAP_HELVETICA_18,0.80,0.75,"sec");
    for(int j=0; j<4; j++)
    {
        glColor3f(0,1,0);
        glBegin(GL_POLYGON);
        for(float i=0; i<360; i+=0.01)
        {
            xx1=r*cos(i)+aa[j];
            yy1=r*sin(i)+bb[j];
            glVertex2f(xx1,yy1);
        }
        glEnd();
        glFlush();
    }
    glColor3f(1,0,0);
    glBegin(GL_QUADS);
    glVertex2f(ttx+tx,tty+ty);
    glVertex2f(ttxx+tx,ttyy+ty);
    glVertex2f(ttxxx+tx,ttyyy+ty);
    glVertex2f(ttxxxx+tx,ttyyyy+ty);
    glEnd();
    glutSwapBuffers();
    glutPostRedisplay();
       if(score==4)
    {   Sleep(1000);
        exit(0);
    }

}
void keyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
    case 'w':
        ty=ty+0.1;
        break;
    case 's':
        ty=ty-0.1;
        break;
    case 'a':
        tx=tx-0.1;
        break;
    case 'd':
        tx=tx+0.1;
        break;
    case 'h':
        ang+=0.1;
        break;
    case 'j':
        ang-=0.1;
        break;
    }
}
int main(int arg,char **args)
{
    start = std::clock();
    glutInit(&arg,args);
    glutInitWindowSize(700,600);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutCreateWindow("16101103");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}

