//
// Created by mehdi on 16/02/16.
//

#ifndef LUMINOLGL_VERTEXARRAYOBJECT_H
#define LUMINOLGL_VERTEXARRAYOBJECT_H


#include <GL/glew.h>
#include <vector>

#include "graphics/VertexBufferObject.h"

namespace Graphics
{
    class VertexArrayObject {
    private:
        GLuint _glId;
        std::vector<VertexBufferObject*> _vbos;
    public:
        VertexArrayObject();
        void addVBO(VertexBufferObject* vbo);
        void init();
        void bind();
        GLuint glId();
        static void unbindAll();
    };
}




#endif //LUMINOLGL_VERTEXARRAYOBJECT_H
