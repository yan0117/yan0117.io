#include <GL/glut.h>
int angle=0;
void drawarm1()
{
    glPushMatrix();
        glScalef(1,0.5,0.5);
        glColor3f(1,0,0);
        glutSolidCube(0.3);//�����
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//step02-1
        glColor3f(1,1,1);
        glutSolidCube(0.4);//�����
        glPushMatrix();
            glTranslatef(-0.2,+0.2,0);//����k�W��
            glRotatef(angle,0,0,1);//2���
            glTranslatef(-0.15,0,0);//1����त�ߪ����`�b��b������
            drawarm1();
        glPopMatrix();
    glPopMatrix();//step02-1
    glutSwapBuffers();
}

int diff=2;
void timer(int t)//step02-1�x���T�F timer�s�F
{
    glutTimerFunc(20,timer,t+1);//step02-1�]�w�U�@�Ӿx���O�ΤӤ[
    angle+=diff;//step02-1�W�Z��
    if(angle>90||angle<0)diff=-diff;
    display();//step02-1�ܤ�
}//�S�εۤF
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_DEPTH);
    glutCreateWindow("week14");
    glutDisplayFunc(display);
    glutTimerFunc(0,timer,0);//step02-1�Ϋe�Ĥ@�Ӿx��
    glutMainLoop();
}
