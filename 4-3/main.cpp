#include<GL/glut.h>//�ϥ�GLUT�~��
#include<stdio.h>//����02
float teapotx=0,teapoty=0;//����2-01
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//�M��
    glPushMatrix();//����2-03�x�}�ƥ�
    glTranslated(teapotx,teapoty,0);//����2-04�ӵۮy�в���
    glutSolidTeapot(0.3);//��߯���
    glPopMatrix();//�x�}�٭�
    glutSwapBuffers();//�洫�⭿��buffers
}
//void mouse(int button,int state,int x,int y)//����03
//{
//   if(state==GLUT_DOWN){
//        printf("glVertex3f((%d-150)/150.0,-(%d-150)/150.0\n",x,y);
//  }
    //printf("button:%d,state:%d,x:%d,y:%d\n",button,state,x,y);
//}
void motion(int x,int y){//����2-02
    teapotx=(x-150)/150.0;
    teapoty=-(y-150)/150.0;
    display();
}
int main(int argc,char**argv)//�H�e�Oint main()
{
    glutInit(&argc,argv);//GLUT��l��

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//��ܼҦ�

    glutCreateWindow("week04");//�}��

    glutDisplayFunc(display);//���@�U�n��ܪ��禡
    //glutMouseFunc(mouse);//����01
    glutMotionFunc(motion);//����2-02
    glutMainLoop();//�D�n�j��
}
