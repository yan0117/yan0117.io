#include <GL/glut.h>
float angle=0;
void hand()
{
    glPushMatrix();
        glScalef(0.5,0.1,0.1);//�ӲӪ�����
        glutSolidCube(1);//���
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(-0.25,0,0);
        glRotatef(angle,0,0,1);
        glTranslatef(-0.25,0,0);
        hand();//�W���u
        glPushMatrix();//�ƥ��x�}
            glTranslatef(-0.25,0,0);//�⥿�T��ʪ����u���b�ӤW
            glRotatef(angle,0,0,1);//���angle�C�����Nangle++
            glTranslatef(-0.25,0,0);//�N���त�ߩ�b������
            hand();//�U��y
        glPopMatrix();//�٭�x�}
    glPopMatrix();
    glutSwapBuffers();
    angle++;
}
int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("08160723week06");
    glutIdleFunc(display);//�@���e
    glutDisplayFunc(display);//���@�U��ܪ��禡
    glutMainLoop();
}
