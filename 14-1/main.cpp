#include <GL/glut.h>

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.3,30,30);//��߶�y �b�| �a�� ���

    glutSwapBuffers();

}

void timer(int t)

{

    glClearColor(1,0,0,0);//�M���I�����C�� �����

    display();

}

int main(int argc,char **argv)

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);

    glutCreateWindow("week14");

    glutDisplayFunc(display);

    glutTimerFunc(4000,timer,0);//���h�[ �s�� �Ѽ�

    glutMainLoop();

}
