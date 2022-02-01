#include<windows.h>
#include<GL/glut.h>

void display(void)
{

    /*glBegin(GL_LINES);  //2 ta vertex rakhle 1 ta line pabo,4 ta vertex rakhle 2 ta line pabo

    glColor3f(1, 0, 0);
    glVertex2f(0.5, 0.5);
    glVertex2f(-0.5, -0.5);

    glColor3f(0, 1, 0);
    glVertex2f(-0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glEnd();

    glFlush();*/

    glBegin(GL_TRIANGLES); //Drawing a Triangle
    glColor3f(1, 0, 0);
    glVertex2f(0, 1);
    glVertex2f(-1, 0);
    glVertex2f(1, 0);
    glEnd();

    glBegin(GL_QUADS);  //Drawing a Quads
    glColor3f(0, 1, 0);
    glVertex2f(-0.5, 0);
    glVertex2f(0.5, 0);
    glVertex2f(0.5, -1);
    glVertex2f(-0.5, -1);
    glEnd();


    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);           // initialize glut
    glutInitDisplayMode(GLUT_SINGLE);// single mood,object move kore na tai single, jodi object move korte chai tahole double dibo
    glutInitWindowSize(500, 500);    // graphic window size (amra bole disi, width and height)
    glutInitWindowPosition(100,100); // Monitor er kon position a eita open hobe
    glutCreateWindow("CSE 4-2 A1");  // Title for windows
    glutDisplayFunc(display);        // Calling display function (Canvas a ja likhsi take call korbo)
    glutMainLoop();                  // Blink kore jate chole na jay, jate stable thake windows
    return 0;
}
