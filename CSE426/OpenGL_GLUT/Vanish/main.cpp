#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>

int num,score=0;
int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0;

/** Properties for Objects **/
float ob1Xmin=0.5,ob1Ymin=0.3,ob1Xmax=0.6,ob1Ymax=0.4;
float ob2Xmin=0.1,ob2Ymin=0.4,ob2Xmax=0.25,ob2Ymax=0.55;
float ob3Xmin=0.1,ob3Ymin=0.1,ob3Xmax=0.3,ob3Ymax=0.3;
float ob4Xmin=-0.3,ob4Ymin=-0.3,ob4Xmax=-0.1,ob4Ymax=-0.1;
float ob5Xmin=-0.9,ob5Ymin=-0.9,ob5Xmax=-0.8,ob5Ymax=-0.8;
float ob6Xmin=-0.9,ob6Ymin=0.6,ob6Xmax=-0.7,ob6Ymax=0.8;
float ob7Xmin=0.7,ob7Ymin=-0.8,ob7Xmax=0.9,ob7Ymax=-0.6;
float ob8Xmin=-0.95,ob8Ymin=0.1,ob8Xmax=-0.85,ob8Ymax=0.35;




/** Properties for Main Polygon **/
float xa=0.05,ya=0.05,xb=0.05,yb=-0.05,xc=-0.05,yc=-0.05,xd=-0.05,yd=0.05;
float dx=0,dy=0;
float j=45,k=-45;
float t1,t2,t3,t4;
float xmin,xmax,ymin,ymax;


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    if(num>=5)
    {
        glBegin(GL_QUADS);
        glColor3f(1,1,1);
        glVertex2d(ob1Xmin,ob1Ymin);
        glVertex2d(ob1Xmax,ob1Ymin);
        glColor3f(1,0,2);
        glVertex2d(ob1Xmax,ob1Ymax);
        glVertex2d(ob1Xmin,ob1Ymax);
        glEnd();
        glFlush();

        glBegin(GL_QUADS);
        glColor3f(1,0,1);
        glVertex2d(ob2Xmin,ob2Ymin);
        glVertex2d(ob2Xmax,ob2Ymin);
        glColor3f(1,1,0);
        glVertex2d(ob2Xmax,ob2Ymax);
        glVertex2d(ob2Xmin,ob2Ymax);
        glEnd();
        glFlush();

        glBegin(GL_QUADS);
        glColor3f(0,0,1);
        glVertex2d(-0.9,0.6);
        glColor3f(1,1,0);
        glVertex2d(-0.7,0.6);
        glColor3f(1,0,1);
        glVertex2d(-0.7,0.8);
        glColor3f(0,1,1);
        glVertex2d(-0.9,0.8);
        glEnd();
        glFlush();

        glBegin(GL_QUADS);
        glColor3f(1,0,1);
        glVertex2d(ob7Xmin,ob7Ymin);
        glColor3f(1,1,1);
        glVertex2d(ob7Xmax,ob7Ymin);
        glColor3f(1,0,1);
        glVertex2d(ob7Xmax,ob7Ymax);
        glColor3f(0,1,0);
        glVertex2d(ob7Xmin,ob7Ymax);
        glEnd();
        glFlush();

        glBegin(GL_QUADS);
        glColor3f(1,1,1);
        glVertex2d(ob8Xmin,ob8Ymin);
        glColor3f(1,0,0);
        glVertex2d(ob8Xmax,ob8Ymin);
        glColor3f(1,1,0);
        glVertex2d(ob8Xmax,ob8Ymax);
        glColor3f(0,1,1);
        glVertex2d(ob8Xmin,ob8Ymax);
        glEnd();
        glFlush();
        if(num>=6)
        {

            glBegin(GL_QUADS);
            glColor3f(1,0,0);
            glVertex2d(ob3Xmin,ob3Ymin);
            glVertex2d(ob3Xmax,ob3Ymin);
            glVertex2d(ob3Xmax,ob3Ymax);
            glVertex2d(ob3Xmin,ob3Ymax);
            glEnd();
            glFlush();

            if(num>=7)
            {
                glBegin(GL_QUADS);
                glColor3f(0,1,0);
                glVertex2d(ob4Xmin,ob4Ymin);
                glVertex2d(ob4Xmax,ob4Ymin);
                glVertex2d(ob4Xmax,ob4Ymax);
                glVertex2d(ob4Xmin,ob4Ymax);
                glEnd();
                glFlush();

                if(num>=8)
                {
                    glBegin(GL_QUADS);
                    glColor3f(0,1,1);
                    glVertex2d(ob5Xmin,ob5Ymin);
                    glColor3f(1,0,1);
                    glVertex2d(ob5Xmax,ob5Ymin);
                    glColor3f(1,0,0);
                    glVertex2d(ob5Xmax,ob5Ymax);
                    glColor3f(0,0,1);
                    glVertex2d(ob5Xmin,ob5Ymax);
                    glEnd();
                    glFlush();
                }
            }
        }
    }

    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(xa+dx,ya+dy);
    glVertex2f(xb+dx,yb+dy);
    glVertex2f(xc+dx,yc+dy);
    glVertex2f(xd+dx,yd+dy);
    glEnd();
    glFlush();

    glutSwapBuffers();
}
void vanish(int x)
{
    if((x==1) && (f1==0))
    {
        ob1Xmin=0;
        ob1Ymin=0;
        ob1Xmax=0;
        ob1Ymax=0;

        f1=1;
        score = score + 5;
        printf("\n--> Your Score : %d\n",score);
    }
    else if((x==2) && (f2==0))
    {
        ob2Xmin=0;
        ob2Ymin=0;
        ob2Xmax=0;
        ob2Ymax=0;

        f2=1;
        score = score + 5;
        printf("\n--> Your Score : %d\n",score);
    }
    else if((x==3) && (f3==0))
    {
        ob3Xmin=0;
        ob3Ymin=0;
        ob3Xmax=0;
        ob3Ymax=0;

        f3=1;
        score = score + 5;
        printf("\n--> Your Score : %d\n",score);
    }
    else if((x==4) && (f4==0))
    {
        ob4Xmin=0;
        ob4Ymin=0;
        ob4Xmax=0;
        ob4Ymax=0;

        f4=1;
        score = score + 5;
        printf("\n--> Your Score : %d\n",score);
    }
    else if((x==5) && (f5==0))
    {
        ob5Xmin=0;
        ob5Ymin=0;
        ob5Xmax=0;
        ob5Ymax=0;

        f5=1;
        score = score + 5;
        printf("\n--> Your Score : %d\n",score);
    }
    else if((x==6) && (f6==0))
    {
        ob6Xmin=0;
        ob6Ymin=0;
        ob6Xmax=0;
        ob6Ymax=0;

        f6=1;
        score = score + 5;
        printf("\n--> Your Score : %d\n",score);
    }
    else if((x==7) && (f7==0))
    {
        ob7Xmin=0;
        ob7Ymin=0;
        ob7Xmax=0;
        ob7Ymax=0;

        f7=1;
        score = score + 5;
        printf("\n--> Your Score : %d\n",score);
    }
    else if((x==8) && (f8==0))
    {
        ob8Xmin=0;
        ob8Ymin=0;
        ob8Xmax=0;
        ob8Ymax=0;

        f8=1;
        score = score + 5;
        printf("\n--> Your Score : %d\n",score);
    }

}
void check()
{
    xmin = (-0.5+dx);
    xmax = (0.05+dx);
    ymin = (-0.5+dy);
    ymax = (0.05+dy);

    if(num>=5)
    {
        /* 1,2,6,7,8 */
        /** object 1 **/
        if(xmax>=0.5&&xmax<=0.6)
        {
            if(ymin<=0.4&&ymin>=0.3)
            {
                vanish(1);
                score = score + 5;
                printf("--> Your Score : %d\n",score);
            }
            else if(ymax>=0.3&&ymax<=0.4)
            {
                vanish(1);
            }
        }
        /** object 2 **/
        if(xmax>=0.1&&xmax<=0.25)
        {
            if(ymin<=0.55&&ymin>=0.4)
            {
                vanish(2);
            }
            else if(ymax>=0.4&&ymax<=0.55)
            {
                vanish(2);
            }
        }

        /** object 6 **/
        if((xc+dx)<=-0.7 && (xc+dx)>=-0.9)
        {
            if((yc+dy)<=0.8 && (yc+dy)>=0.6)
            {
                vanish(6);
            }
        }

        /** object 7 */
        if((xa+dx)<=0.9&& (xa+dx)>=0.7)
        {
            if((ya+dy)<=-0.5 && (ya+dy)>=-0.8)
            {
                vanish(7);
            }
        }

        /** object 8 */
        if((xc+dx)<=-0.85 && (xc+dx)>=-0.95)
        {
            if((yc+dy)<=0.35 && (yc+dy)>=0.1)
            {
                vanish(8);
            }
        }
        if(num>=6)
        {
            /* 3 */
            /** object 3 **/
            if(xmax>=0.1&&xmax<=0.3)
            {
                if(ymin<=0.3&&ymin>=0.1)
                {
                    vanish(3);
                }
                else if(ymax>=0.1&&ymax<=0.3)
                {
                    vanish(3);
                }
            }

            if(num>=7)
            {
                /** object 4 **/
                if((xc+dx)<=-0.1 && (xc+dx)>=-0.3)
                {
                    if((yc+dy)<=-0.1 && (yc+dy)>=-0.3)
                    {
                        vanish(4);
                    }
                }

                if(num>=8)
                {
                    /** object 5 **/
                    /** ob5Xmin=-0.9,ob5Ymin=-0.9,ob5Xmax=-0.8,ob5Ymax=-0.8; **/
                    if((xc+dx)<=-0.8 && (xc+dx)>=-0.9)
                    {
                        if((yc+dy)<=-0.8 && (yc+dy)>=-0.9)
                        {
                            vanish(5);
                        }
                    }

                }
            }
        }
    }
}

void keyboard(unsigned char key,int x, int y)
{
    switch(key)
    {
    case 'w':
    {
        dy=dy+0.01;
        check();
        glutPostRedisplay();
        break;
    }

    case 's':
    {
        dy=dy-0.01;
        check();
        glutPostRedisplay();
        break;
    }

    case 'a':
    {
        dx=dx-0.01;
        check();
        glutPostRedisplay();
        break;
    }

    case 'd':
    {
        dx=dx+0.01;
        check();
        glutPostRedisplay();
        break;
    }

    case 'x':
    {
        t1=xa;
        xa=xa*cos(j)-ya*sin(j);
        ya=t1*sin(j)+ya*cos(j);
        t2=xb;
        xb=xb*cos(j)-yb*sin(j);
        yb=t2*sin(j)+yb*cos(j);
        t3=xc;
        xc=xc*cos(j)-yc*sin(j);
        yc=t3*sin(j)+yc*cos(j);
        t4=xd;
        xd=xd*cos(j)-yd*sin(j);
        yd=t4*sin(j)+yd*cos(j);
        check();
        glutPostRedisplay();
        break;
    }
    case 'y':
    {
        t1=xa;
        xa=xa*cos(k)-ya*sin(k);
        ya=t1*sin(k)+ya*cos(k);
        t2=xb;
        xb=xb*cos(k)-yb*sin(k);
        yb=t2*sin(k)+yb*cos(k);
        t3=xc;
        xc=xc*cos(k)-yc*sin(k);
        yc=t3*sin(k)+yc*cos(k);
        t4=xd;
        xd=xd*cos(k)-yd*sin(k);
        yd=t4*sin(k)+yd*cos(k);
        check();
        glutPostRedisplay();
        break;
    }
    }
}

int main(int argc, char **argv)
{

    int lower = 5, upper = 8;

    // Use current time as
    // seed for random generator
    srand(time(0));
    num = (rand() % (upper - lower + 1)) + lower;
    printf("Object Created : %d ", num);

    glutInit(&argc,argv);
    glutInitWindowSize(600,600);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Vanish");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
