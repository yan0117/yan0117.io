#include <GL/glut.h>
float angle=0;
void display(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();//�ƥ��x�}
        //glTranslatef(0,0,0);//�⥿�T��ʪ����u���b�ӤW
        //glRotatef(angle++,0,0,1);//���angle�C�����Nangle++
        glTranslatef(-0.25,0,0);//�N���त�ߩ�b������
        glScalef(0.5,0.1,0.1);//�դj�p�ܲӪ�
        glutSolidCube(1);//���
    glPopMatrix();//�٭�x�}
    glutSwapBuffers();
}
int main(int argc,char**argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("08160723week06");
    glutIdleFunc(display);//�@���e
    glutDisplayFunc(display);//���@�U��ܪ��禡
    glutMainLoop();
}
