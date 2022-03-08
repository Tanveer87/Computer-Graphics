#include <windows.h>
#include <GL/glut.h>

float angle = 0;

void spin(void)
{
    angle = angle + 0.01;
    glutPostRedisplay();
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);
    glRotatef(angle, 1, 0, 0);
    glRotatef(angle, 0, 1, 0);
    glRotatef(angle, 0, 0, 1);
    glColor3f(0, 1, 0);
    //glutWireCone(3,3,10,20);
    //glutSolidCone(2,3,20,20);
    //glutWireSphere(2,30,30); //For better sphere we need more slice and stack
    //glutWireTorus(0.5,1,20,40);
    //glutWireIcosahedron(); //no parameter
    //glutWireDodecahedron(); //no parameter
    glutWireTeapot(2.0);
    glFlush();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60, w/h, 1, 100);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("CSE 4-2 A1");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(spin);
    glutMainLoop();
    return 0;
}
