#ifndef NDKER_TRIANGLE_H
#define NDKER_TRIANGLE_H

#include "../util/GLUtils.h"

class TextureSample {
public:
    TextureSample() {

    }

    void onImage(uint8_t *buffer, int size, int w, int h);

    void onInit();

    void onChanged(int w, int h);

    void onDraw();

    void onDestroy();

    static TextureSample *instance();

protected:
    GLuint m_Texture;
    GLuint m_Program;
    GLuint m_VAO;
    GLuint m_VBO;
    GLuint m_EBO;
    uint8_t *m_buffer;
    int m_size;
    int m_w;
    int m_h;
private:
    static TextureSample *mSample;
};

#endif //NDKER_TRIANGLE_H
