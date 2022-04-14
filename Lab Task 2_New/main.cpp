#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>
#define pi 3.14159265

float xa=0.2, ya=0.2, xb=0.2, yb=-0.2, xc=-0.2, yc=-0.2, xd=-0.2, yd=0.2;
void display(void)
{
    //glTranslatef(-0.4, 0.4, 0);

    //glRotatef(-45, 0, 0, 1);

    //glScalef(0.5, 0.5, 1);

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);

    glColor3f(0, 1, 0);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);

    glColor3f(1, 0, 0);
    glVertex2f(xa, ya);

    //glColor3f(0, 1, 0);
    glVertex2f(xb, yb);

    //glColor3f(0, 0, 1);
    glVertex2f(xc, yc);

    //glColor3f(0.6, 0.4, 0.1);
    glVertex2f(xd, yd);

    glEnd();
    glFlush();

}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'w':
        //glTranslatef(0, 0.01, 0);
        ya = ya + 0.01;
        yb = yb + 0.01;
        yc = yc + 0.01;
        yd = yd + 0.01;
        glutPostRedisplay();

        //inside
        if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
        {
            printf("Inside ");
        }
        else if((xa>=-0.5 && xa<=0.5 && ya>=-0.5 && ya<=0.5) || (xb>=-0.5 && xb<=0.5 && yb>=-0.5 && yb<=0.5) || (xc>=-0.5 && xc<=0.5 && yc>=-0.5 && yc<=0.5) || (xd>=-0.5 && xd<=0.5 && yd>=-0.5 && yd<=0.5))
        {
           printf("Intersect with ");
        }

        //up
        if(ya>0.5 || yb>0.5 || yc>0.5 || yd>0.5)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.5 || yb<-0.5 || yc<-0.5 || yd<-0.5)
        {
            printf("Down ");
        }

        //right
        if(xa>0.5 || xb>0.5 || xc>0.5 || xd>0.5)
        {
            printf("Right ");
        }

        //down
        if(xa<-0.5 || xb<-0.5 || xc<-0.5 || xd<-0.5)
        {
            printf("Left ");
        }

        printf("\n");

        break;

    case 's':
        //glTranslatef(0, -0.01, 0);
        ya = ya - 0.01;
        yb = yb - 0.01;
        yc = yc - 0.01;
        yd = yd - 0.01;
        glutPostRedisplay();
        //inside
        if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
        {
            printf("Inside ");
        }
        else if((xa>=-0.5 && xa<=0.5 && ya>=-0.5 && ya<=0.5) || (xb>=-0.5 && xb<=0.5 && yb>=-0.5 && yb<=0.5) || (xc>=-0.5 && xc<=0.5 && yc>=-0.5 && yc<=0.5) || (xd>=-0.5 && xd<=0.5 && yd>=-0.5 && yd<=0.5))
        {
            printf("Intersect with ");
        }

        //up
        if(ya>0.5 || yb>0.5 || yc>0.5 || yd>0.5)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.5 || yb<-0.5 || yc<-0.5 || yd<-0.5)
        {
            printf("Down ");
        }

        //right
        if(xa>0.5 || xb>0.5 || xc>0.5 || xd>0.5)
        {
            printf("Right ");
        }

        //down
        if(xa<-0.5 || xb<-0.5 || xc<-0.5 || xd<-0.5)
        {
            printf("Left ");
        }

        printf("\n");
        break;

    case 'a':
        //glTranslatef(-0.01, 0, 0);
        xa = xa - 0.01;
        xb = xb - 0.01;
        xc = xc - 0.01;
        xd = xd - 0.01;
        glutPostRedisplay();
        //inside
        if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
        {
            printf("Inside ");
        }
        else if((xa>=-0.5 && xa<=0.5 && ya>=-0.5 && ya<=0.5) || (xb>=-0.5 && xb<=0.5 && yb>=-0.5 && yb<=0.5) || (xc>=-0.5 && xc<=0.5 && yc>=-0.5 && yc<=0.5) || (xd>=-0.5 && xd<=0.5 && yd>=-0.5 && yd<=0.5))
        {
            printf("Intersect with ");
        }

        //up
        if(ya>0.5 || yb>0.5 || yc>0.5 || yd>0.5)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.5 || yb<-0.5 || yc<-0.5 || yd<-0.5)
        {
            printf("Down ");
        }

        //right
        if(xa>0.5 || xb>0.5 || xc>0.5 || xd>0.5)
        {
            printf("Right ");
        }

        //down
        if(xa<-0.5 || xb<-0.5 || xc<-0.5 || xd<-0.5)
        {
            printf("Left ");
        }

        printf("\n");
        break;

    case 'd':
        //glTranslatef(0.01, 0, 0);
        xa = xa + 0.01;
        xb = xb + 0.01;
        xc = xc + 0.01;
        xd = xd + 0.01;
        glutPostRedisplay();
        //inside
        if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
        {
            printf("Inside ");
        }
        else if((xa>=-0.5 && xa<=0.5 && ya>=-0.5 && ya<=0.5) || (xb>=-0.5 && xb<=0.5 && yb>=-0.5 && yb<=0.5) || (xc>=-0.5 && xc<=0.5 && yc>=-0.5 && yc<=0.5) || (xd>=-0.5 && xd<=0.5 && yd>=-0.5 && yd<=0.5))
        {
           printf("Intersect with ");
        }

        //up
        if(ya>0.5 || yb>0.5 || yc>0.5 || yd>0.5)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.5 || yb<-0.5 || yc<-0.5 || yd<-0.5)
        {
            printf("Down ");
        }

        //right
        if(xa>0.5 || xb>0.5 || xc>0.5 || xd>0.5)
        {
            printf("Right ");
        }

        //down
        if(xa<-0.5 || xb<-0.5 || xc<-0.5 || xd<-0.5)
        {
            printf("Left ");
        }

        printf("\n");
        break;

    case 'r':
        //glRotatef(1, 0, 0, 1);
        xa = xa*cos(pi/180)-ya*sin(pi/180);
        ya = xa*sin(pi/180)+ya*cos(pi/180);
        xb = xb*cos(pi/180)-yb*sin(pi/180);
        yb = xb*sin(pi/180)+yb*cos(pi/180);
        xc = xc*cos(pi/180)-yc*sin(pi/180);
        yc = xc*sin(pi/180)+yc*cos(pi/180);
        xd = xd*cos(pi/180)-yd*sin(pi/180);
        yd = xd*sin(pi/180)+yd*cos(pi/180);
        glutPostRedisplay();
        //inside
        if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
        {
            printf("Inside ");
        }

        //up
        if(ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
        {
            printf("Down ");
        }

        //right
        if(xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
        {
            printf("Right ");
        }

        //down
        if(xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
        {
            printf("Left ");
        }

        printf("\n");
        break;

    case 'c':
        //glRotatef(-1, 0, 0, 1);
        xa = xa*cos(-pi/180)-ya*sin(-pi/180);
        ya = xa*sin(-pi/180)+ya*cos(-pi/180);
        xb = xb*cos(-pi/180)-yb*sin(-pi/180);
        yb = xb*sin(-pi/180)+yb*cos(-pi/180);
        xc = xc*cos(-pi/180)-yc*sin(-pi/180);
        yc = xc*sin(-pi/180)+yc*cos(-pi/180);
        xd = xd*cos(-pi/180)-yd*sin(-pi/180);
        yd = xd*sin(-pi/180)+yd*cos(-pi/180);
        glutPostRedisplay();
        //inside
        if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
        {
            printf("Inside ");
        }

        //up
        if(ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
        {
            printf("Down ");
        }

        //right
        if(xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
        {
            printf("Right ");
        }

        //down
        if(xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
        {
            printf("Left ");
        }

        printf("\n");
        break;

    case 'm':
        //glScalef(1.1, 1.1, 1);
        xa = xa*1.1;
        ya = ya*1.1;
        xb = xb*1.1;
        yb = yb*1.1;
        xc = xc*1.1;
        yc = yc*1.1;
        xd = xd*1.1;
        yd = yd*1.1;
        glutPostRedisplay();
        //inside
        if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
        {
            printf("Inside ");
        }

        //up
        if(ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
        {
            printf("Down ");
        }

        //right
        if(xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
        {
            printf("Right ");
        }

        //down
        if(xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
        {
            printf("Left ");
        }


        printf("\n");
        break;

    case 'n':
        //glScalef(0.9, 0.9, 1);
        xa = xa*0.9;
        ya = ya*0.9;
        xb = xb*0.9;
        yb = yb*0.9;
        xc = xc*0.9;
        yc = yc*0.9;
        xd = xd*0.9;
        yd = yd*0.9;
        glutPostRedisplay();
        //inside
        if(xa>=-0.5 && xa<=0.5 && xb>=-0.5 && xb<=0.5 && xc>=-0.5 && xc<=0.5 && xd>=-0.5 && xd<=0.5 && ya>=-0.5 && ya<=0.5 && yb>=-0.5 && yb<=0.5 && yc>=-0.5 && yc<=0.5 && yd>=-0.5 && yd<=0.5)
        {
            printf("Inside ");
        }

        //up
        if(ya>0.5 && yb>0.5 && yc>0.5 && yd>0.5)
        {
            printf("Up ");
        }

        //down
        if(ya<-0.5 && yb<-0.5 && yc<-0.5 && yd<-0.5)
        {
            printf("Down ");
        }

        //right
        if(xa>0.5 && xb>0.5 && xc>0.5 && xd>0.5)
        {
            printf("Right ");
        }

        //down
        if(xa<-0.5 && xb<-0.5 && xc<-0.5 && xd<-0.5)
        {
            printf("Left ");
        }

        printf("\n");
        break;
    }
}

void special(int key, int x, int y)
{
    switch(key)
    {
    case GLUT_KEY_UP:
        glTranslatef(0, 0.01, 0);
        glutPostRedisplay();
        break;

    case GLUT_KEY_DOWN:
        glTranslatef(0, -0.01, 0);
        glutPostRedisplay();
        break;

    case GLUT_KEY_LEFT:
        glTranslatef(-0.01, 0, 0);
        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        glTranslatef(0.01, 0, 0);
        glutPostRedisplay();
        break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 B1");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(special);
    glutMainLoop();
    return 0;
}
