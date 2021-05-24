#include<GL/glut.h>//使用GLUT外掛
#include<stdio.h>//今日02
float teapotx=0,teapoty=0;//今日2-01
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);//清空
    glPushMatrix();//今日2-03矩陣備份
    glTranslated(teapotx,teapoty,0);//今日2-04照著座標移動
    glutSolidTeapot(0.3);//實心茶壺
    glPopMatrix();//矩陣還原
    glutSwapBuffers();//交換兩倍的buffers
}
//void mouse(int button,int state,int x,int y)//今日03
//{
//   if(state==GLUT_DOWN){
//        printf("glVertex3f((%d-150)/150.0,-(%d-150)/150.0\n",x,y);
//  }
    //printf("button:%d,state:%d,x:%d,y:%d\n",button,state,x,y);
//}
void motion(int x,int y){//今日2-02
    teapotx=(x-150)/150.0;
    teapoty=-(y-150)/150.0;
    display();
}
int main(int argc,char**argv)//以前是int main()
{
    glutInit(&argc,argv);//GLUT初始值

    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);//顯示模式

    glutCreateWindow("week04");//開窗

    glutDisplayFunc(display);//等一下要顯示的函式
    //glutMouseFunc(mouse);//今日01
    glutMotionFunc(motion);//今日2-02
    glutMainLoop();//主要迴圈
}
