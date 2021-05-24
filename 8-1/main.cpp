#include <opencv/highgui.h>

int main()

{

    IplImage*img=cvLoadImage("puipui.jpg");

    cvShowImage("week08",img);

    cvWaitKey(0);



}
