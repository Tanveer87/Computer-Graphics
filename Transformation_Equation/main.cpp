#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<stdio.h>


float xa=0.2,ya=0.2, xb=-0.2,yb=0.2, xc=-0.2,yc=-0.2, xd=0.2,yd=-0.2;
float ty=0.1, tx=0.1,temp;
int clock_wise=-45, anti_clock_wise=45;
float gx = 2, gy = 2, sx = 0.5, sy = 0.5;

void display(){
    glClear(GL_COLOR_BUFFER_BIT);//This clears out the previous buffer so that we can see a single object moving rather than object overlays.

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex2f(xa,ya);
    glColor3f(1,1,0);
    glVertex2f(xb,yb);
    glColor3f(0,1,1);
    glVertex2f(xc,yc);
    glColor3f(1,0,1);
    glVertex2f(xd,yd);
    glEnd();

    glFlush();
 }

 void keyboard(unsigned char key, int x, int y){

     switch(key){
        case 'w':
            ya = ya+ty;
            yb = yb+ty;
            yc = yc+ty;
            yd = yd+ty;
            glutPostRedisplay();
            break;

        case 's':
            ya = ya-ty;
            yb = yb-ty;
            yc = yc-ty;
            yd = yd-ty;
            glutPostRedisplay();
            break;

        case 'd':

           xa = xa+tx;
           xb = xb+tx;
           xc = xc+tx;
           xd = xd+tx;
           glutPostRedisplay();
           break;

        case 'a':
            xa = xa-tx;
            xb = xb-tx;
            xc = xc-tx;
            xd = xd-tx;
            glutPostRedisplay();
            break;

        case 'r':
            temp = xa;
            xa = xa*cos(anti_clock_wise) - ya*sin(anti_clock_wise);
            ya = temp*sin(anti_clock_wise) + ya*cos(anti_clock_wise);

            temp = xb;
            xb = xb*cos(anti_clock_wise) - yb*sin(anti_clock_wise);
            yb = temp*sin(anti_clock_wise) + yb*cos(anti_clock_wise);

            temp = xc;
            xc = xc*cos(anti_clock_wise) - yc*sin(anti_clock_wise);
            yc = temp*sin(anti_clock_wise) + yc*cos(anti_clock_wise);

            temp = xd;
            xd = xd*cos(anti_clock_wise) - yd*sin(anti_clock_wise);
            yd = temp*sin(anti_clock_wise) + yd*cos(anti_clock_wise);

            glutPostRedisplay();
            break;

        case 'c':

            temp = xa;
            xa = xa*cos(clock_wise) - ya*sin(clock_wise);
            ya = temp*sin(clock_wise) + ya*cos(clock_wise);

            temp = xb;
            xb = xb*cos(clock_wise) - yb*sin(clock_wise);
            yb = temp*sin(clock_wise) + yb*cos(clock_wise);

            temp = xc;
            xc = xc*cos(clock_wise) - yc*sin(clock_wise);
            yc = temp*sin(clock_wise) + yc*cos(clock_wise);

            temp = xd;
            xd = xd*cos(clock_wise) - yd*sin(clock_wise);
            yd = temp*sin(clock_wise) + yd*cos(clock_wise);

            glutPostRedisplay();
            break;

        case 'm':
            xa = gx*xa;
            ya = gy*ya;
            xb = gx*xb;
            yb = gy*yb;
            xc = gx*xc;
            yc = gy*yc;
            xd = gx*xd;
            yd = gy*yd;
            glutPostRedisplay();
            break;


        case 'n':
            xa = sx*xa;
            ya = sy*ya;
            xb = sx*xb;
            yb = sy*yb;
            xc = sx*xc;
            yc = sy*yc;
            xd = sx*xd;
            yd = sy*yd;
            glutPostRedisplay();
            break;

     }
 }


int main(int argc, char **argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Transformatin Equation");
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;

 }
