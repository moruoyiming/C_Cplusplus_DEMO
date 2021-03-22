#include <iostream>

using namespace std;

class ImageView {
private:
    int viewSize;

//    ==============引出友元类================
    friend class Class;
};


//Java每个类，都有一个Class，此Class可以操作 ImageView私有成员
class Class {
public:
    ImageView imageView;

    void changeViewSize(int size) {
//'viewSize' is a private member of 'ImageView'
        imageView.viewSize = size;
    }


    int getViewSize() {
        return imageView.viewSize;
    }

};


/**
 * 友元类  【ImageView 私有成员 可以通过Class反射来访问，但是Class操作的是native C++代码】
 * @return
 */
int main() {
    Class mImageViewClass;
    mImageViewClass.changeViewSize(23232);
    cout << "viewsize = " << mImageViewClass.getViewSize() << endl;
    return 0;
}